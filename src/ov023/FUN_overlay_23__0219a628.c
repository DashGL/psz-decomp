//cpp
// flags: -O4,s
struct Rec {
    unsigned int pad[9];
    unsigned int flags;
};
struct Mgr {
    unsigned int pad[54];
    Rec *recs;
    int count;
};
extern "C" void *FUN_overlay_23__0219a628(Mgr *p) {
    for (int i = 0; i < p->count; i++) {
        Rec *rec = &p->recs[i];
        int active = (rec->flags & 1) ? 1 : 0;
        if (!active) return rec;
    }
    return 0;
}
