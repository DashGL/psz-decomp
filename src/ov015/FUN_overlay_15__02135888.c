// flags: -O4,p
typedef struct {
    unsigned int a;
    unsigned int b;
} Rec;

typedef struct {
    unsigned int pad0;
    unsigned int pad4;
    Rec *records;
    unsigned char count;
} Obj;

void FUN_overlay_15__02135888(Obj *p, int index, unsigned int mode, unsigned int arg) {
    int i;
    Rec *records = p->records;
    if (index >= 0) {
        if (mode != 0x100 && mode != 0x300) {
            records[index].a = (records[index].a & 0xc1fffcff) | mode;
        } else {
            records[index].a = (records[index].a & 0xc1fffcff) | mode | (arg << 25);
        }
    } else {
        for (i = 0; i < p->count; i++) {
            if (mode != 0x100 && mode != 0x300) {
                records->a = (records->a & 0xc1fffcff) | mode;
            } else {
                records->a = (records->a & 0xc1fffcff) | mode | (arg << 25);
            }
            records++;
        }
    }
}
