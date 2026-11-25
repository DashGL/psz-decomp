// flags: -O4,s
//cpp
struct S_10 {
    unsigned int type;
    unsigned char pad[0x84];
    unsigned short *wstr;
    signed char *nstr;
    int count;
};

extern "C" int FUN_overlay_10__0211f680(struct S_10 *p) {
    unsigned int type = p->type;
    int space = (type == 0 || type == 1 || type == 3) ? 0x3000 : 0x20;
    enum { E0 = 0, E1 = 1 };
    if (((type == 0 || type == 1 || type == 3) ? E1 : E0) != 0) {
        unsigned short ch;
        for (int i = 0; i < p->count && (ch = p->wstr[i]) != 0; i++) {
            if (space != ch) return 1;
        }
    } else {
        signed char ch;
        for (int i = 0; i < p->count && (ch = p->nstr[i]) != 0; i++) {
            if (space != ch) return 1;
        }
    }
    return 0;
}
