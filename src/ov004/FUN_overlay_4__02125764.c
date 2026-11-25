// flags: -O4,s
typedef struct { unsigned int a, b, c, d, e; } Record;
void *FUN_overlay_4__02125764(Record *p, const Record *record) {
    typedef struct { unsigned int a, b, c, d; } Quad; *(Quad *)p = *(const Quad *)record; p->e = record->e; return p;
}
