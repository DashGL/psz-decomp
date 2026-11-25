// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct {
    unsigned int a, b, c;
} Mask;
typedef struct {
    unsigned char pad[0x30];
    unsigned int flags;
} Shape;
typedef struct {
    unsigned int f00;
    Shape *shapes;
    int count;
    Mask mask;
} Data;
typedef struct {
    unsigned char pad[0xc];
    Data *data;
} Node;
typedef struct {
    Node *node;
    Pair *point;
    Shape *shape;
    unsigned char index;
    unsigned char pad[3];
} Hit;

extern Pair DAT_020f5bfc;
extern int FUN_020c04ac(Shape *, Pair *, Shape *, Pair *);
extern void FUN_020beb44(void *, Hit *, Hit *);

void FUN_020bea20(void *s, Node *a, Node *b) {
    Data *da = a->data;
    Mask *ma = &da->mask;
    Mask *mb = &b->data->mask;
    int passive;
    Shape *endA, *startB, *endB;
    Hit ha, hb;
    Pair pa, pb;
    int zx, zy;

    if (!(ma->b & mb->a)) {
        return;
    }
    passive = !((ma->a & mb->c) && (ma->c & mb->a));
    endA = da->shapes + da->count;
    ha.node = a;
    ha.point = &pa;
    ha.shape = da->shapes;
    ha.index = 0;

    startB = b->data->shapes;
    endB = startB + b->data->count;
    hb.node = b;
    hb.point = &pb;
    zx = DAT_020f5bfc.x;
    zy = DAT_020f5bfc.y;

    while (ha.shape < endA) {
        if ((!!(ha.shape->flags & 1)) == 0) {
            int current = (passive || (ha.shape->flags & 2)) ? 1 : 0;
            hb.index = 0;
            hb.shape = startB;
            while (hb.shape < endB) {
                if ((!!(hb.shape->flags & 1)) == 0) {
                    int b2 = !!(hb.shape->flags & 2);
                    if (current || b2 != 0) {
                        if (!FUN_020c04ac(ha.shape, 0, hb.shape, 0)) {
                            goto next_b;
                        }
                        pa.y = zy;
                        pa.x = zx;
                        pb.x = zx;
                        pb.y = zy;
                    } else {
                        if (!FUN_020c04ac(ha.shape, &pa, hb.shape, &pb)) {
                            goto next_b;
                        }
                    }
                    FUN_020beb44(s, &ha, &hb);
                }
            next_b:
                hb.shape++;
                hb.index++;
            }
        }
        ha.shape++;
        ha.index++;
    }
}
