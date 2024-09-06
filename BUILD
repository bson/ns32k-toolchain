Replace x86_64-linux-gnu with whatever your host & build platform is below.

Confirmed to build on Ubuntu 22 and 24 LTS with gcc-13
Confirmed to build on WSL Ubuntu 20 LTS with gcc-11
Confirmed to build on Fedora 40 with gcc-14
Confirmed to build but NOT run on MacOS Darwin 23

Here is a set of packages needed for this:

gcc, make, bison, m4, flex, libncurses-dev
Ubuntu 20, 22, 24:
	sudo apt install gcc make bison m4 libncurses-dev

Fedora 40:
    sudo dnf install gcc make bison m4 ncurses-devel


cd binutils-2.13
CFLAGS="-Wno-implicit" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make CFLAGS="-D_FORTIFY_SOURCE=1 --no-warnings -Wno-implicit"
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


MacOS (Darwin) 23.4.0 notes:

 * Specifying x86_64-linux-gnu will produce executables that will run locally, while
   'aarch-apple-darwin' is an unrecognized platform.  Despite gcc -v identifying the local
   platform as such.  **SHRUG**
 * binutils builds and installs (after lobotimizing all the PITA texinfo stuff, the era of
   bundling docs with software is long past - just put it on the web)
 * The xgcc compiler produced crashes during insn emit for ns32k, usually a move instruction, while
   compiling the hard fp libgcc2.
   Since there is no gdb for MacOS this is practically impossible to properly debug; it's
   probably some simple overlooked edge case (famous last words, hah!).
 * I find this and many other aspects of MacOS to make it an unsuitable general-purpose dev
   platform; it's great if you're going to build Apple or Web apps, but for most other things
   it's no longer a generic Unix platform.
