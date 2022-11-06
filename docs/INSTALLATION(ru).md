## Инструкция по установке box86 на Android с использованием Termux, proot, Xwayland(Termux-x11) и аппаратного ускорения(только Adreno 616+)
### Системные требования
- Любой ARMv8 процессор
- 8-10 ГБ свободного места
- Для использования аппаратного ускорения OpenGL требуется графический процессор Adreno 616+ (полный список поддерживаемых графических процессоров можно найти [здесь](https://www.exagear.wiki/index.php?title=Turnip(ru)#Supported_GPUs))
### Установка 32 битного Termux и настройка Termux-x11
Поскольку для работы box86 требуется 32-битная система, вам нужен 32-битный [Termux](https://github.com/termux/termux-app/releases/download/v0.118.0/termux-app_v0.118.0+github-debug_armeabi-v7a.apk). Мы также будем использовать Xwayalnd([Termux-x11](https://github.com/termux/termux-x11/actions/workflows/debug_build.yml)). Установите apk Termux и распакуйте .zip файл termux-x11. После этого установите apk termux-x11 и не удаляйте архив (.deb
файл termux-x11 пригодится в будущем).

Перейдите в Termux и напишите следующие команды:

`~ $ termux-setup-storage`(для доступа к памяти устройства)

`~ $ pkg update -y` (Обновление репозитория, если у вас возникнут вопросы о изменении файла openssl.cnf, просто нажмите Enter на клавиатуре)

`~ $ pkg install x11-repo` (установите x11-repo для установки termux-x11)

Перейдите в папку, где находится termux-x11.deb, и установите его:

`~ $ dpkg -i termux-x11.deb` (после установки termux-x11 необходимо установить зависимости командой `apt -f install -y`)

Установите значение "allow-external-apps = true" в ~/.termux/termux.properties:

`~ $ echo 'allow-external-apps = true' >> ~/.termux/termux.properties && termux-reload-settings`

Экспортируйте XDG_RUNTIME_DIR:

`export XDG_RUNTIME_DIR=${TMPDIR}`

Запустите termux-x11:

`~ $ termux-x11: 1 &`

После открытия приложения его можно закрыть.

### Установка и настройка proot-дистрибутива

Откройте второй сеанс Termux и установите proot-distro:

`~ $ pkg install proot-distro -y`

Установите Ubuntu 22.04 в proot-distro (box86 в Debian работает некорректно, поэтому я рекомендую Ubuntu):

`~ $ proot-distro установить ubuntu`

...и войдите в систему

`~ $ proot-distro login ubuntu --shared-tmp`(нужен общий tmp от Termux, т.к. в этой папке содержится wayland-0 socket termux-x11)

### Настройка Ubuntu 22.04 и сборка box86

После входа в Ubuntu обновите репозиторий и пакеты:

`root@localhost:~# apt update && apt upgrade -y`

Установите пакеты для сборки box86:

`root@localhost:~# apt install build-essential git nano cmake python3 -y`

...и склонируйте и собрать box86 с помощью Dynarec:

`root@localhost:~# git clone https://github.com/ptitSeb/box86 && cd box86 && mkdir build; cd build; cmake .. -DARM_DYNAREC=1 && make && make install`

После компиляции вы можете удалить папку box86:

`root@locahost:~/box86/cmake# cd .. && rm -r box86`

#### Компиляция драйверов Adreno Turnip и Zink
Теперь мы можем скомпилировать драйверы Adreno Turnip+Zink для аппаратного ускорения OpenGL. Добавьте строку deb-src в /etc/apt/sources.list:

`root@localhost:~# echo "deb-src [signed-by="/usr/share/keyrings/ubuntu-archive-keyring.gpg"] http://ports.ubuntu.com/ubuntu-ports jammy main universe multiverse" >> /etc/apt/sources.list`

... и запустите `apt update`.

Установите необходимые зависимости для сборки Mesa и склонируйте все необходимые репозитории Mesa:

`root@localhost:~# apt build-dep mesa -y && git clone https://github.com/mesa3d/mesa && git clone https://github.com/alexvorxx/Zink-Mesa-Xlib`

Скопируйте drm и drm_mode.h в /usr/include:

`root@localhost:~# cp /usr/include/libdrm/drm.h /usr/include/libdrm/drm_mode.h /usr/include`

Скомпилируйте Mesa:

`root@localhost:~# cd mesa && $ meson build -D platform=x11,wayland -D gallium-drivers=swrast,virgl,zink -D vulkan-drivers=freedreno -D dri3=enabled -D egl=enabled -D gles2=enabled -D glvnd=true -D glx=dri -D libunwind=disabled -D osmesa=true -D shared-glapi=enabled -D microsoft-clc=disabled -D valgrind=disabled --prefix /usr -D gles1 =enabled -D freedreno-kgsl=true && ninja -C build install`

И скомпилируйте Zink-Mesa-Xlib (чтобы Zink работал в termux-x11, XServer XSDL и т.д):

`root@localhost:~/mesa# cd ~/Zink-Mesa-Xlib && meson . build -Dgallium-va=false -Ddri-drivers= -Dgallium-drivers=virgl,zink,swrast -Ddri3=true -Dvulkan-drivers= -Dglx=xlib -Dplatforms=x11 -Dbuildtype=release && ninja -C build install`

После компиляции и установки мы можем удалить папки Mesa:

`root@localhost:~/Zink-Mesa-Xlib# cd .. && rm -r mesa Zink-Mesa-Xlib`

### Установка и использование Wine

После компиляции и установки box86 и драйверов Adreno Turnip+Zink мы можем установить графическую среду xfce4 (опционально):

`root@localhost:~# apt install xfce4 xfce4-terminal -y`

После установки xfce4 склонируйте этот репозиторий и перейдите в папку Wine 6.0:

`root@localhost:~# git clone https://github.com/wormstest/box86-termux`

Переустановите APK-файл termux-x11 и снова запустите его в первой сессии (вам придется делать это каждый раз при перезагрузке, иначе будет черный экран). Запустите xfce4:

`root@localhost:~# env DISPLAY=:1 xfce4-session`

Откройте терминал и запустите Wine:

`root@localhost:~# export BOX86_PATH=~/box86-termux/wine/bin && box86 wine winecfg`

Если winecfg открылся, Wine и box86 успешно установлены. Также мы можем протестировать рендеринг OpenGL с помощью glxgears:

`root@localhost:~# apt install mesa-utils -y && glxgears`

Вы должны увидеть шестеренки на экране.

### Настройка экранного управления
Мы можем использовать экранное управление в box86 точно так же, как в ExaGear! Просто скачайте (эту)[https://mega.nz/folder/GMND2ZSR#gLZ_KB9uLR4Kxgay9kp6tg] папку, установите APK и откройте ib.exe в box86 используя Wine.

### А также...
...если у вас есть какие-либо вопросы или вы заметили ошибку, сообщите мне об этом в этом репозитории на вкладке «Вопросы».
