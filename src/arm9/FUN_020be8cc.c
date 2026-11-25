//cpp
// flags: -O4,s
struct Pair {
    int x, y;
};

struct Shape {
    char pad[0x30];
    unsigned int flags;
};

struct Mask {
    unsigned int m0;
    unsigned int m1;
    unsigned int m2;
};

struct NodeData {
    int f00;
    Shape *shapes;
    int count;
    Mask mask;
};

struct Node {
    char pad[0x0c];
    NodeData *data;
};

struct Hit {
    Node *node;
    Pair *point;
    Shape *shape;
    unsigned char index;
    unsigned char pad[3];
};

extern "C" {
extern const Pair DAT_020f5bfc;
extern int FUN_020c04ac(void *, void *, void *, void *);
extern void FUN_020beb44(void *, void *, void *);
extern void FUN_020beb84(void *, void *, void *);
}

extern "C" void FUN_020be8cc(void *s, Node *a, Node *b) {
    Hit ha;
    Hit hb;
    Pair pa;
    Pair pb;
    NodeData *da = a->data;
    Mask *ma = &da->mask;
    Mask *mb = &b->data->mask;
    int passive = (!(ma->m0 & mb->m2) || !(mb->m0 & ma->m2)) ? 1 : 0;
    Shape *endA = da->shapes + da->count;
    ha.point = &pa;
    ha.node = a;
    ha.shape = da->shapes;
    ha.index = 0;

    NodeData *db = b->data;
    Shape *startB = db->shapes;
    Shape *endB = startB + db->count;
    hb.node = b;
    hb.point = &pb;

    while (ha.shape < endA) {
        unsigned int fa = ha.shape->flags;
        if (!((fa & 1) ? 1 : 0)) {
            int current = (passive || (fa & 2)) ? 1 : 0;
            hb.index = 0;
            hb.shape = startB;
            while (hb.shape < endB) {
                unsigned int fb = hb.shape->flags;
                if (!((fb & 1) ? 1 : 0)) {
                    int flagB = (fb & 2) ? 1 : 0;
                    if (current || flagB) {
                        if (!FUN_020c04ac(ha.shape, 0, hb.shape, 0)) {
                            goto next;
                        }
                        pa.x = DAT_020f5bfc.x;
                        pa.y = DAT_020f5bfc.y;
                        pb.x = DAT_020f5bfc.x;
                        pb.y = DAT_020f5bfc.y;
                    } else {
                        if (!FUN_020c04ac(ha.shape, &pa, hb.shape, &pb)) {
                            goto next;
                        }
                    }
                    if (!(ma->m0 & mb->m1)) {
                        FUN_020beb44(s, &ha, &hb);
                    } else if (!(mb->m0 & ma->m1)) {
                        FUN_020beb44(s, &hb, &ha);
                    } else {
                        FUN_020beb84(s, &ha, &hb);
                    }
                }
            next:
                hb.shape++;
                hb.index++;
            }
        }
        ha.shape++;
        ha.index++;
    }
}
