// flags: -O4,s
extern void *DAT_0210e240;
extern void *DAT_02108c84;
extern unsigned long long DAT_0211c844[];
extern char *FUN_0203496c(void *, void *);
extern void *FUN_020508ec(void *, void *);
extern unsigned int FUN_020348d0(void *, unsigned int);
extern void FUN_02033dec(void *, void *, unsigned int);
extern unsigned int FUN_020424d8(void *, int);
extern void FUN_0204248c(void *, int, int);

enum { E0 = 0, E1 = 1 };

int FUN_020347b8(char *s, void *key, unsigned char *old, unsigned char *next) {
    int changed = 0;
    char *child = FUN_0203496c(s, next);
    char *previous = FUN_0203496c(s, old);

    if (previous != child) {
        if (previous) {
            *(unsigned int *)(previous + 24) &= ~1u;
        }
        changed = 1;
    }
    if (child) {
        void *table;
        void *m;
        if (((next[5] & 2) == 2) ? E1 : E0) {
            *(unsigned int *)(child + 24) &= ~1u;
        } else {
            *(unsigned int *)(child + 24) |= 1;
        }
        table = 0;
        m = DAT_0210e240;
        if (m) {
            table = FUN_020508ec(m, key);
        }
        if (table) {
            unsigned int id = FUN_020348d0(table, next[7]);
            unsigned int prior = FUN_020348d0(table, old[7]);
            if (changed || prior != id) {
                m = DAT_02108c84;
                if (m) {
                    FUN_02033dec(m, child, id);
                    if (*(unsigned int *)(s + 8) & 1) {
                        unsigned int range = FUN_020424d8(child, 0);
                        unsigned long long *rng = DAT_0211c844;
                        unsigned long long state = rng[1] * rng[0] + rng[2];
                        unsigned int sample;
                        int scaled;
                        rng[0] = state;
                        sample = (unsigned int)(((state >> 32) * 4095) >> 32);
                        scaled = (int)(((long long)(int)sample * (int)(range - 4096u) + 2048) >> 12);
                        FUN_0204248c(child, 0, scaled);
                    }
                }
            }
        }
    }
    return changed;
}
