// flags: -O4,s
typedef struct { int f[10]; } Entry40;
typedef struct {
    int f0;
    Entry40 entries[33];
    int slots[2];
} Self_02e4;
typedef struct { unsigned v[2]; } Pair2;
extern const char *DAT_overlay_17__0212505c[];
extern const struct { unsigned pad; Pair2 k0, k1; } DAT_overlay_17__02124ec4;
extern void FUN_overlay_17__021205c0(void *, int, int), FUN_overlay_17__02120520(void *, int, int), FUN_overlay_17__0211e8dc(void *, int), FUN_overlay_17__0211e95c(void *, int, int, int);
#pragma thumb off
extern void FUN_02001540(void *, int, unsigned);
extern int FUN_020038ec(char *, unsigned, const char *, ...);
#pragma thumb on
extern unsigned FUN_overlay_17__0211e6a8(unsigned, unsigned, const char *, const char *, const char *, unsigned);
extern unsigned *FUN_overlay_17__0211e7a8(unsigned);

void FUN_overlay_17__021202e4(Self_02e4 *self, int index, int first, int second, int flag)
{
    char base[32], primary[32], secondary[32];
    Pair2 kind0, kind1;
    unsigned a, b, *actor;
    int i, slot;
    if (index <= -1 || index >= 33) return;
    for (i = 0; i < 2; i++) if (self->slots[i] == index) {
        if (second != self->entries[index].f[4]) FUN_overlay_17__021205c0(self, index, second);
        if (first != self->entries[index].f[3]) FUN_overlay_17__02120520(self, index, first);
        return;
    }
    slot = -1;
    for (i = 0; i < 2; i++) if (self->slots[i] == -1) { slot = i; self->slots[i] = index; break; }
    if (slot < 0 || slot >= 2) return;
    if (((Entry40 *)self)[index].f[1] == 1) return;
    FUN_02001540(&self->entries[index], 0, 40);
    self->entries[index].f[0] = 1;
    FUN_020038ec(base, 32, DAT_overlay_17__0212505c[1], index, DAT_overlay_17__0212505c[0]);
    FUN_020038ec(primary, 32, DAT_overlay_17__0212505c[1], index, DAT_overlay_17__0212505c[3]);
    FUN_020038ec(secondary, 32, DAT_overlay_17__0212505c[1], index, DAT_overlay_17__0212505c[2]);
    kind0 = DAT_overlay_17__02124ec4.k0;
    kind1 = DAT_overlay_17__02124ec4.k1;
    self->entries[index].f[7] = (flag == 0) ? 255 : 0;
    a = kind0.v[slot]; b = kind1.v[slot];
    self->entries[index].f[1] = FUN_overlay_17__0211e6a8(a, b, base, primary, secondary, 0);
    actor = FUN_overlay_17__0211e7a8(self->entries[index].f[1]);
    if (actor) { actor[0x2ba8 / 4] = 400; actor[0x2bac / 4] = 1; }
    self->entries[index].f[2] = FUN_overlay_17__0211e6a8(a, b, base, 0, 0, 0);
    actor = FUN_overlay_17__0211e7a8(self->entries[index].f[2]);
    if (actor) { actor[0x2ba8 / 4] = 300; actor[0x2bac / 4] = 2; }
    FUN_overlay_17__02120520(self, index, first);
    FUN_overlay_17__021205c0(self, index, second);
    actor = FUN_overlay_17__0211e7a8(self->entries[index].f[2]);
    if (actor) {
        FUN_overlay_17__0211e8dc(actor, second);
        for (i = 0; i < 3; i++) FUN_overlay_17__0211e95c(actor, i, 0, 1);
    }
    self->entries[index].f[9] = 0;
}
