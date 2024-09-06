Replace x86_64-linux-gnu with whatever your host & build platform is below.

Confirmed to build on Ubuntu 24 LTS with gcc-13
Confirmed to build on WSL Ubuntu 20 LTS with gcc-11


Here is a set of packages needed for this:

gcc, make, bison, m4, flex, libncurses-dev
Ubuntu:
	sudo apt install gcc make bison m4 libncurses-dev


cd binutils-2.13
LDFLAGS="-Wl,--allow-multiple-definition" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make CFLAGS="-D_FORTIFY_SOURCE=1 --no-warnings -Wl,--allow-multiple-definition"
sudo make -k install
(The last line will produce texinfo errors, ignore those)

cd gcc-3.2.3
./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make PATH="/opt/ns32k-tools/bin:$PATH" CFLAGS="--no-warnings -fno-stack-protector" -j10 all-gcc
sudo make install

cd gdb-5.3
PATH="/opt/ns32k-tools/bin:$PATH" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make PATH="/opt/ns32k-tools/bin:$PATH" CFLAGS="--no-warnings -fno-stack-protector" -j10
sudo make CFLAGS="--no-warnings -fno-stack-protector" install

After you've built, you can completely restore the repo with 'git clean -f' to remove all configure and build artifacts.
