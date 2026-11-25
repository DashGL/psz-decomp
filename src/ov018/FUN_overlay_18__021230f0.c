// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern signed char DAT_0211a208[];
extern void FUN_020461f8(Vec *, int);
extern int FUN_0204260c(void *, int, int *, int *);
void FUN_overlay_18__021230f0(unsigned char *p, unsigned char *selection) {
    unsigned int index = p[16];
    unsigned char *effect, *owner, *component;
    Vec base;
    int matrix[12], rotation[9];
    Vec position;
    int x, y, z;
    if (index < 5) {
        effect = ((unsigned char **)(p + 24))[index];
        if (effect) *(unsigned int *)(effect + 228) |= 1;
    }
    index = selection[44];
    if (index >= 5) return;
    if (!((unsigned char **)(p + 24))[index]) return;
    *(unsigned int *)(p + 48) |= 1;
    owner = *(unsigned char **)(p + 20);
    if (!owner) return;
    component = *(unsigned char **)(owner + 140);
    if (!component) return;
    if (((*(unsigned int *)(component + 24) & 2) ? 1 : 0) == 0) return;
    FUN_020461f8(&base, 0);
    x = 0;
    y = 4096;
    z = 0;
    if (FUN_0204260c(component, 9, matrix, rotation)) {
        x = matrix[9];
        y = matrix[10];
        z = matrix[11];
    }
    if (x > 2048) return;
    position.x = x + base.x;
    position.y = y + base.y;
    position.z = z + base.z;
    effect = ((unsigned char **)(p + 24))[selection[44]];
    *(Vec *)(effect + 92) = position;
    effect = ((unsigned char **)(p + 24))[selection[44]];
    *(unsigned int *)(effect + 228) &= ~1u;
    if (DAT_0211a208[1] == 1) {
        effect = ((unsigned char **)(p + 24))[selection[44]];
        *(unsigned int *)(effect + 228) |= 1;
    }
    *(unsigned int *)(p + 48) &= ~1u;
}
