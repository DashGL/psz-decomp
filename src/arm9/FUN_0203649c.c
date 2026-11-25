// flags: -O4,s
typedef struct { unsigned int w[3]; } Vector;
extern void FUN_02036864(void);
extern void *DAT_02108d68;
extern const unsigned int DAT_020ed084[];
extern void FUN_0207f690(void *), FUN_0204b3ac(void *, void *, void *, unsigned int), FUN_02036a88(void *, int), FUN_02036b30(void *), FUN_0203666c(void *), FUN_02036a4c(void *, int);
extern int FUN_0207f770(void *), FUN_02036730(void *, void *);
extern void *FUN_0204b4d4(void *), *FUN_02046d94(void *, int, int), *FUN_020428a0(void *, int);
#define W(n) (*(unsigned int *)(s + (n)))
#define P(n) (*(void **)(s + (n)))
void FUN_0203649c(char *s) {
    int state, valid;
    unsigned int desc1[25], desc2[25], scale;
    Vector point, v1, v2;
    FUN_0207f690(s + 100);
    state = FUN_0207f770(s + 100);
    if (state != (int)W(136)) {
        if (W(136) != ~0u) {
            if (P(140)) {
                FUN_0204b3ac(P(140), 0, 0, 0);
                FUN_0204b4d4(P(140));
                P(140) = 0;
            }
            switch (W(136)) {
            case 0:
            case 3:
            case 4:
                break;
            case 1:
                FUN_02036a88(s, 1);
                break;
            case 2:
                FUN_02036a88(s, 1);
                break;
            case 5:
                FUN_02036b30(s);
                break;
            }
        }
        if (state != -1) {
            FUN_0203666c(desc1);
            switch (state) {
            case 0:
            case 3:
            case 4:
                break;
            case 1:
                scale = (*(unsigned int **)P(20))[11];
                desc1[21] = 63;
                v1.w[0] = scale; v1.w[1] = scale; v1.w[2] = scale;
                *(Vector *)&desc1[11] = v1;
                P(140) = FUN_02046d94(desc1, 0, 0);
                if (P(140)) {
                    *(unsigned int *)((char *)P(140) + 72) = 12288000;
                    FUN_0204b3ac(P(140), (void *)FUN_02036864, s, 0);
                }
                FUN_02036a4c(s, 1);
                break;
            case 2:
                FUN_02036a4c(s, 1);
                break;
            case 5:
                FUN_02036b30(s);
                break;
            }
        }
    }
    valid = 0;
    if (state != -1) valid = FUN_02036730(s, &point);
    if (state != -1 && state != 1 && !P(140) && valid && FUN_020428a0(DAT_02108d68, W(12))) {
        FUN_0203666c(desc2);
        desc2[21] = DAT_020ed084[state];
        scale = (*(unsigned int **)P(20))[11];
        v2.w[0] = scale; v2.w[1] = scale; v2.w[2] = scale;
        *(Vector *)&desc2[11] = v2;
        P(140) = FUN_02046d94(desc2, 0, 0);
        if (P(140)) FUN_0204b3ac(P(140), (void *)FUN_02036864, s, 0);
    }
    if (P(140) && valid) *(Vector *)((char *)P(140) + 92) = point;
    W(136) = state;
}
