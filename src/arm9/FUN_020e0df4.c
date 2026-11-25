// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020d66bc(void *);
extern void FUN_020d8960(void *);
extern void FUN_020e34e0(void);
extern void FUN_020e33cc(void);
extern void FUN_020d1fb0(void);
extern void FUN_020e33d8(void);
extern void FUN_020c88d4(void *, int, int, int);
extern void FUN_020c88ac(void *);
extern void FUN_020c8898(void *);
extern void FUN_020e1eec(void);
extern void FUN_020e2b78(void);
extern void FUN_020e50dc(void);
extern void FUN_020e9bc0(void);
extern void FUN_020d34c4(void *);
extern void *DAT_0211dcbc;

void FUN_020e0df4(void) {
    if (DAT_0211dcbc != 0) {
        if (*(void **)((char *)DAT_0211dcbc + 0x388) != 0) {
            FUN_020d66bc(*(void **)((char *)DAT_0211dcbc + 0x388));
            *(void **)((char *)DAT_0211dcbc + 0x388) = 0;
        }
        *((unsigned char *)DAT_0211dcbc + 0x390) = 0;
        if (*(void **)((char *)DAT_0211dcbc + 0x45c) != 0) {
            FUN_020d8960(*(void **)((char *)DAT_0211dcbc + 0x45c));
            *(void **)((char *)DAT_0211dcbc + 0x45c) = 0;
        }
        FUN_020e34e0();
        FUN_020e33cc();
        FUN_020d1fb0();
        FUN_020e33d8();
        if (*(int *)((char *)DAT_0211dcbc + 0x1c) != 0) {
            FUN_020c88d4((char *)DAT_0211dcbc + 0x1c, 0, 0, 0);
            FUN_020c88d4((char *)DAT_0211dcbc + 0x1c, 3, 0, 0);
            FUN_020c88d4((char *)DAT_0211dcbc + 0x1c, 1, 0, 0);
            FUN_020c88d4((char *)DAT_0211dcbc + 0x1c, 2, 0, 0);
            FUN_020c88ac((char *)DAT_0211dcbc + 0x1c);
            FUN_020c8898((char *)DAT_0211dcbc + 0x1c);
            *(int *)((char *)DAT_0211dcbc + 0x1c) = 0;
        }
        FUN_020e1eec();
        FUN_020e2b78();
        FUN_020e50dc();
        FUN_020e9bc0();
        if (*(void **)DAT_0211dcbc != 0) {
            FUN_020d34c4(*(void **)DAT_0211dcbc);
            *(void **)DAT_0211dcbc = 0;
        }
        DAT_0211dcbc = 0;
    }
}
