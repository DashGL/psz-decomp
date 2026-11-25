// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int *FUN_overlay_22__0219a638(int, int);
extern int FUN_overlay_22__02198778(int, int);
extern void FUN_overlay_22__0219a9a8(void *, int, void *, void *);
extern void FUN_overlay_22__02198890(void *, signed char *);

void FUN_overlay_22__021987c0(char *self)
{
    signed char marked[9];
    Vec position;
    unsigned short angle;
    int i, changed;
    for (i = 0; i < 9; i++) marked[i] = 0;
    for (i = 0; i < 4; i++) {
        int *player = FUN_overlay_22__0219a638(i, 0);
        if (player) marked[FUN_overlay_22__02198778(player[45], player[47])] = 1;
    }
    position = *(Vec *)(self + 16);
    FUN_overlay_22__0219a9a8(self, 5, &position, &angle);
    marked[FUN_overlay_22__02198778(position.x, position.z)] = 1;
    FUN_overlay_22__0219a9a8(self, 6, &position, &angle);
    marked[FUN_overlay_22__02198778(position.x, position.z)] = 1;
    changed = 0;
    for (i = 0; i < 9; i++) {
        signed char *entry = (signed char *)self + 92 + 24 * i;
        entry[20] = entry[21];
        entry[21] = marked[i];
        if (entry[20] == 0 && entry[21] == 1) changed = 1;
        else marked[i] = 0;
    }
    if (((signed char *)self)[308] != 0 && ((signed char *)self)[308] == 1 && changed == 1) {
        FUN_overlay_22__02198890(self, marked);
    }
}
