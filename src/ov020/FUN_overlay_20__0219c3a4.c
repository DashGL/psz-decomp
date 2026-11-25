//cpp
// flags: -O4,s
struct Rec {
    int pad0[15];
    int active;
    int pad1[2];
};
struct Mgr {
    int pad[54];
    Rec *recs;
};
extern "C" int FUN_overlay_20__0219c3a4(Mgr *p) {
    for (int i = 0; i < 6; i++) {
        int ok = (p->recs[i].active != 0) ? 1 : 0;
        if (ok != 0) return 1;
    }
    return 0;
}
