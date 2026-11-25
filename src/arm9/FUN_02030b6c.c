//cpp
// flags: -O4,s
struct Obj {
    virtual void f0();
    virtual void f1();
};

typedef Obj *(*Factory)(void *);

struct Selection {
    unsigned char selected[3];
    unsigned char count;
    unsigned int active;
};

struct Weights {
    unsigned int w[4];
};

struct Records {
    unsigned int count;
    char *entries;
};

struct Output {
    Obj **items;
    unsigned int count;
};

struct Random {
    unsigned long long state[3];
};

extern char *DAT_02108c64;
extern const Weights DAT_020ec270;

extern "C" {
extern char *FUN_02032ca0(void *, int);
extern void *FUN_020c14b8(void *, unsigned long long);
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_020c14dc(void *);
extern unsigned int FUN_02030d20(void *, unsigned int);
extern Factory *FUN_02030acc(int);

void FUN_02030b6c(Output *out, Records *records, unsigned int *counter, int special) {
    unsigned int limit = records->count;
    unsigned char shuffle[20];
    Random rnd;
    Weights weights;
    Selection sel;

    if (limit > 20) limit = 20;
    sel.count = 0;
    sel.active = 0;
    for (int k = 0; k < 3; k++) {
        sel.selected[k] = 0;
    }
    out->count = limit;
    if (special) {
        char *cfg = DAT_02108c64;
        cfg = FUN_02032ca0(cfg, (signed char)cfg[22]);
        if (cfg) {
            unsigned int seed = *(unsigned int *)(cfg + 20);
            unsigned int count;
            weights = DAT_020ec270;
            if (limit == 0) {
                count = 0;
                sel.active = 0;
            } else {
                int wi;
                unsigned int sum;
                unsigned int pick;
                if (limit > 20) limit = 20;
                sel.active = 1;
                FUN_020c14b8(&rnd, (unsigned long long)seed);
                sel.count = 0;
                pick = FUN_02030d20(&rnd, 100);
                sum = 0;
                for (wi = 0; wi < 4; wi++) {
                    sum += weights.w[wi];
                    if (sum > pick) {
                        sel.count = wi;
                        break;
                    }
                }
                count = sel.count;
                if (count != 0) {
                    for (unsigned int u = 0; u < limit; u++) {
                        shuffle[u] = u;
                    }
                    for (unsigned int u = 0; u < limit; u++) {
                        unsigned int j = FUN_02030d20(&rnd, limit);
                        unsigned char tmp = shuffle[j];
                        shuffle[j] = shuffle[u];
                        shuffle[u] = tmp;
                    }
                    for (unsigned int u = 0; u < sel.count; u++) {
                        sel.selected[u] = shuffle[u];
                    }
                    count = sel.count;
                }
                FUN_020c14dc(&rnd);
            }
            out->count = count;
        }
    }
    if (!out->count) return;
    out->items = (Obj **)FUN_020ba8a0(out->count * 4);
    if (!out->items) return;
    for (unsigned int i = 0; i < out->count; i++) {
        out->items[i] = 0;
    }
    unsigned int original = records->count;
    char *entry = records->entries;
    register unsigned int used = 0;
    for (unsigned int i = 0; i < original; i++, entry += 24) {
        int allowed;
        if (sel.active) {
            int j;
            for (j = 0; j < sel.count; j++) {
                if (i == sel.selected[j]) {
                    allowed = 1;
                    goto checked;
                }
            }
            allowed = 0;
        } else {
            allowed = 1;
        }
    checked:
        if (!allowed) continue;
        Factory *factory = FUN_02030acc((unsigned char)entry[20]);
        if (!factory || !*factory) continue;
        if (used >= out->count) continue;
        int ok = 1;
        if (counter) {
            entry[22] = *counter;
            if (++(*counter) > 20) ok = 0;
        }
        if (!ok) continue;
        Obj *object = (*factory)(entry);
        if (object) {
            object->f1();
            out->items[used] = object;
            used++;
        }
    }
}
}
