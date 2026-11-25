// flags: -O4,s
struct Pair { unsigned int a, b; };
struct Big {
    unsigned int pad0;
    struct Pair p04;
    struct Pair p0c;
    struct Pair p14;
    unsigned int pad1[10];
    struct Pair p44;
    struct Pair p4c;
    unsigned int pad2[3];
    struct Pair p60;
    unsigned int pad3[5];
    struct Pair p7c;
    unsigned int pad4[12];
    struct Pair pb4;
    unsigned int pad5[5];
    struct Pair pd0;
    unsigned int pad6[5];
    struct Pair pec;
};
extern struct Pair DAT_020ebb98;
extern struct Big DAT_021a1270;
void FUN_overlay_22__021a0f84(void) {
    struct Pair pair = DAT_020ebb98;
    DAT_021a1270.p04 = pair;
    DAT_021a1270.p0c = pair;
    DAT_021a1270.p14 = pair;
    DAT_021a1270.p44 = pair;
    DAT_021a1270.p4c = pair;
    DAT_021a1270.p60 = pair;
    DAT_021a1270.p7c = pair;
    DAT_021a1270.pb4 = pair;
    DAT_021a1270.pd0 = pair;
    DAT_021a1270.pec = pair;
}
