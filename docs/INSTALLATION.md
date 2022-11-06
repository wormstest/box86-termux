## Instruction for installing box86 in Android using Termux, proot, Xwayland(Termux-x11), and hardware acceleration(only Adreno 616+)
### System requirements
- Any ARMv8
- 8-10 GB full space
- To use hardware acceleration need Adreno 616+ GPU(full list supported GPU's can read [here](https://www.exagear.wiki/index.php?title=Turnip#Supported_GPUs)
### Install Termux and setting Termux-x11
Since box86 needs a 32 bit system to work, we need a 32 bit [Termux](https://github.com/termux/termux-app/releases/download/v0.118.0/termux-app_v0.118.0+github-debug_armeabi-v7a.apk). We will also use Xwayalnd([Termux-x11](https://github.com/termux/termux-x11/suites/8768393687/artifacts/397664936)). Install Termux apk and unpack termux-x11 .zip. After, install termux-x11 apk and not delete archive(.deb file termux-x11 useful in the future).

Go to Termux and write this commands:

`~ $ termux-setup-storage`(give access to your storage)

`~ $ pkg update -y`(update repo, for questions about the openssl.cnf file, just press enter on your keyboard)

`~ $ pkg install x11-repo`(install x11-repo for install termux-x11)

Go to the folder where termux-x11.deb is located and install it:

`~ $ dpkg -i termux-x11.deb`(after installation, install the dependencies with the command `apt -f install -y`)

Set property allow-external-apps to true in ~/.termux/termux.properties:

`~ $ echo 'allow-external-apps = true' >> ~/.termux/termux.properties && termux-reload-settings`

Export XDG_RUNTIME_DIR:

`~ $ export XDG_RUNTIME_DIR=${TMPDIR}`

Start termux-x11:

`~ $ termux-x11 :1 &`

After opening the application, you can close it.

### Installing and setting proot-distro

Open a second Termux session and install proot-distro:

`~ $ pkg install proot-distro -y`

Install Ubuntu 22.04 in proot-distro(box86 in Debian not work correctly, so i recommend Ubuntu):

`~ $ proot-distro install ubuntu`

...and login

`~ $ proot-distro login ubuntu --shared-tmp`(need shared tmp from Termux because in this folder contains wayland-0 socket termux-x11)

### Setting Ubuntu 22.04 and box86

After login to Ubuntu update repo and packages:

`root@localhost:~# apt update && apt upgrade -y`

Install packages to build box86:

`root@localhost:~# apt install build-essential git nano cmake python3 -y`

...and clone and build box86 with Dynarec:

`root@localhost:~# git clone https://github.com/ptitSeb/box86 && cd box86 && mkdir build; cd build; cmake .. -DARM_DYNAREC=1 && make && make install`

After compile, you can leave and remove box86 directory:

`root@locahost:~/box86/cmake# cd .. && rm -r box86` 

#### Compile Adreno Turnip and Zink driver
Now, we can compile Turnip+Zink Mesa drivers. Add deb-src line to /etc/apt/sources.list:

`root@localhost:~# echo "deb-src [signed-by="/usr/share/keyrings/ubuntu-archive-keyring.gpg"] http://ports.ubuntu.com/ubuntu-ports jammy main universe multiverse" >> /etc/apt/sources.list`

...and run `apt update`.

Install required dependencies to build Mesa and git clone all required Mesa repositories:

`root@localhost:~# apt build-dep mesa -y && git clone https://github.com/mesa3d/mesa && git clone https://github.com/alexvorxx/Zink-Mesa-Xlib`

Paste drm and drm_mode.h to /usr/include:

`root@localhost:~# cp /usr/include/libdrm/drm.h /usr/include/libdrm/drm_mode.h /usr/include`

Compile Mesa:

`root@localhost:~# cd mesa && $ meson build -D platforms=x11,wayland -D gallium-drivers=swrast,virgl,zink -D vulkan-drivers=freedreno -D dri3=enabled  -D egl=enabled  -D gles2=enabled -D glvnd=true -D glx=dri  -D libunwind=disabled -D osmesa=true  -D shared-glapi=enabled -D microsoft-clc=disabled  -D valgrind=disabled --prefix /usr -D gles1=enabled -D freedreno-kgsl=true && ninja -C build install`

And compile Zink-Mesa-Xlib(for Zink to work in termux-x11, XServer XSDL etc:

`root@localhost:~/mesa# cd ~/Zink-Mesa-Xlib && meson . build -Dgallium-va=false -Ddri-drivers= -Dgallium-drivers=virgl,zink,swrast -Ddri3=true -Dvulkan-drivers= -Dglx=xlib -Dplatforms=x11 -Dbuildtype=release && ninja -C build install`

After compile and install, we can remove Mesa folders:

`root@localhost:~/Zink-Mesa-Xlib# cd .. && rm -r mesa Zink-Mesa-Xlib`

### Install and use Wine

After compile and install box86 and Adreno Turnip+Zink drivers we can install xfce4 DE(optional):

`root@localhost:~# apt install xfce4 xfce4-terminal -y`

After install xfce4, clone this repository and go to Wine 6.0 folder: 

`root@localhost:~# git clone https://github.com/wormstest/box86-termux && cd wine`

Reinstall the termux-x11 APK and run it again in the first session (you will have to do this every time you restart, otherwise there will be a black screen). Run xfce4:

`root@localhost:~# env DISPLAY=:1 xfce4-session` 

Open terminal and start Wine:

`root@localhost:~# export BOX86_PATH=~/box86-termux/wine/bin && box86 wine winecfg`

If winecfg opened, Wine and box86 sussesful installed. Also, we can test OpenGL render using glxgears:

`root@localhost:~# apt install mesa-utils && glxgears`

You should see gears in front of you.

### Setting Input Bridge 

We can use the screen control in box86 just like in ExaGear! Just download (this)[https://mega.nz/folder/GMND2ZSR#gLZ_KB9uLR4Kxgay9kp6tg] folder, install the APK, and open ib.exe

### Ending
If you have any questions or if you notice my mistake, please let me know in this repository in the Issuses tab
