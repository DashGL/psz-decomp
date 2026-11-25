// flags: -O4,s
typedef unsigned int u32;
typedef struct { int x, y, z; } Vec_020b18c0;
#define W(p, o) (*(u32 *)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
extern const short UNK_020ed83c[];
extern const int DAT_020fc620[];
extern int FUN_020855bc(int), FUN_0203b820(void *);
extern char *FUN_0208555c(int);
extern void FUN_020b1d10(void *, int, int), FUN_02038000(void *, int, int, int);
extern void FUN_0204e0d8(int, int, int, u32), FUN_020426b8(void *);
extern char *FUN_020b0ee0(void *, int, void *, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_020b1cfc(void *, u32);
extern void FUN_0204b3ac(void *, void (*)(void *, u32), void *, u32);
extern void FUN_020345f0(void *, const void *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, const void *, u32);
extern void FUN_020c193c(u32, u32, int, u32, int);
void FUN_020b18c0(char *self) {
    Vec_020b18c0 saved;
    int matrix[12], basis[9];
    Vec_020b18c0 position, copy, soundPos;
    short sound[2];
    char *actor, *effect;
    int amount;
    int a2 = (H(self, 0x58) >> 4) * 2;
    W(self, 0x34) += (UNK_020ed83c[a2] * ((int)W(self, 0x60) >> 1)) >> 12;
    W(self, 0x3c) += (UNK_020ed83c[a2 + 1] * ((int)W(self, 0x60) >> 1)) >> 12;
    if ((int)H(self, 0x74) < DAT_020fc620[3]) {
        H(self, 0x58) -= H(self, 0x5a);
        H(self, 0x5a) -= 16;
    } else if (H(self, 0x74) < H(self, 0x7a)) {
        H(self, 0x58) += DAT_020fc620[1];
    } else {
        if (FUN_020855bc(W(self, 0x2c)) == 1 || FUN_020855bc(W(self, 0x2c)) == 3) {
            actor = FUN_0208555c(W(self, 0x2c));
            if (actor) {
                int aa2;
                amount = FUN_0203b820(actor) * 3;
                FUN_020b1d10(self, W(self, 0x2c), amount);
                saved = *(Vec_020b18c0 *)(actor + 0x9c);
                aa2 = (H(actor, 0xc0) >> 4) * 2;
                FUN_02038000(actor, saved.x + ((UNK_020ed83c[aa2] * 5 << 12) >> 12), 0,
                    saved.z + ((UNK_020ed83c[aa2 + 1] * 5 << 12) >> 12));
                FUN_0204e0d8(W(self, 0x2c), 0, -amount, 5 << 12);
                FUN_0204e0d8(W(self, 0x2c), 1, -amount, 5 << 12);
                FUN_02038000(actor, saved.x, saved.y, saved.z);
            }
        }
        W(self, 0x70) = 4;
        FUN_020426b8((void *)W(self, 0x20));
        FUN_020b0ee0(self, 0x7a, self + 0x4c, 4096);
    }
    if (FUN_0204260c((void *)W(self, 0x20), 4, matrix, basis) == 1) {
        position.x = matrix[9];
        position.y = matrix[10];
        position.z = matrix[11];
        if (!W(self, 0x84)) {
            W(self, 0x84) = (u32)FUN_020b0ee0(self, 0x8f, &position, 4096);
            effect = (char *)W(self, 0x84);
            if (effect) FUN_0204b3ac(effect, FUN_020b1cfc, self, 2);
        } else {
            FUN_020345f0(&copy, &position);
            *(Vec_020b18c0 *)((char *)W(self, 0x84) + 0x5c) = copy;
        }
    }
    if (H(self, 0x74) % 20 == 0) {
        FUN_020345f0(&soundPos, self + 0x34);
        FUN_02090f74(sound, FUN_02090c20(), &soundPos, 0);
        FUN_020c193c(0x3c, 1, sound[0], sound[1], W(self, 0x2c));
    }
    ++H(self, 0x74);
}
