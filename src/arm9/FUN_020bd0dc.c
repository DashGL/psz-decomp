// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
typedef struct Sub_020bd0dc Sub_020bd0dc;
// Explicit receiver-only deleting cleanup; concrete child table 020fca4c slot4.
// flags: -O4,p
struct Sub_020bd0dc {
    void **vptr;
};
int D_020fc9f4;
int D_0211b3bc[3];
void FUN_020c0c40(void);
void FUN_020bd198(void *);
void FUN_020ba8b4(void *);
void FUN_020bce18(void *);

void *FUN_020bd0dc(char *a) {
    *(int *)a = (int)&D_020fc9f4;
    FUN_020c0c40();
    FUN_020bd198(a);
    if (*(void **)(a + 0xf50) != 0) {
        FUN_020ba8b4(*(void **)(a + 0xf50));
        *(void **)(a + 0xf50) = 0;
    }
    if (*(Sub_020bd0dc **)(a + 0xf38) != 0) {
        if (*(Sub_020bd0dc **)(a + 0xf38)) ((void (*)(void *))(*(void ***)(*(Sub_020bd0dc **)(a + 0xf38)))[1])(*(Sub_020bd0dc **)(a + 0xf38));
        *(Sub_020bd0dc **)(a + 0xf38) = 0;
    }
    D_0211b3bc[2] = 0;
    FUN_020bce18(a);
    return a;
}
