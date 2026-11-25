// flags: -O4,p
typedef struct Node {
    struct Node *prev;
    struct Node *next;
    unsigned short start;
    unsigned short count;
} Node;

typedef struct Bank {
    unsigned char pad[0x180];
    Node head;
    Node tail;
    unsigned int pad2;
    void *pool;
} Bank;

extern Bank *DAT_0213e92c;
extern Node *FUN_overlay_15__02135bd0(void *);
extern unsigned int FUN_02065e30(unsigned int);
extern void FUN_02065e00(unsigned int);
extern void FUN_02068728(void);
extern void FUN_overlay_15__02136d48(Node *, Node *);

Node *FUN_overlay_15__02136f40(int bank, int size, int forward, unsigned int *out) {
    Node *node = FUN_overlay_15__02135bd0(DAT_0213e92c[bank].pool);
    Node *cur;
    unsigned int irq;
    int units = ((size + 3) & ~3) >> 2;
    node->count = units;
    irq = FUN_02065e30(1);
    if (forward) {
        for (cur = &DAT_0213e92c[bank].head; cur != &DAT_0213e92c[bank].tail; cur = cur->next) {
            Node *next = cur->next;
            int pos = cur->start + cur->count;
            if (pos + units <= next->start) {
                node->start = pos;
                FUN_overlay_15__02136d48(next, node);
                break;
            }
        }
        if (cur == &DAT_0213e92c[bank].tail) {
            FUN_02068728();
        }
    } else {
        for (cur = &DAT_0213e92c[bank].tail; cur != &DAT_0213e92c[bank].head; cur = cur->prev) {
            Node *prev = cur->prev;
            int pos = cur->start - units;
            if (pos >= prev->start + prev->count) {
                node->start = pos;
                FUN_overlay_15__02136d48(cur, node);
                break;
            }
        }
        if (cur == &DAT_0213e92c[bank].head) {
            FUN_02068728();
        }
    }
    *out = node->start;
    FUN_02065e00(irq);
    return node;
}