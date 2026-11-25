// flags: -O4,s
typedef struct { int x, y, z; } Vec;

extern char *DAT_02108c84;
extern const short DAT_020ed83c[];
extern int DAT_overlay_21__021a141c;
extern int DAT_020ed09c;

extern void FUN_overlay_21__0219b424(void *);
extern unsigned FUN_overlay_21__0219b65c(void *);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern void FUN_02035408(Vec *, int, int, int);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02072750(void *, int, Vec *);
extern void FUN_0207278c(void *, int, unsigned);
extern void FUN_02072724(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02044570(void *, int, int);
extern char *FUN_02075040(void *, int);

#define W(p,n) (*(int *)((char *)(p)+(n)))
#define U(p,n) (*(unsigned *)((char *)(p)+(n)))

void FUN_overlay_21__0219bb84(char *self) {
    char *owner = *(char **)(self + 4);
    char *context = *(char **)(self + 8);
    char *camera, *effect;
    Vec sum, base, delta;
    unsigned angle;
    int sine, cosine, scale;

    switch (U(self, 12)) {
    case 4:
        FUN_overlay_21__0219b424(context);
        break;
    case 3:
        if (!W(self, 68) && !W(context, 8)) FUN_020c193c(26, 2, 0, 0, 4);
        break;
    case 5:
        if (W(self, 68) == 7 && !W(context, 8)) {
            camera = DAT_02108c84;
            if (camera && (camera = *(char **)(camera + 92)) != 0) {
                ((void (*)(void *, int, int))(*(void ***)camera)[18])(camera, 20480, 10);
            }
        }
        if (W(self, 68) == 3 && !W(self, 20)) {
            angle = FUN_overlay_21__0219b65c(context);
            cosine = DAT_020ed83c[2 * ((int)angle >> 4) + 1];
            sine = DAT_020ed83c[2 * ((int)angle >> 4)];
            if (!W(context, 8)) FUN_020c193c(26, 3, 0, 0, 4);
            scale = DAT_overlay_21__021a141c;
            FUN_02035408(&delta,
                (int)(((long long)sine * scale + 2048) >> 12),
                0,
                (int)(((long long)cosine * scale + 2048) >> 12));
            base = *(Vec *)(context + 96);
            sum.x = base.x + delta.x;
            sum.y = base.y + delta.y;
            sum.z = base.z + delta.z;
            *(Vec *)(self + 44) = sum;
            W(self, 36) = FUN_02072650(owner, 1, 0, 0);
            FUN_02072750(owner, W(self, 36), (Vec *)(self + 44));
            FUN_0207278c(owner, W(self, 36), angle);
        }
        break;
    case 6:
        if (!W(context, 8)) FUN_020c1d7c(26, 20, 0, 0, 4);
        break;
    case 7:
        if (!W(self, 68) && !W(context, 8)) FUN_020c193c(26, 5, 0, 0, 4);
        break;
    }

    if (FUN_02040d2c(owner, W(self, 16))) {
        switch (U(self, 12)) {
        case 0:
            FUN_02040c0c(owner, W(self, 16), 26, 4096, 0);
            W(self, 12) = 1;
            break;
        case 3:
            FUN_02040c0c(owner, W(self, 16), 39, 4096, 0);
            W(self, 12) = 4;
            break;
        case 5:
            if (!W(self, 20)) {
                FUN_02044570(owner, W(context, 44), 1);
                FUN_02044570(owner, W(context, 48), 1);
                W(self, 40) = FUN_02074e9c(owner, 14, 0, 0);
                if (W(self, 40) != DAT_020ed09c) {
                    effect = FUN_02075040(owner, W(self, 40));
                    if (effect) {
                        *(Vec *)(effect + 92) = *(Vec *)(self + 44);
                        U(effect, 228) |= 16384;
                    }
                }
                if (W(self, 36) != -1) {
                    FUN_02072724(owner, W(self, 36));
                    W(self, 36) = -1;
                }
            }
            if (U(self, 20) > 30) {
                if (W(self, 28) < W(self, 24)) {
                    FUN_02040c0c(owner, W(self, 16), 38, 4096, 10);
                    W(self, 12) = 3;
                    FUN_02044570(owner, W(context, 44), 0);
                    FUN_02044570(owner, W(context, 48), 0);
                    W(self, 68) = 0;
                    W(self, 20) = 0;
                    W(self, 28)++;
                } else {
                    FUN_02040c0c(owner, W(self, 16), 41, 4096, 0);
                    W(context, 28) = 3;
                    W(self, 12) = 6;
                }
            } else {
                U(self, 20)++;
            }
            break;
        case 7:
            FUN_02040c0c(owner, W(self, 16), 27, 4096, 0);
            if (!W(context, 8)) FUN_020c193c(26, 6, 0, 0, 4);
            W(self, 12) = 2;
            break;
        case 2:
            W(context, 24) = 2;
            break;
        }
        W(self, 68) = 0;
    } else if (W(self, 12) == 1 && U(self, 68) > 60) {
        FUN_02040c0c(owner, W(self, 16), 38, 4096, 10);
        W(self, 12) = 3;
        FUN_02044570(owner, W(context, 44), 0);
        FUN_02044570(owner, W(context, 48), 0);
        W(self, 68) = 0;
    } else if (W(self, 12) == 4 && U(self, 68) > 60) {
        FUN_02040c0c(owner, W(self, 16), 40, 4096, 0);
        W(self, 12) = 5;
        W(self, 68) = 0;
    } else if (W(self, 12) == 6 && U(self, 68) > 60) {
        FUN_02040c0c(owner, W(self, 16), 42, 4096, 10);
        W(self, 12) = 7;
        W(self, 68) = 0;
    } else {
        U(self, 68)++;
    }
}
