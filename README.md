# ns32k-toolchain
This repo contains tools for NS32k cross-development.

They build and install on Ubuntu 22.04.1 LTS, x86_64

Some small changes have been made for them to compile with a current
version of gcc, so no need to install (most likely build) a very old
version of gcc just for this. Because newer compilers produce a lot
(and I mean, A LOT) of warnings for these codebases, I suggest
suppressing all warnings.  This way you can find any errors.

Included are:

* binutils-2.13
  The only piece really of import here is the assembler, gas.  It actually
  has ns32k targets up to very recent (if not current?) versions, but they
  have been removed from the configure scripts and can no longer be specified.

* gcc-3.2.3: technically 3.4 supports ns32k targets, but some of the
  libraries used (bfd, libiberty) don't.  It doesn't seem anything has
  actually changed, so it might be possible to simply add ns32k
  targets back into the big case statements in the configure.in
  scripts and it'll probably Just Work.  (Famous last words, right?)

* gdb-5.3
  Requires libncurses-dev to be installed on Linux, and ncurses for other platforms.

See the file BUILD for instructions.
