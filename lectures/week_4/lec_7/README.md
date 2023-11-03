## Installing multilib(to generate x86-32 bti ISA and not 64-bit ISA)
```
sudo apt-get install gcc-multilib g++-multilib
```

## Compilation & Disassembly
```
gcc -static -m32 main.c -g

objdump -S a.out -M intel >  disassemble
```