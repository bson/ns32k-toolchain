Replace x86_64-linux-gnu with whatever your host & build platform is below.

Confirmed to build on Ubuntu 22 and 24 LTS with gcc-13
Confirmed to build on WSL Ubuntu 20 LTS with gcc-11
Confirmed to build on Fedora 40 with gcc-14

Here is a set of packages needed for this:

gcc, make, bison, m4, flex, libncurses-dev
Ubuntu 20, 22, 24:
	sudo apt install gcc make bison m4 libncurses-dev

Fedora 40:
    sudo dnf install gcc make bison m4 ncurses-devel


cd binutils-2.13
LDFLAGS="-Wl,--allow-multiple-definition" CFLAGS="-Wno-implicit" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make CFLAGS="-D_FORTIFY_SOURCE=1 --no-warnings -Wno-implicit -Wl,--allow-multiple-definition"
sudo make -k install
(The last line will produce texinfo errors, ignore those)

cd gcc-3.2.3
CFLAGS="-Wno-implicit" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make PATH="/opt/ns32k-tools/bin:$PATH" CFLAGS="--no-warnings -Wno-incompatible-pointer-types -Wno-implicit -fno-stack-protector" -j10 all-gcc
sudo make install

cd gdb-5.3
PATH="/opt/ns32k-tools/bin:$PATH" CFLAGS="-Wno-implicit" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make PATH="/opt/ns32k-tools/bin:$PATH" CFLAGS="--no-warnings -Wno-implicit -fno-stack-protector" -j10
sudo make CFLAGS="--no-warnings -fno-stack-protector" install

After you've built, you can completely restore the repo with 'git clean -f' to remove all configure and build artifacts.
