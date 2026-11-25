// flags: -O4,p -noThumb
typedef void (*Callback)(void *);
extern unsigned char *UNK_02108c0c;
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int), FUN_0202e434(void *, int), FUN_0202e834(int), FUN_0202e9e0(void *), FUN_0202ea58(void *);
extern int FUN_02052b64(void *, unsigned short), FUN_02053840(void), FUN_02052d74(void), FUN_020534c4(Callback), FUN_02053be0(Callback);
int FUN_0202d8f8(void *config, int option) {
    unsigned int irq = FUN_020683d4();
    int result;
    if (!UNK_02108c0c) { FUN_020683e8(irq); return 1; }
    switch (*(int *)(UNK_02108c0c + 8800)) {
    case 1: FUN_0202e434(config, option); break;
    case 2: FUN_020683e8(irq); return 2;
    case 3: FUN_020683e8(irq); return 0;
    default: FUN_020683e8(irq); return 1;
    }
    result = FUN_02052b64(UNK_02108c0c, (unsigned short)*(int *)(UNK_02108c0c + 8812));
    switch (result) {
    case 0: break;
    case 3: FUN_0202e834(11); FUN_020683e8(irq); return 7;
    case 4: FUN_020683e8(irq); return 5;
    case 6: default: FUN_0202e834(11); FUN_020683e8(irq); return 7;
    }
    if (!FUN_02053840()) {
        if (FUN_02052d74()) { FUN_0202e834(11); FUN_020683e8(irq); return 7; }
        FUN_020683e8(irq); return 5;
    }
    if (FUN_020534c4(FUN_0202e9e0)) { FUN_0202e834(11); FUN_020683e8(irq); return 7; }
    result = FUN_02053be0(FUN_0202ea58);
    switch (result) {
    case 2: FUN_0202e834(2); *(unsigned short *)(UNK_02108c0c + 8832) = 1; break;
    case 8: FUN_0202e834(12); FUN_020683e8(irq); return 1;
    case 3: default: FUN_0202e834(11); FUN_020683e8(irq); return 7;
    }
    FUN_020683e8(irq);
    return 3;
}
