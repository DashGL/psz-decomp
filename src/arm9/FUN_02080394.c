// flags: -O4,s
typedef struct {
    int w[12];
} Matrix;

typedef struct {
    int w[9];
} Rotation;

typedef struct {
    int x, y, z;
} Vec;

extern int DAT_020fc988;
extern short DAT_020ed83c[];
extern char *FUN_0208555c(int);
extern void FUN_02080198(void *, void *);
extern void FUN_0204bf88(void *);
extern int FUN_0204260c(void *, int, Matrix *, Rotation *);

#define H(n) (*(unsigned short *)(s + (n)))

void FUN_02080394(char *s) {
    Matrix m;
    Rotation r;
    Vec pos;
    char *actor;
    void *model;
    int bone;
    int is_special;
    int flags;

    actor = FUN_0208555c(*(int *)(s + 232));
    if (actor == 0) {
        return;
    }
    model = *(void **)(actor + 140);
    if (model == 0) {
        return;
    }

    bone = (signed char)s[254];
    is_special = 0;
    do {
        if (bone < 14) {
            break;
        }
        if (bone > 17) {
            break;
        }
        is_special = 1;
    } while (0);
    if (is_special) {
        FUN_02080198(s, model);
        return;
    }

    if (!FUN_0204260c(model, *(volatile signed char *)(s + 254), &m, &r)) {
        return;
    }

    pos.x = m.w[9];
    pos.y = m.w[10];
    pos.z = m.w[11];

    flags = (unsigned char)s[253];
    if (!( (flags & 2) == 0 ) != 0) {
        pos.y = DAT_020fc988;
    }

    if (!( (flags & 8) == 0 ) != 0) {
        int other = (signed char)s[255];
        if (other != -1 && other != (signed char)s[254]) {
            if (!FUN_0204260c(model, other, &m, &r)) {
                return;
            }
        }
        *(Rotation *)(s + 112) = r;
    } else {
        int angle = *(unsigned short *)(actor + 192);
        if (!( (flags & 4) == 0 ) != 0 && angle != H(266)) {
            H(266) = (unsigned short)angle;
            H(106) = (unsigned short)(H(264) + H(266));
            FUN_0204bf88(s);
        }
        if ((signed char)s[256] != 0) {
            int idx = angle >> 4;
            int sine = DAT_020ed83c[idx * 2];
            int z = *(short *)(s + 262);
            int cosine = DAT_020ed83c[idx * 2 + 1];
            int x = *(short *)(s + 258);
            pos.x += ((x * cosine) >> 12) + ((z * sine) >> 12);
            pos.y += *(short *)(s + 260);
            pos.z += ((z * cosine) >> 12) - ((x * sine) >> 12);
        }
    }

    *(Vec *)(s + 92) = pos;
}
