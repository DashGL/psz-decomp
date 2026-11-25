// flags: -O4,s
extern unsigned char *DAT_0213e900;
extern unsigned short DAT_0213a814[], DAT_0213a816[], DAT_0213a810[];
extern void *FUN_overlay_15__021366c4(int, int);
#pragma thumb off
extern void FUN_02017d14(void *, void *, int, int, int);
extern void *FUN_0205e070(void), *FUN_0205e03c(void);
extern void FUN_02017dc8(void *, int, int, int, int, int, int, int);
#pragma thumb reset
extern void FUN_overlay_15__021362f8(void *, int);
extern void FUN_overlay_15__02136094(void *);
extern void *FUN_overlay_15__021373d8(int, void (*)(void *), void *, int);
void *FUN_overlay_15__02135f98(int screen, int font) {
    unsigned char *self = DAT_0213e900 + 0x610 + screen * 0x30;
    int height = DAT_0213a816[screen * 2];
    int width = DAT_0213a814[screen * 2];
    unsigned char *fnt;
    void *map;
    *(void **)(self + 40) = FUN_overlay_15__021366c4((width * height) << 5, 32);
    if (screen == 1) {
        *(volatile unsigned short *)0x04001008 &= ~0x40;
        *(volatile unsigned short *)0x04001008 = (*(volatile unsigned short *)0x04001008 & 0x43) | 0xc00;
    } else {
        *(volatile unsigned short *)0x04000008 &= ~0x40;
        *(volatile unsigned short *)0x04000008 = (*(volatile unsigned short *)0x04000008 & 0x43) | 0xc00;
    }
    FUN_02017d14(self, *(void **)(self + 40), width, height, 4);
    fnt = DAT_0213e900 + font * 8;
    *(void **)(self + 24) = self;
    *(void **)(self + 28) = fnt;
    *(int *)(self + 32) = 1;
    *(int *)(self + 36) = 1;
    map = screen == 1 ? FUN_0205e070() : FUN_0205e03c();
    FUN_02017dc8(map, width, height, 0, 0, 32, DAT_0213a810[screen], 15);
    FUN_overlay_15__021362f8(self, 0);
    *(void **)(self + 44) = FUN_overlay_15__021373d8(1, FUN_overlay_15__02136094, DAT_0213e900 + 0x67c + screen, 200);
    return self;
}
