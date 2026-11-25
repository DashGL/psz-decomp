// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_0205e9d8(int *);
extern int FUN_0205ea08(int *);

void FUN_0205e744(void) {
    int sp4;
    int sp0;
    *(volatile unsigned int *)0x04000600 |= 0x8000;
    while (FUN_0205e9d8(&sp4) != 0) {
    }
    while (FUN_0205ea08(&sp0) != 0) {
    }
    *(volatile unsigned int *)0x04000440 = 3;
    *(volatile unsigned int *)0x04000454 = 0;
    *(volatile unsigned int *)0x04000440 = 0;
    if (sp0 != 0) {
        *(volatile int *)0x04000448 = sp0;
    }
    *(volatile unsigned int *)0x04000454 = 0;
    *(volatile unsigned int *)0x04000440 = 2;
    *(volatile int *)0x04000448 = sp4;
    *(volatile unsigned int *)0x04000454 = 0;
}
