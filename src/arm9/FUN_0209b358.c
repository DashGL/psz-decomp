// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned int w0, w1;
    int x, y, z;
    unsigned char b14, b15, b16, b17, b18, b19, b1a, b1b;
} Packet;
typedef struct {
    unsigned int w[6];
} Desc;

extern unsigned char *UNK_02108d04;
extern short UNK_020ed83c[];
extern int FUN_0203d02c(void);
extern int FUN_02033704(void);
extern int FUN_0203bf3c(void *);
extern int FUN_0203ae60(void *);
extern void FUN_02030da8(void *, void *);
extern void FUN_020bce3c(void *);
extern void *FUN_0209b680(void *, void *, int);
extern int FUN_0205c520(int, int);
extern void FUN_02033658(int, int, void *);
extern void FUN_02030658(void *, void *);
extern void FUN_020304c8(void *, void *, unsigned int);
extern void FUN_02099f50(void *);
extern void FUN_0203d200(void *, int);
extern void FUN_0203041c(void *);

#define W(n) (*(unsigned int *)(self + (n)))
#define I(n) (*(int *)(self + (n)))
#define P(n) (*(unsigned char **)(self + (n)))
#define V(n) (*(Vec *)(self + (n)))
#define ROUNDED(value) ((int)(((long long)(value) * 410 + 2048) >> 12))

void FUN_0209b358(unsigned char *self)
{
    Packet packet1;
    Vec pos1;
    Vec event_pos;
    Vec pos2;
    Packet packet2;
    Vec saved;
    Desc descriptor;
    unsigned int identity1;
    unsigned int identity2;
    unsigned char state = self[46];

    if (state == 1) {
        unsigned char *actor = UNK_02108d04;
        if (actor && FUN_0203d02c()) {
            W(320) |= 1;
        }
        if ((signed char)P(72)[24] == 1) {
            int flg = 1;
            if (!(*(volatile unsigned char *)P(76) & 1)) flg = 0;
            if (flg == 0 && !(W(320) & 2)) {
                FUN_02030da8(&identity1, self);
                FUN_0209b680(&packet1, &identity1, 0);
                FUN_020bce3c(&packet1);
                W(320) |= 2;
            }
        }
    } else if (state == 2) {
        switch (W(324)) {
        case 1: {
            int base_y;
            pos1 = V(28);
            base_y = I(348);
            if (pos1.y < base_y + 10240) {
                int q = FUN_0205c520(pos1.y - 4096, 6144);
                int idx = (int)(unsigned short)(q << 2) >> 4;
                int delta = ROUNDED(UNK_020ed83c[idx * 2 + 1]);
                pos1.y = delta + (pos1.y + 410);
                if (pos1.y > I(348) + 10240) {
                    pos1.y = I(348) + 10240;
                }
            } else {
                int flg;
                pos1.y = base_y + 10240;
                flg = 1;
                if (!(*(volatile unsigned char *)P(76) & 1)) flg = 0;
                if (flg != 0) {
                    if (!FUN_02033704() && (signed char)P(72)[24] == 0 && (W(320) & 1)) {
                        event_pos = V(28);
                        FUN_02033658(4, 7, &event_pos);
                    }
                    W(324) = 2;
                }
            }
            FUN_02030658(self, &pos1);
            FUN_020304c8(self, &pos1, *(unsigned short *)(self + 44));
            V(332) = pos1;
            I(344) = pos1.y;
            break;
        }
        case 2: {
            int idx;
            I(328)++;
            pos2 = V(332);
            idx = ((I(328) % 30) * 0x888) >> 4;
            int d = ROUNDED(UNK_020ed83c[idx * 2]); *(volatile int *)&pos2.y = d + *(volatile int *)&pos2.y;
            FUN_02030658(self, &pos2);
            I(344) = pos2.y;
            if (I(328) > I(352)) {
                int flg = (*(volatile unsigned char *)P(76) & 2) != 0;
                if (flg == 0 && !(W(320) & 4)) {
                    FUN_02030da8(&identity2, self);
                    FUN_0209b680(&packet2, &identity2, 1);
                    saved = V(28);
                    packet2.x = saved.x;
                    packet2.y = saved.y;
                    packet2.z = saved.z;
                    packet2.b19 = ((signed char *)P(4))[18];
                    FUN_020bce3c(&packet2);
                    W(320) |= 4;
                }
            }
            break;
        }
        }
    } else if (state == 3) {
        if (!FUN_02033704()) {
            if (!(W(320) & 8)) {
                signed char kind;
                int delay, minimum;
                descriptor = *(Desc *)P(4);
                kind = ((signed char *)&descriptor)[18];
                delay = (kind == 0) ? 15 : 5;
                minimum = (kind == 0) ? 10 : 0;
                if (I(328) < delay) {
                    I(328)++;
                } else {
                    W(320) |= 8;
                }
                if (I(328) > minimum) {
                    FUN_02099f50(self + 80);
                }
            }
        } else {
            W(320) |= 8;
        }
    } else if (state == 4) {
        if (W(320) & 16) {
            unsigned char *actor = UNK_02108d04;
            if (actor && FUN_0203bf3c(actor) && FUN_0203ae60(actor)) {
                FUN_0203d200(actor, 34);
            }
            W(320) &= ~16U;
        }
    }
    FUN_0203041c(self);
}
