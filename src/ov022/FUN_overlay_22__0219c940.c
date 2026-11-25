// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern unsigned DAT_overlay_22__021a1424;
extern int DAT_020ed09c;
extern Vec DAT_020fc958;
extern void FUN_overlay_22__02199f98(void *, void *, void *, void *);
extern void FUN_overlay_22__0219c900(void *);
extern void FUN_overlay_22__0219c910(void *);
extern void FUN_overlay_22__0219c91c(void *);
extern void FUN_overlay_22__0219a05c(void *, int);
extern void FUN_overlay_22__0219a070(void *, int);
extern int FUN_overlay_22__0219a5b8(void *);
extern void FUN_overlay_22__0219a09c(void *, int);

void *FUN_overlay_22__0219c940(char *self, void *owner, void *data, void *record)
{
    char *p, *end;
    int invalid, kind, i;
    FUN_overlay_22__02199f98(self, owner, data, record);
    *(void **)self = &DAT_overlay_22__021a1424;
    FUN_overlay_22__0219c900(self + 0x5a);
    p = self + 0x5e;
    end = self + 0x6e;
    do {
        FUN_overlay_22__0219c910(p);
        p += 4;
    } while (p < end);
    *(int *)(self + 0x70) = 0;
    p = self + 0x74;
    end = self + 0x9c;
    do {
        FUN_overlay_22__0219c91c(p);
        p += 20;
    } while (p < end);
    *(int *)(self + 0x9c) = 1;
    *(int *)(self + 0xa0) = 1;
    *(int *)(self + 0xa4) = 0;
    *(int *)(self + 0xa8) = 0;
    invalid = DAT_020ed09c;
    *(int *)(self + 0xac) = invalid;
    *(Vec *)(self + 0xb0) = DAT_020fc958;
    *(int *)(self + 0xbc) = 0;
    *(int *)(self + 0xc0) = 0;
    *(int *)(self + 0xc4) = 0;
    *(int *)(self + 0xc8) = 0;
    *(int *)(self + 0xcc) = invalid;
    *(int *)(self + 0xd0) = invalid;
    FUN_overlay_22__0219a05c(self, 1);
    FUN_overlay_22__0219a070(self, 0);
    kind = FUN_overlay_22__0219a5b8(self);
    if (kind != 63 && kind == 65) FUN_overlay_22__0219a09c(self, 0);
    for (i = 0; i < 4; i++) *(int *)(self + 0xd4 + 4 * i) = 0;
    return self;
}
