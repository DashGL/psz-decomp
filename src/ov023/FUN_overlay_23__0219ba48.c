//cpp
// flags: -O4,s
struct Actor;
typedef int (Actor::*PredFn)();
typedef void (Actor::*StateFn)();
struct StateEntry {
    StateFn enter;
    StateFn update;
    StateFn exit;
};

extern "C" {
extern PredFn DAT_0219da58[];
extern StateEntry DAT_0219da70[];
extern int DAT_0219da50, DAT_0219da4c, DAT_0219da44, DAT_0219da54, DAT_0219da48, DAT_0219da40;
extern void FUN_overlay_23__0219bc60(void *);
extern int FUN_overlay_23__0219bd88(void *);
extern void FUN_02086d60(int *, int *, int *);
extern void FUN_0208e67c(void *);
}

struct Actor {
    virtual void dummy();
    unsigned char pad0[0x60];
    int m_64;
    int m_68;
    int m_6c;
    int m_70;
    int m_74;
    int m_78;
    int m_7c;
    unsigned char pad1[0x6c];
    int m_ec;

    int has_next() const { return (m_70 != -1) ? 1 : 0; }
    int has_curr() const { return (m_68 != -1) ? 1 : 0; }
};

extern "C" void FUN_overlay_23__0219ba48(Actor *self) {
    PredFn pred;
    StateFn exit_fn;
    StateFn enter_fn;
    StateFn update_fn;
    int t0, t1, t2;
    FUN_overlay_23__0219bc60(self);
    if (self->m_ec && self->has_next()) {
        int commit = 1;
        if (FUN_overlay_23__0219bd88(self)) {
            commit = 0;
            pred = 0;
            if (self->has_curr()) {
                pred = DAT_0219da58[self->m_68];
            }
            int blocked = 1;
            if (pred != 0) {
                if ((self->*pred)()) {
                    blocked = 0;
                }
            }
            if (blocked) {
                if (self->m_68 != -1) {
                    exit_fn = DAT_0219da70[self->m_68].exit;
                    (self->*exit_fn)();
                }
                enter_fn = DAT_0219da70[self->m_70].enter;
                (self->*enter_fn)();
                commit = 1;
            }
        }
        if (commit) {
            self->m_64 = self->m_6c;
            self->m_68 = self->m_70;
            self->m_6c = -1;
            self->m_70 = -1;
            self->m_7c = 0;
            switch (self->m_68) {
            case 0: FUN_02086d60(&t0, &DAT_0219da50, &DAT_0219da4c); self->m_78 = t0; break;
            case 1: FUN_02086d60(&t1, &DAT_0219da44, &DAT_0219da54); self->m_78 = t1; break;
            case 2: FUN_02086d60(&t2, &DAT_0219da48, &DAT_0219da40); self->m_78 = t2; break;
            }
            FUN_0208e67c((char *)self + 0x20);
        }
    }
    if (self->has_curr()) {
        update_fn = DAT_0219da70[self->m_68].update;
        (self->*update_fn)();
    }
}
