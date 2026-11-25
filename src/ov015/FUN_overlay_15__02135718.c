// flags: -O4,p
typedef struct Node { struct Node *prev, *next; unsigned int start; unsigned char count; } Node;
typedef struct {
    unsigned char pad[0x200];
    Node head;
    Node tail;
    void *pad2;
    void *pool;
} Bank;
extern Bank *DAT_overlay_15__0213e8f0;
extern Node *FUN_overlay_15__02135bd0(void *);
#pragma thumb off
extern unsigned int FUN_02065e30(unsigned int);
extern void FUN_02065e00(unsigned int);
extern void FUN_02068728(void);
#pragma thumb on
extern void FUN_overlay_15__02136d48(Node *, Node *);
Node *FUN_overlay_15__02135718(unsigned int bank, unsigned int count, int forward)
{
    Node *node = FUN_overlay_15__02135bd0(DAT_overlay_15__0213e8f0[bank].pool);
    unsigned int irq = FUN_02065e30(1);
    Node *current, *adjacent;
    unsigned int pos;
    if (forward) {
        for (current = &DAT_overlay_15__0213e8f0[bank].head; current != &DAT_overlay_15__0213e8f0[bank].tail; current = adjacent) {
            adjacent = current->next;
            pos = current->start + ((unsigned int)current->count << 3);
            if (pos + (count << 3) <= adjacent->start) {
                node->start = pos;
                FUN_overlay_15__02136d48(adjacent, node);
                break;
            }
        }
        if (current == &DAT_overlay_15__0213e8f0[bank].tail) FUN_02068728();
    } else {
        for (current = &DAT_overlay_15__0213e8f0[bank].tail; current != &DAT_overlay_15__0213e8f0[bank].head; current = adjacent) {
            adjacent = current->prev;
            pos = current->start - (count << 3);
            if (pos >= adjacent->start + ((unsigned int)adjacent->count << 3)) {
                node->start = pos;
                FUN_overlay_15__02136d48(current, node);
                break;
            }
        }
        if (current == &DAT_overlay_15__0213e8f0[bank].head) FUN_02068728();
    }
    FUN_02065e00(irq);
    node->count = count;
    return node;
}
