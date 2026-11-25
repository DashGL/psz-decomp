// flags: -O4,p -noThumb
extern void FUN_020655d8(unsigned int, unsigned int, unsigned int);
extern void FUN_02065554(unsigned int, unsigned int, unsigned int);
extern void FUN_0201c8a0(void);
extern void FUN_0201c8fc(void);
extern unsigned int DAT_02107004[];

void FUN_0201c9d4(unsigned int command, unsigned int data, unsigned int count) {
    unsigned int p = DAT_02107004[0];
    if (p != 0) {
        if (DAT_02107004[1] != 0) {
            unsigned int used = *(unsigned int *)p;
            if (used + 1 + count <= 192) {
                *(unsigned int *)p = used + 1;
                *(unsigned int *)(((volatile unsigned int *)DAT_02107004)[0] + used * 4 + 4) = command;
                if (count != 0) {
                    p = DAT_02107004[0];
                    FUN_020655d8(data, p + 4 + *(unsigned int *)p * 4, count * 4);
                    *(unsigned int *)DAT_02107004[0] += count;
                }
                return;
            }
        }
        if (*(unsigned int *)p != 0) {
            FUN_0201c8a0();
        } else {
            if (((volatile unsigned int *)DAT_02107004)[1] != 0) {
                FUN_0201c8fc();
            }
        }
    } else {
        if (((volatile unsigned int *)DAT_02107004)[1] != 0) {
            FUN_0201c8fc();
        }
    }
    *(volatile unsigned int *)0x04000400 = command;
    FUN_02065554(data, 0x04000400, count * 4);
}
