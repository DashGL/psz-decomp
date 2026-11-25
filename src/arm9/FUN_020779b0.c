// flags: -O4,s
struct Rec44 {
    int f0;
    int f4;
    unsigned int b0 : 3;
    unsigned int b3 : 2;
    unsigned int b5 : 2;
    unsigned int rest : 25;
    int fc;
    int f10;
    int f14[2];
    int pad[4];
};
struct In77 {
    struct Rec44 recs[3];
    int count;
};
struct Out77 {
    int pad[9];
    struct Rec44 recs[3];
    int count;
};
void FUN_020779b0(struct Out77 *out, struct In77 *in) {
    int i, j;
    out->count = in->count;
    for (i = 0; i < in->count; i++) {
        out->recs[i].f0 = in->recs[i].f0;
        out->recs[i].f4 = in->recs[i].f4;
        out->recs[i].b0 = in->recs[i].b0;
        out->recs[i].fc = in->recs[i].fc;
        out->recs[i].b5 = in->recs[i].b5;
        out->recs[i].f10 = in->recs[i].f10;
        for (j = 0; j < 2; j++) {
            out->recs[i].f14[j] = in->recs[i].f14[j];
        }
    }
}
