Replace x86_64-linux-gnu with whatever your host & build platform is below.

cd binutils-2.13
LDFLAGS="-Wl,--allow-multiple-definition" ./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make CFLAGS="-D_FORTIFY_SOURCE=1 --no-warnings -Wl,--allow-multiple-definition"
sudo make -k install
(The last line will produce texinfo errors, ignore those)

cd gcc-3.2.3
./configure --prefix=/opt/ns32k-tools --target=ns32k-pc532-netbsd --enable-languages=c --host=x86_64-linux-gnu --build=x86_64-linux-gnu
make PATH="/opt/ns32k-tools/bin:$PATH" CFLAGS="--no-warnings -fno-stack-protector" -j10 all-gcc
sudo make PATH="/opt/ns32k-tool/bin:$PATH" CFLAGS="--no-warnings -fno-stack-protector" install
