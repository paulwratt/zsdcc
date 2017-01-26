(PROJECT NOT POPULATED YET!)

# ZSDCC

zsdcc is z88dk's patch of the [sdcc c compiler](https://sourceforge.net/projects/sdcc/) for the z80.  We stay synchronized with the home repository on sourceforge through svn2github.

There are two purposes for this repository:

  1. To act as repository for zsdcc which is one of the c compilers used in [z88dk](https://github.com/z88dk/z88dk).
  2. To create a separate branch where the changes made can be cleanly integrated for later submission to upstream sdcc.

Accordingly there are three main branches:

  * **master** is an unmodified copy of the current sdcc svn repository on sourceforge.
  * **zsdcc** holds the zsdcc source code as currently used by [z88dk](https://github.com/z88dk/z88dk).
  * **upstream** cleanly integrates the changes from master into sdcc for later submission upstream.

# How is zsdcc different from sdcc ?

  * A distinction is made between extern and public symbols.  Current sdcc relies on the assembler being able to distinguish the two at assemble time.  This can be a problem for assembler backends that do not make such an accommodation and was a problem for z88dk for a while until z88dk/z80asm was modified to accept a global directive.  Apart from assembler difficulties, the failure to make the distinction means the linker cannot catch errors where local symbols are undefined (they are made global) and can cause silent linking errors especially when assembler is mixed with c in projects.
  * Label names are made compatible with z88dk/z80asm.
  * A proper rodata section is implemented.  sdcc currently mingles all read-only data with the code section.
  * inSequence(stride,params..) is added as a peephole rule qualifier.  This allows z88dk to determine when successive bytes in memory are read or written so that it can substitute lengthy code with short replacements when --opt-code-size is selected.
  * peephole-z80 is fixed so that it can determine exactly what registers are modified or not by individual z80 instructions.  sdcc has bugs in this area that prevents it from applying peephole rules properly.  This deficiency is not clear in native sdcc because its peephole set is small but it has major impact in application of z88dk's peephole set which is many times larger.
  * peephole-z80 is made aware of many z88dk intrinsic functions.  These are library functions that are used when z88dk tries to perform further code size reduction; the peepholer is made aware of register preservation so that it can better optimize around them.

# How to build zsdcc or sdcc from source

(COMING)
