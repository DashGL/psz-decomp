// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
enum { E0 = 0, E1 = 1 };
extern signed char DAT_0211a208[];
extern void *FUN_020424b4(void *, int);
extern void FUN_020461f8(int *, int);
extern int FUN_0204260c(void *, int, int *, int *);
extern void FUN_0204b49c(void *, void *);

void FUN_overlay_11__02122d2c(unsigned char *self, unsigned char *appearance)
{
    void *animation = 0;
    unsigned char *child, *model;
    int base[3], matrix[12], rotation[9];
    Vec3 position;
    int x, y, z;
    unsigned int slot = self[16];
    if (slot < 5 && (child = *(unsigned char **)(self + 24 + slot * 4)) != 0) {
        *(unsigned int *)(child + 228) |= 1;
        child = *(unsigned char **)(self + 24 + self[16] * 4);
        if (*(void **)(child + 48)) animation = FUN_020424b4(*(void **)(child + 48), 0);
    }
    slot = appearance[44];
    if (slot < 5 && *(void **)(self + 24 + slot * 4) != 0) {
        *(unsigned int *)(self + 48) |= 1;
        slot = appearance[44];
        if (!(*(unsigned int *)(self + 44) & (1U << slot)) && *(void **)(self + 20)) {
            model = *(unsigned char **)(*(unsigned char **)(self + 20) + 140);
            if (model != 0 && (((*(unsigned int *)(model + 24) & 2) ? E1 : E0) != 0)) {
                FUN_020461f8(base, 0);
                x = 0; y = 4096; z = 0;
                if (FUN_0204260c(model, 9, matrix, rotation)) { x = matrix[9]; y = matrix[10]; z = matrix[11]; }
                if (x <= 2048) {
                    position.x = (unsigned int)x + base[0];
                    position.y = (unsigned int)y + base[1];
                    position.z = (unsigned int)z + base[2];
                    child = *(unsigned char **)(self + 24 + appearance[44] * 4);
                    *(Vec3 *)(child + 92) = position;
                    *(unsigned int *)(self + 44) |= 1U << appearance[44];
                }
            }
        }
        if (*(unsigned int *)(self + 44) & (1U << appearance[44])) {
            child = *(unsigned char **)(self + 24 + appearance[44] * 4);
            *(unsigned int *)(child + 228) &= ~1U;
            if (DAT_0211a208[1] == 1) {
                child = *(unsigned char **)(self + 24 + appearance[44] * 4);
                *(unsigned int *)(child + 228) |= 1;
            }
            *(unsigned int *)(self + 48) &= ~1U;
            FUN_0204b49c(*(void **)(self + 24 + appearance[44] * 4), animation);
        }
    }
}
