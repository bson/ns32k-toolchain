#source: pr19539.s
#as: --64
#ld: -pie -m elf_x86_64 -T pr19539.t -z notext --no-error-rwx-segments
#readelf: -r --wide

Relocation section '.rela.dyn' at offset 0x[0-9a-f]+ contains 1 entry:
    Offset             Info             Type               Symbol's Value  Symbol's Name \+ Addend
[0-9a-f]+ +[0-9a-f]+ +R_X86_64_RELATIVE +[0-9a-f]+
