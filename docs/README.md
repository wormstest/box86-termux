# box86-termux
Box86 lets you run x86 Linux programs (such as games) on non-x86 Linux systems, like ARM (host system needs to be 32bit little-endian). This repository instructions for installing and using box86 in Termux using proot, not chroot(because I have not yet been able to get termux-x11 to work in chroot and not every user has root rights), even with graphics acceleration for Adreno GPU.
### Progressbar
- [x] Wine
- [x] Xwayland(Termux-x11)
- [x] Adreno GPU's
- [x] On-screen joystick (using Input Bridge)
- [ ] Mali GPU's
- [ ] VirGL
### Problems, issuses and notes
- Too slow access to /sdcard, most likely a proot problem
- box86 not correcly working on Debian(bookworm tested), so recommend use Ubuntu 22.04
### Demonstration of work
- [Worms Armageddon gameplay](https://www.youtube.com/watch?v=OwUfBx2Tbh8)
### Installation instructions
- [English](https://github.com/wormstest/box86-termux/blob/main/docs/INSTALLATION.md)
- [Russian](https://github.com/wormstest/box86-termux/blob/main/docs/INSTALLATION(ru).md)
### Credits
- [ptitSeb](https://github.com/ptitSeb): for [box86](https://github.com/ptitSeb/box86)
- [alexvorxx](https://github.com/alexvorxx): for [Zink-Mesa-Xlib](https://github.com/alexvorxx/Zink-Mesa-Xlib)
- [Termux](https://github.com/termux) developers: for [termux-x11](https://github.com/termux/termux-x11)
- [Play on Linux](https://www.playonlinux.com) developers: for [Wine binaries](https://www.playonlinux.com/wine)
