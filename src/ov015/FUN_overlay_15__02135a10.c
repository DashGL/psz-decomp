// flags: -O4,p
typedef struct { unsigned short f0, f2, f4, f6; } Rec;
typedef struct { unsigned char pad[8]; Rec *recs; unsigned char count; } Obj;
void FUN_overlay_15__02135a10(Obj *p, int index, unsigned int value) {
    Rec *recs = p->recs;
    if (index >= 0) {
        unsigned int m = recs[index].f4 & ~0xc00;
        recs[index].f4 = m | (value << 10);
    } else {
        int i;
        for (i = 0; i < p->count; i++) {
            recs[i].f4 = (recs[i].f4 & ~0xc00) | (value << 10);
        }
    }
}
