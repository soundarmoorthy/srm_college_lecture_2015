cmd_/home/minion/kinetic/driver/hello1.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o /home/minion/kinetic/driver/hello1.ko /home/minion/kinetic/driver/hello1.o /home/minion/kinetic/driver/hello1.mod.o