// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
typedef struct Sub_020bac04 Sub_020bac04;
// Explicit C dispatch: byte-identical to ROM; native C++ not required.
// flags: -O4,s
struct Sub_020bac04 {void **vptr;
    
    
};
int D_020fc8f4;
int D_0211b2bc;
void FUN_020bbd78(void);
void FUN_020ba8c4(int);
void FUN_020ba984(void *);
void FUN_020bce18(void *);

void *FUN_020bac04(char *a) {
    *(int *)a = (int)&D_020fc8f4;
    FUN_020bbd78();
    int i; for(i= 0; i < 3; i++) {
        if (*(Sub_020bac04 **)(a + i * 4 + 0x40) != 0) {
            ((void (*)(void *))(*(void ***)((*(Sub_020bac04 **)(a + i * 4 + 0x40))))[1])((*(Sub_020bac04 **)(a + i * 4 + 0x40)));
        }
        *(Sub_020bac04 **)(a + i * 4 + 0x40) = 0;
    }
    FUN_020ba8c4(*(int *)(a + 0x50));
    D_0211b2bc = 0;
    FUN_020ba984(a + 0x1c);
    FUN_020bce18(a);
    return a;
}
