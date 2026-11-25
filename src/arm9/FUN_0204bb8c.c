// flags: -O4,s
typedef struct {
    unsigned int x, y, z;
} Vector;

typedef struct {
    unsigned int w[12];
} Matrix43;

typedef struct {
    unsigned int w[9];
} Matrix33;

extern void *DAT_02108c64;
extern char *FUN_0204a580(void);
#pragma thumb off
extern int FUN_0201d30c(void *, int);
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern int FUN_0206d45c(void *);
extern int FUN_0204260c(void *, unsigned int, Matrix43 *, Matrix33 *);
extern unsigned int FUN_0204daa8(int);
extern unsigned int FUN_0204ad14(void *, Vector *);
extern void FUN_02032dfc(void *, void *);
extern void FUN_020345f0(Vector *, const Vector *);
extern void FUN_02034680(Vector *, void *);
extern void FUN_0204a8fc(Vector *, Matrix43 *, Matrix33 *, void *);
extern void FUN_02035408(Vector *, unsigned int, unsigned int, unsigned int);

#define W(n) (*(unsigned int *)(s + (n)))

int FUN_0204bb8c(char *s) {
    Vector point;
    Vector copy;
    Vector location1;
    Matrix43 a1;
    Matrix33 b1;
    Vector out1;
    Vector location2;
    Matrix43 a2;
    Matrix33 b2;
    unsigned int descriptor[5];
    Vector temp1;
    Vector temp2;
    Vector temp3;
    int result = 0;
    unsigned int limit = *(unsigned int *)(FUN_0204a580() + 100);
    char *part;

    point = *(Vector *)(s + 92);
    part = *(char **)(s + 48);
    if (part != 0) {
        int allowed = 1;
        if (*(void **)(part + 28) != 0) {
            int id = FUN_0201d30c(*(void **)(part + 28), 0);
            if (id == 40 || id == 42 || id == 43 || id == 44 || id == 56 ||
                id == 61 || id == 62 || id == 63) {
                allowed = 0;
            }
            FUN_02032dfc(descriptor, DAT_02108c64);
            if (FUN_0206d45c(descriptor) && id == 41) {
                allowed = 0;
            }
        }
        if (allowed) {
            copy = *(Vector *)(*(char **)(s + 48) + 108);
            FUN_020345f0(&temp1, &copy);
            point = temp1;
            if (W(228) & 0x2000000) {
                char *object = (char *)FUN_0204daa8((int)W(232));
                if (object != 0) {
                    FUN_0200c938(&location1, 12);
                    if (W(152) == ~0u) {
                        FUN_02034680(&location1, object + 156);
                        location1.x += W(92);
                        location1.y += W(96);
                        location1.z += W(100);
                    } else if (*(void **)(object + 140) != 0) {
                        FUN_0204260c(*(void **)(object + 140), W(152), &a1, &b1);
                        FUN_0204a8fc(&out1, &a1, &b1, s + 92);
                        location1.x = out1.x;
                        location1.y = out1.y;
                        location1.z = out1.z;
                    }
                    FUN_020345f0(&temp2, &location1);
                    point = temp2;
                }
            } else if (W(152) != ~0u) {
                char *object = (char *)FUN_0204daa8((int)W(232));
                if (object != 0) {
                    void *model = *(void **)(object + 140);
                    if (model != 0) {
                        FUN_0200c938(&location2, 12);
                        FUN_0204260c(model, W(152), &a2, &b2);
                        FUN_02035408(&temp3, a2.w[9], a2.w[10], a2.w[11]);
                        point = temp3;
                    }
                }
            }
            if (limit > FUN_0204ad14(FUN_0204a580(), &point)) {
                result = 1;
            }
        }
    }
    return result;
}
