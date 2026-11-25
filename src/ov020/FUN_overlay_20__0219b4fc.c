// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int length, scaled, delta; } Frame;
extern int FUN_02036c34(void *);
extern void *FUN_overlay_20__02199068(void *);
#pragma thumb off
extern int FUN_0205c86c(void *);
#pragma thumb on
extern void FUN_020bc610(void *, void *, void *);
extern Vec DAT_020fc958;
extern int DAT_020fc988;
void FUN_overlay_20__0219b4fc(int *self) {
    int *owner = (int *)self[1];
    int *data = (int *)self[2];
    Frame f;
    f.delta = FUN_02036c34(owner);
    f.length = FUN_0205c86c(FUN_overlay_20__02199068(owner));
    FUN_020bc610(&f.scaled, &f.length, &f.delta);
    self[7] = self[6] = f.scaled;
    self[8] = data[13];
    *(Vec *)(self + 11) = DAT_020fc958;
    self[10] = DAT_020fc988;
    self[9] = (int)(((long long)*(short *)((char *)owner + 24) * 205 + 2048) >> 12);
    data[41] = 0;
    self[5] = 0;
}
