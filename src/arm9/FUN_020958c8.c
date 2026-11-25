// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int UNK_020fc98c;
extern void FUN_020345f0(void *, void *);

void FUN_020958c8(char *s) {
    Vec delta;
    int moved = 1;
    int cond;
    FUN_020345f0(&delta, s + 0x9c);
    delta.x -= *(int *)(s + 0x310);
    delta.y -= *(int *)(s + 0x314);
    delta.z -= *(int *)(s + 0x318);
    
    cond = !((((int)(((long long)delta.x * delta.x + 0x800) >> 12) +
               (int)(((long long)delta.y * delta.y + 0x800) >> 12)) +
              (int)(((long long)delta.z * delta.z + 0x800) >> 12)) >= UNK_020fc98c);

    if (cond != 0) {
        *(int *)(s + 0x2b8) += 1;
        moved = 0;
        if (*(int *)(s + 0x2b8) > 30) {
            *(int *)(s + 0x2b4) |= 1;
        }
        if (*(int *)(s + 0x2b8) > 120) {
            *(int *)(s + 0x2b4) |= 2;
        }
    }
    if (moved != 0) {
        *(int *)(s + 0x2b8) = 0;
        *(int *)(s + 0x2b4) &= ~1;
        *(int *)(s + 0x2b4) &= ~2;
    }
}
