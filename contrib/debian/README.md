
Debian
====================
This directory contains files used to package xcrcd/cryptocrowd-qt
for Debian-based Linux systems. If you compile xcrcd/cryptocrowd-qt yourself, there are some useful files here.

## cryptocrowd: URI support ##


cryptocrowd-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cryptocrowd-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cryptocrowdqt binary to `/usr/bin`
and the `../../share/pixmaps/cryptocrowd128.png` to `/usr/share/pixmaps`

cryptocrowd-qt.protocol (KDE)

