// flags: -O4,s
struct Rec {
    int pad0[6];
    int a;
    int b;
    int pad1;
    int c;
    int pad2[37];
};
struct Child {
    int pad[59];
    struct Rec *entries;
};
extern void FUN_overlay_21__021990dc(void *, int);
void FUN_overlay_21__0219f4e4(struct Child **p) {
    struct Child *child = p[1];
    struct Rec *entries = child->entries;
    int i;
    FUN_overlay_21__021990dc(child, 0);
    for (i = 0; i < 4; i++) {
        if (i < 2) {
            entries[i].a = 1;
        }
        entries[i].b = 0;
        entries[i].c = 0;
    }
}
