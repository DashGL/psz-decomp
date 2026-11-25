// flags: -O4,s
typedef struct { int w[4]; } Four;
typedef struct { signed char b[5]; } Entry;
typedef struct { int x, y, z; } Vec;
typedef struct {
    int f00;
    int delta;
    int timers[6];
    int flags[6];
    int pad[2];
    int f40;
} State;

extern char *DAT_02108d04;
extern int FUN_020a91f0(void *);
extern int FUN_0204579c(Entry *, int, int);
extern int FUN_020a92d4(void *, int);
extern int FUN_020a94b0(void *, int, int);
extern int FUN_020a8e10(void);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_020a96f0(void *, Entry *, int);
extern void FUN_020345f0(Vec *, void *);
extern void FUN_0204a8c4(int, int, Vec *, int);

void FUN_020a909c(State *s) {
    Four data;
    Entry entries[6];
    Vec pos;
    int threshold;
    char *actor;
    int category;
    int percent;
    int trigger;
    int i;
    int success;

    if (!FUN_020a91f0(s)) return;
    actor = DAT_02108d04;
    actor = (char *)(char *volatile)actor;
    if (!actor) return;
    if (*(short *)(actor + 340) < 10000) {
        s->flags[2] = 1;
    }
    data = *(Four *)(actor + 416);
    category = (data.w[2] & 0x0f00) >> 8;
    percent = ((data.w[1] & (int)0xfe000000) >> 25) & 0x7f;
    for (i = 0; i < 6; ++i) {
        int b0, b3;
        FUN_0204579c(&entries[i], category, i);
        b0 = entries[i].b[0];
        b3 = entries[i].b[3];
        trigger = 0;
        if (s->timers[i] > 0) {
            s->timers[i] -= s->delta;
        } else if (b0 != 0 && b3 >= 0 && s->flags[i] != 0 && FUN_020a92d4(s, i)) {
            threshold = entries[i].b[1] * percent / 100;
            if (FUN_02035b60(100) < (unsigned int)threshold) {
                trigger = 1;
            } else if ((unsigned int)(i - 4) <= 1) {
                FUN_020a96f0(s, &entries[i], i);
            } else {
                s->flags[i] = 0;
            }
        }
        if (trigger) {
            success = FUN_020a94b0(s, entries[i].b[0], entries[i].b[2]);
            if (success) {
                FUN_020a8e10();
                FUN_020345f0(&pos, actor + 156);
                FUN_0204a8c4(0, 22, &pos, -1);
            }
            if ((unsigned int)i <= 2) {
                s->flags[i] = 0;
                break;
            }
            if (i == 3 && !success) break;
            if (i != 2) {
                FUN_020a96f0(s, &entries[i], i);
            }
            break;
        }
    }
}
