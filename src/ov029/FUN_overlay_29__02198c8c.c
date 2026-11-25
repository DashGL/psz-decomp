// flags: -O4,s
extern int FUN_0207f770(void *);
extern int *FUN_02072a14(void *, int, int);
extern int *FUN_02072a40(void *, int, int);
extern void FUN_02037924(void *);
void FUN_overlay_29__02198c8c(int *self) {
    unsigned int embedded = (unsigned int)self + 100;
    void *registry;
    int mode;
    int *record, *slot, *other, *state;
    if (embedded && FUN_0207f770((void *)embedded) == 3) return;
    registry = (char *)*(void **)0x0210e24c + 0x74;
    record = FUN_02072a14(registry, self[3], 1);
    if (!record) return;
    slot = &record[3];
    if (*slot == 0) return;
    switch (*slot) {
    case 1: mode = 1; break;
    case 2: mode = 3; break;
    default: return;
    }
    state = (int *)self[4];
    other = FUN_02072a40(registry, 0, 0);
    if (other && other[3] != -1) state[20] = other[3];
    state[19] = mode;
    FUN_02037924(state);
    *slot = 0;
}
