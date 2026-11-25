// flags: -O4,s
typedef unsigned long long U64;
typedef struct {
    short id;
    short sub;
} Entry;
typedef struct {
    Entry entry;
    int timer;
} Queued;
typedef struct {
    Entry cur;        // 0x00
    int timer;        // 0x04
    int state;        // 0x08
    Entry cand[3];    // 0x0c (0x0c..0x17)
    Queued queue[3];  // 0x18 (0x18..0x2f)
    short *cooldowns; // 0x30
    void *ctx;        // 0x34
} Obj;

extern U64 UNK_0211c844[];
extern unsigned char UNK_020f4b3c[][24];
extern int FUN_0209ed38(void *);
extern int FUN_0209f014(void *, void *);
extern int FUN_0209efa8(void *, void *);
extern int FUN_0209685c(void *, int);
extern unsigned int FUN_0209ef64(void *);
extern void FUN_0209ecc4(void *, void *);
extern void FUN_0209ede8(void *);
extern void FUN_0209ecf0(void *, void *);
extern void FUN_02080e34(int, int, void *);
extern void *FUN_02096488(void);

void FUN_0209edf0(Obj *s) {
    int i, id, index;
    unsigned int n, j, choice;
    U64 random;
    for (i = 0; i < 72; ++i) {
        if (s->cooldowns[i] > 0) {
            --s->cooldowns[i];
        }
    }
    for (i = 0; i < 3; ++i) {
        if (FUN_0209ed38(&s->queue[i].entry)) {
            if (--s->queue[i].timer <= 0) {
                FUN_0209ecc4(s, &s->queue[i].entry);
                FUN_0209ede8(&s->queue[i].entry);
                s->queue[i].timer = 0;
            }
        }
    }
    switch (s->state) {
    case 0:
        if (--s->timer <= 0) {
            s->timer = 15;
            n = FUN_0209ef64(s);
            if (n) {
                random = UNK_0211c844[1] * UNK_0211c844[0] + UNK_0211c844[2];
                UNK_0211c844[0] = random;
                if (n != 0) random = (random >> 32) * n; choice = (unsigned int)(random >> 32);
                FUN_0209ecf0(s, &s->cand[choice]);
                for (j = 0; j < n; ++j) {
                    FUN_0209ede8(&s->cand[j]);
                }
                if (FUN_0209f014(s, s)) {
                    s->state = 1;
                }
            }
        }
        break;
    case 2:
        if (s->ctx && FUN_0209ed38(s)) {
            id = s->cur.id;
            index = FUN_0209685c(FUN_02096488(), id);
            FUN_02080e34(index, UNK_020f4b3c[id][s->cur.sub - 1], s->ctx);
        }
        if (s->cur.sub != 21) {
            index = FUN_0209efa8(s, s);
            if (index >= 0 && index < 72) {
                s->cooldowns[index] = 5400;
            }
        }
        s->timer = 90;
        s->state = 3;
        break;
    case 3:
        if (--s->timer <= 0) {
            s->state = 0;
            s->timer = 15;
        }
        break;
    }
}
