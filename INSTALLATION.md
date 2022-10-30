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

Start termux-x11:

`~ $ termux-x11 :1 &`

After opening the application, minimize it.

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

Not finished
