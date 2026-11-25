// flags: -O4,s
extern void FUN_overlay_16__02120a94(void *);
extern void FUN_020ba8c4(void *);
#pragma thumb off
extern unsigned int FUN_02066ef4(void);
extern void FUN_020681f0(void *);
extern void FUN_overlay_16__0211e758(void *);
extern void FUN_02059cd4(void *);
extern int FUN_02059ffc(void *);
#pragma thumb on

enum { E0 = 0, E1 = 1 };

void FUN_overlay_16__02120894(char *self) {
    if ((FUN_02066ef4() & 0x40000000u) || (FUN_02066ef4() & 0x80000000u)) {
        if (*(unsigned int *)(self + 0x498) == 1) {
            FUN_overlay_16__02120a94(self);
        }
    }
    FUN_020681f0(self + 28);
    if (*(void **)(self + 20)) {
        FUN_020ba8c4(*(void **)(self + 20));
        *(void **)(self + 20) = 0;
    }
    if (*(void **)(self + 24)) {
        FUN_020ba8c4(*(void **)(self + 24));
        *(void **)(self + 24) = 0;
    }
    if (*(void **)(self + 16)) {
        FUN_020ba8c4(*(void **)(self + 16));
        *(void **)(self + 16) = 0;
    }
    if (*(void **)(self + 0x448)) {
        FUN_overlay_16__0211e758(*(void **)(self + 0x448));
    }
    if (((*(unsigned int *)(self + 0x458) & 0x10) ? E1 : E0) == 1) {
        FUN_02059ffc(self + 0x44c);
        FUN_02059cd4(self + 0x44c);
    }
}
