# NS32000 Toolchain
This repo contains tools for NS32k cross-development.

They build and install on Ubuntu 22.04.1 LTS, x86_64

Some small changes have been made for them to compile with a current
version of gcc, so no need to install (most likely build) a very old
version of gcc just for this. Because newer compilers produce a lot
(and I mean, A LOT) of warnings for these codebases, I suggest
suppressing all warnings.  This way you can find any errors.

The build creates a target 'ns32k-pc532-netbsd'.  Despite the name it
can't be used to create NetBSD executable as-is; it lacks any crt
(executable startup) .o files, so is immediately most useful to create
standalone flashable executables or other binary files.  It can be best
thought of as 'ns32k-aout-none'.

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
  Note that this is ONLY the debugger, the target still needs a gdbserver
  implementation.

See the file BUILD for instructions.
