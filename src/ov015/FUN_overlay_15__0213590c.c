// flags: -O4,p
typedef struct {
    unsigned int a;
    unsigned short b;
    unsigned short c;
} SpriteRec;
typedef struct {
    unsigned int pad0;
    unsigned int pad4;
    SpriteRec *records;
    unsigned char count;
} Obj;
static inline void set_one(SpriteRec *r, unsigned int a, unsigned int b) {
    r->a = (r->a & 0xfffff3ff) | (a << 10);
    r->b = (r->b & 0xffff0fff) | (b << 12);
}
void FUN_overlay_15__0213590c(Obj *p, int index, unsigned int a, unsigned int b) {
    SpriteRec *records = p->records;
    if (index >= 0) {
        set_one(&records[index], a, b);
    } else {
        int i;
        for (i = 0; i < p->count; i++) {
            set_one(&records[i], a, b);
        }
    }
}
