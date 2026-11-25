// flags: -O4,p
typedef struct {
    unsigned char id[6];
    unsigned short val;
    unsigned char pad[22];
} Rec;

typedef struct {
    unsigned short pad0;
    unsigned short mask;
    unsigned char pad1[32];
    Rec recs[2];
} Table;

extern Table *DAT_0213e8dc;

unsigned short FUN_overlay_15__02133c90(const unsigned char *id) {
    Table *p = DAT_0213e8dc;
    unsigned short i;
    for (i = 1; i < 2; i++) {
        if (p->mask & (1 << i)) {
            Rec *r = &p->recs[i - 1];
            if (id[0] == r->id[0] && id[1] == r->id[1] &&
                id[2] == r->id[2] && id[3] == r->id[3] &&
                id[4] == r->id[4] && id[5] == r->id[5]) {
                return p->recs[i - 1].val;
            }
        }
    }
    return 0;
}
