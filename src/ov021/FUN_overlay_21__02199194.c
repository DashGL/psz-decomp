// flags: -O4,s
struct Rec {
    int pad0[5];
    int owner;
    int pad1[26];
    int ready;
    int pad2[14];
};
struct Mgr {
    int pad[59];
    struct Rec *records;
};
int FUN_overlay_21__02199194(struct Mgr *p) {
    int ready = 1;
    int i;
    for (i = 0; i < 4; i++) {
        if (p->records[i].owner != -1 && p->records[i].ready == 0) {
            ready = 0;
        }
    }
    return ready;
}
