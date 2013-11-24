# Some build script from Pure64,
# Thanks to Return Infinity
gcc -o kernel64.o -c kernel64.c -nostdlib -nostartfiles -nodefaultlibs
ld -T linker.ld -o kernel64.sys kernel64.o
