# NS32000 Toolchain
This repo contains tools for NS32k cross-development.

They build and install on Ubuntu 22.04.1 LTS, x86_64.
I'd imagine they should be okay, mostly, on Darwin (arm64/x86_64)
as well.

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

As the target suggests, it defaults to the NS32532. For the NS32032 or
NS32016 

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
  Requires libncurses-dev to be installed on Linux, and ncurses for other
  platforms, presumably for readline.
  Note that this is ONLY the debugger, the target still needs a gdbserver
  implementation.  gdbserver is inherently more limited than a modern JTAG
  debug interface in that there is no real way to halt a running processor,
  and on the 32016/032 there is no hardware address comparator.  A board
  could be set to stop what it's doing and start servicing a gdb client on
  NMI, which could be tied to a button.  This way if the system wedges a
  button can be pressed and gdb used to see where it was stuck.  It might
  also be possible to hack something up where the RXRDY on the UART is
  hooked up to the CPU NMI with a switch, so when the switch is closed
  whenever the UART goes from empty to non-empty the CPU hits the NMI handler
  and all UART traffic is routed through the gdbserver if it's active...
  Slow, but what ya gonna do?

See the file BUILD for instructions.

I created this somewhat minimal toolchain for the purpose of porting U-Boot
to a small NS32016 Toy board.  (It has the 32082 MMU, 512k x 16 NOR flash,
4M x 16 SRAM, 1G NAND flash, a 16C550 UART with a CP2102N VCP USB interface,
and a KSZ8851-16MLL 10/100 ethernet controller.)
