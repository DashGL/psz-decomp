// flags: -O4,s
typedef struct {
    unsigned int x, y, z;
} Vec;

typedef struct {
    unsigned int w[9];
} M33;

typedef struct {
    unsigned int w[12];
} M43;

extern Vec DAT_020fc958;
extern short DAT_020ed83c[];

extern void FUN_0205aa80(void *);
extern void FUN_0205abac(void *, int, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0205b960(void *, void *, void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_02035408(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_0205b0f0(void *, void *, void *);
extern void FUN_02036848(void *, void *);

int FUN_02036730(char *s, Vec *out) {
    char *r = **(char ***)(s + 0x14) + 0x1c;
    int offset = (*(int *)(r + 4) != 0 || *(int *)(r + 8) != 0 || *(int *)(r + 12) != 0);
    M33 rotation;
    M43 matrix;
    Vec origin;
    Vec adjust;
    Vec temp;

    *out = DAT_020fc958;
    if (offset) {
        FUN_0205aa80(&rotation);
    }

    switch (*(signed char *)r) {
    case 0:
        *out = *(Vec *)(s + 0x38);
        if (offset) {
            int angle = *(unsigned short *)(s + 0x44) >> 4;
            FUN_0205abac(&rotation, DAT_020ed83c[angle * 2], DAT_020ed83c[angle * 2 + 1]);
        }
        break;
    case 1: {
        int index = *(signed char *)(r + 2);
        int slot = *(signed char *)(r + 1);
        char *entry = *(char **)(s + 0x98) + 0x70 * slot;
        void *model;
        int not_ready = 1;
        if (*(short *)(entry + 0x46) & 1) {
            not_ready = 0;
        }
        if (not_ready) {
            return 0;
        }
        model = *(void **)entry;
        if (FUN_0204260c(model, index, &matrix, offset ? &rotation : 0)) {
            FUN_0200c938(&origin, 0xc);
            FUN_0205b960(&origin, &matrix, &origin);
            FUN_020345f0(&temp, &origin);
            *out = temp;
        } else {
            return 0;
        }
        break;
    }
    default:
        return 0;
    }

    if (offset) {
        FUN_02035408(&adjust, *(unsigned int *)(r + 4), *(unsigned int *)(r + 8), *(unsigned int *)(r + 12));
        FUN_0205b0f0(&adjust, &rotation, &adjust);
        FUN_02036848(out, &adjust);
    }
    return 1;
}
