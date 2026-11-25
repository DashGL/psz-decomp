// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
unsigned int FUN_overlay_15__02120774(int);
int FUN_020284ac(void *);
void FUN_02066c68(int);

extern unsigned int data_0213a844[];

int FUN_overlay_15__02120624(int a, int b, int c) {
    data_0213a844[6] = FUN_overlay_15__02120774(a);
    data_0213a844[7] = FUN_overlay_15__02120774(b);
    data_0213a844[8] = FUN_overlay_15__02120774(c);
    if (FUN_020284ac((void *)0x0213a84c) < 0) {
        return -1;
    }
    while (*(volatile int *)0x021070a4 == 0) {
        FUN_02066c68(100);
    }
    return 0;
}
