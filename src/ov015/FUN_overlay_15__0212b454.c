// flags: -O4,p
typedef struct {
    unsigned char pad[0x26];
    unsigned short f26;
    unsigned char f28;
    unsigned char pad29;
} Rec;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
} Sprite;
typedef struct {
    Rec *recs;
    unsigned char pad4[0xc];
    Sprite *s10[5];
    Sprite *s24[5];
    unsigned char pad38[0xa];
    unsigned short tbl42[3];
    unsigned short tbl48[4];
    unsigned char pad50;
    unsigned char count;
} State;
struct G_b454 {
    unsigned short a;
    unsigned short b;
    State *state;
};
extern struct G_b454 DAT_0213e858;
void FUN_overlay_15__0212b454(int row, int index) {
    if (row < DAT_0213e858.state->count) {
        Sprite *sp = DAT_0213e858.state->s10[index];
        sp->f4 = (sp->f4 & ~0x3ff) | DAT_0213e858.state->tbl42[DAT_0213e858.state->recs[row].f28];
        sp = DAT_0213e858.state->s24[index];
        sp->f4 = (sp->f4 & ~0x3ff) | DAT_0213e858.state->tbl48[DAT_0213e858.state->recs[row].f26];
    }
}
