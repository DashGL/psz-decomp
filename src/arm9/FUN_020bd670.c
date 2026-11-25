// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020bddf8(void *);
extern void FUN_020e1140(int, void (*)(void), int, void (*)(void), int, void (*)(void), int);
extern void FUN_020e13ac(void (*)(void), int);
extern void FUN_020e9968(void (*)(void));
extern void FUN_020bd6cc(void);
extern void FUN_020bd6ec(void);
extern void FUN_020bd714(void);
extern void FUN_020bd734(void);
extern void FUN_020bd74c(void);

void FUN_020bd670(char *a, int b, int c) {
    if (b == 0) {
        *(int *)(a + 0xec8) = c;
        FUN_020bddf8(a);
        FUN_020e1140(0, FUN_020bd6cc, 0, FUN_020bd6ec, 0, FUN_020bd714, 0);
        FUN_020e13ac(FUN_020bd734, 0);
        FUN_020e9968(FUN_020bd74c);
        a[0x1c] = 3;
    } else {
        a[0x1d] = 1;
    }
}
