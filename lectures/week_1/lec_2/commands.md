# Program -> Executable binary -> Process

## Preprocessing phase
```
gcc -E -P main.c
```

## Compilation phase
```
gcc -s -masm=intel main.c

file main.s
```

## Assembly phase
```
gcc -c main.c

file main.o

objdump -d main.o > main_o_code_disassembly
objdump -sj .rodata main.o > main_o_rodata_disassembly
objdump -D main.o > main_o_all_disassembly

gcc -c main.c -g
objdump -S main.o > main_o_code_disassembly_with_debug
```

## Linking phase
```
gcc main.c  -o main

file main

objdump -d main > main_code_disassembly
objdump -sj .rodata main > main_rodata_disassembly
objdump -D main > main_all_disassembly

gcc main.c -g
objdump -S main > main_code_disassembly_with_debug
```

## Loading/execution
```
./main
```

