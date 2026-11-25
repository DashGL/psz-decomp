// flags: -O4,s
#pragma opt_propagation off
typedef struct { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern int FUN_02033704(void);
extern void FUN_0203067c(void *, int);
extern void FUN_02030658(void *, Vec *);
extern void FUN_020304c8(void *, Vec *, int);
extern void FUN_02044c34(void *, Vec *, int);
extern void FUN_02099f50(void *);
extern void FUN_0203041c(void *);

#define W(n) (*(int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))

static inline int FX_Mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_020a3edc(char *s) {
    char *data;
    int arc, step, sum;
    unsigned short angle, start, end;
    Vec pos;

    if ((unsigned char)s[46] == 2) {
        data = *(char **)(s + 72);
        arc = *(short *)(data + 42);
        if (arc) {
            if (W(368) <= 0) {
                unsigned short base = H(44);
                step = W(360);
                sum = base + H(364) * step;
                angle = (unsigned short)sum;
                if (arc == 360) {
                    if (sum >= 65536 || sum <= 0) {
                        W(368) = *(short *)(data + 40);
                    }
                } else {
                    start = H(358);
                    end = (unsigned short)(start + (arc << 16) / 360);
                    if (angle > end || angle < start) {
                        if ((angle > end && angle < start) || end >= start) {
                            if (arc != 360) {
                                if (step == 1) angle = end;
                                else angle = start;
                                W(368) = *(short *)(data + 40);
                                W(360) *= -1;
                            }
                        }
                    }
                }
                {
                    int idx = ((unsigned short)(angle + 0x8000) >> 4) << 1;
                    int dz = FX_Mul(DAT_020ed83c[idx], 0x3000);
                    int dx = FX_Mul(DAT_020ed83c[idx + 1], -0x3000);
                    int pz = W(352) + dz;
                    int py = W(348);
                    int px = W(344) + dx;
                    pos.x = px;
                    pos.y = py;
                    pos.z = pz;
                }
                FUN_0203067c(s, angle);
                FUN_02030658(s, &pos);
                FUN_020304c8(s, &pos, angle);
                FUN_02044c34(s + 76, &pos, angle);
            } else {
                W(368)--;
            }
        }
        if (!FUN_02033704()) {
            FUN_02099f50(s + 76);
        }
    } else if ((unsigned char)s[46] == 3) {
        if (!FUN_02033704()) {
            if (W(376) <= 60) {
                W(376)++;
            } else {
                W(372) |= 1;
            }
        } else {
            W(372) |= 1;
        }
    }
    FUN_0203041c(s);
}
