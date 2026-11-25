// flags: -O4,s
typedef struct Slot {
    void **resource;
    unsigned int tag;
    int index;
    unsigned int other, a, b, active;
    void *second, *first;
} Slot;

#pragma thumb off
extern char *FUN_02003d54(char *, const char *, unsigned int);
extern char *FUN_02003dd4(char *, const char *, unsigned int);
#pragma thumb reset

extern int FUN_020ba0c8(const char *, void *, void *, void *);
extern void *FUN_020ba174(const char *, void *, void *, int);
extern void *FUN_020ba50c(void);
extern void FUN_020c2524(void);
extern void FUN_020c2544(void);
extern char DAT_0211c864[];
extern const char DAT_020fcab8[];
extern const char DAT_020fcac0[];

int FUN_020c247c(Slot ***self, const char *path, unsigned int tag)
{
    int i;
    Slot *slot;

    for (i = 0; i < 8; i++) {
        slot = (*self)[i];
        if (slot->index != -1) continue;
        if (!slot->resource) return 0;
        FUN_02003d54(DAT_0211c864, path, 127);
        FUN_02003dd4(DAT_0211c864, DAT_020fcab8, 127);
        FUN_020ba0c8(DAT_0211c864, slot->resource[0], (void *)&FUN_020c2524, slot);
        slot->first = FUN_020ba50c();
        FUN_02003d54(DAT_0211c864, path, 127);
        FUN_02003dd4(DAT_0211c864, DAT_020fcac0, 127);
        slot->resource[1] = FUN_020ba174(DAT_0211c864, (void *)&FUN_020c2544, slot, -32);
        slot->second = FUN_020ba50c();
        slot->index = i;
        slot->tag = tag;
        slot->b = 0;
        slot->a = 0;
        slot->active = 1;
        return i;
    }
    return -1;
}
