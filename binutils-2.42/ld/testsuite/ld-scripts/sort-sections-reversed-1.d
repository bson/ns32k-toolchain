#source: sort_b_a.s
#ld: -T sort-sections-reversed-1.t  --no-warn-rwx-segments
#nm: -n

#...
0[0-9a-f]* t text3
#...
0[0-9a-f]* t text2
#...
0[0-9a-f]* t text1
#...
0[0-9a-f]* t text
#pass
