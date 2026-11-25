// flags: -O4,s
typedef struct { int x, y, z; } V;

extern void *DAT_02108c84;
extern void *DAT_02108d5c;
extern V DAT_020fc958;

extern int FUN_020424b4(void *, int);
extern int FUN_02036c34(void *);
extern int FUN_02036c64(void *);
extern int FUN_020424d8(void *, int);
extern unsigned int FUN_0203ffa8(void *, int, int, int);
extern void FUN_02042580(void *, int);
extern void FUN_02033dec(void *, void *, unsigned int);
extern void FUN_020424fc(void *, int, unsigned int);
extern void FUN_02042358(void *, int);
extern void FUN_020425a8(void *, int);
extern void FUN_020425d8(void *);
extern void FUN_0204248c(void *, int, unsigned int);
extern void FUN_02042560(void *, int);
extern void FUN_02040b8c(void *, void *);
extern void FUN_02040ac4(void *);
extern void FUN_02042668(void *, void *);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_02036384(void *, void *);

#define I(p, o) (*(int *)((char *)(p) + (o)))
#define U(p, o) (*(unsigned int *)((char *)(p) + (o)))
#define P(p, o) (*(char **)((char *)(p) + (o)))
#define H(p, o) (*(short *)((char *)(p) + (o)))
#define Q(a, b) ((int)(((long long)(int)(a) * (int)(b) + 0x800) >> 12))

void FUN_02040e5c(char *self, char *sequence, char *state) {
    int channels[5];
    V sampled, scaled, delta, position;
    char *slot = P(self, 0x98) + 0x70 * I(state, 8);
    char *model = P(slot, 0);
    int current = FUN_020424b4(model, 0);
    int nextFrame = current + I(state, 0x1c);
    int advance;

    if (I(state, 0x20) == 0
        && (nextFrame >= I(state, 0x10)
            || (I(state, 0xc) == I(state, 0x14) && current < I(state, 0x18)))) {
        advance = 1;
    } else {
        advance = 0;
    }

    if (I(state, 0xc) == -1 || advance) {
        if (I(state, 0xc) == -1) {
            I(state, 0xfc) = -1;
            I(state, 0x100) = 0;
        } else {
            I(state, 0xfc) = I(state, 0xc);
            I(state, 0x100) = current;
        }
        I(state, 0xc) = I(state, 0xc) + 1;

        if (I(state, 0xc) < I(sequence, 4)) {
            void *manager = DAT_02108c84;
            char *record = P(sequence, 0) + 0x14 * I(state, 0xc);
            int speed;
            int i;
            long long prod;

            channels[0] = ((signed char *)record)[0];
            channels[1] = ((signed char *)record)[1];
            channels[2] = ((signed char *)record)[2];
            channels[3] = ((signed char *)record)[3];
            channels[4] = ((signed char *)record)[4];

            {
                int recSpeed;
                int base;
                if (((H(slot, 0x46) & 2) ? 1 : 0) != 0) {
                    recSpeed = I(record, 0x10);
                    base = FUN_02036c34(self);
                    prod = (long long)base * recSpeed;
                } else {
                    recSpeed = I(record, 0x10);
                    base = FUN_02036c64(self);
                    prod = (long long)base * recSpeed;
                }
            }
            speed = (int)((prod + 0x800) >> 12);
            speed = Q(speed, I(state, 0x104));
            if (U(state, 0x114) & 1) {
                speed = 0x1000;
            }
            I(state, 0x1c) = speed;
            FUN_02042580(model, 0);

            for (i = 0; i < 5; i++) {
                char *channel = slot + 0x48 + 8 * i;
                unsigned int id;
                if (channels[i] < 0 || (id = FUN_0203ffa8(DAT_02108d5c, *(signed char *)P(P(self, 0x14), 0), i, channels[i])) == 0xffff) {
                    if (!(*(unsigned short *)channel == 0xffff) != 0) {
                        if (!((H(channel, 2) & 1) == 0) == 0) {
                            FUN_02033dec(manager, model, *(unsigned short *)channel);
                            FUN_020424fc(model, i, U(channel, 4));
                            H(channel, 2) |= 1;
                        }
                    } else {
                        FUN_02042358(model, i);
                    }
                } else {
                    if (i == 0) {
                        if (!((H(record, 6) & 0x10) == 0) != 0) {
                            U(model, 0x18) |= 4;
                            I(state, 0x24) = 1;
                        } else {
                            U(model, 0x18) &= ~4u;
                            I(state, 0x24) = 0;
                        }
                        *(V *)(state + 0x28) = DAT_020fc958;
                        if (I(state, 0xc) == 0 && I(state, 0x108) > 0) {
                            FUN_020425a8(model, I(state, 0x108));
                        } else {
                            FUN_020425d8(model);
                        }
                    }
                    FUN_02033dec(manager, model, id);
                    I(state, 0x20) = (H(record, 6) & 1) ? 1 : 0;
                    H(channel, 2) &= ~1;
                    if (!((H(record, 6) & 2) == 0) != 0) {
                        FUN_0204248c(model, i, U(record, 8));
                    }
                    FUN_020424fc(model, i, speed);
                }
            }

            if (I(self, 8) != 0) {
                FUN_02042560(model, 0);
            }
            current = FUN_020424d8(model, 0);
            if (!((H(record, 6) & 4) == 0) != 0 && I(record, 0xc) < current) {
                current = I(record, 0xc);
            }
            I(state, 0x10) = current;
        } else {
            char *record = P(sequence, 0) + 0x14 * (I(state, 0xc) - 1);
            if (((H(record, 6) & 1) ? 1 : 0) == 0) {
                FUN_02042560(model, 0);
            }
            FUN_02040b8c(self, state);
            FUN_02040ac4(state);
        }
    } else {
        I(state, 0xfc) = I(state, 0xc);
        I(state, 0x100) = current;
        if (I(state, 0x24) != 0) {
            int s268;
            V *selfPos;
            FUN_02042668(model, &sampled);
            scaled.x = sampled.x;
            scaled.y = sampled.y;
            scaled.z = sampled.z;
            s268 = I(state, 0x10c);
            scaled.x = Q(scaled.x, s268);
            scaled.y = Q(scaled.y, s268);
            scaled.z = Q(scaled.z, s268);
            FUN_02035408(&delta, scaled.x - I(state, 0x28), scaled.y - I(state, 0x2c), scaled.z - I(state, 0x30));
            selfPos = (V *)(self + 0x38);
            FUN_02035408(&position, selfPos->x + delta.x, selfPos->y + delta.y, selfPos->z + delta.z);
            FUN_02036384(self, &position);
            *(V *)(state + 0x28) = scaled;
        }
    }
}
