// flags: -O4,p -noThumb
typedef struct { unsigned int start, end; } Range;
typedef struct Node { unsigned int f0, size, f8; struct Node *next; } Node;
extern Node *FUN_02011c9c(unsigned int, Node *);
extern unsigned int FUN_02011cf4(Range *, unsigned int);
extern unsigned int FUN_02011cc4(unsigned int, unsigned int, Node *);
unsigned int FUN_02012078(unsigned int list, const Range *input) {
    Range range;
    Node *node;
    Node *previous = 0;
    unsigned int block;
    range = *input;
    for (node = *(Node **)list; node != 0; node = node->next) {
        if ((unsigned int)node < input->start) {
            previous = node;
            continue;
        }
        if ((unsigned int)node == input->end) {
            range.end = node->size + (unsigned int)(node + 1);
            FUN_02011c9c(list, node);
        }
        break;
    }
    if (previous != 0) { unsigned int e = previous->size + (unsigned int)(previous + 1); if (e == input->start) { range.start = (unsigned int)previous; previous = FUN_02011c9c(list, previous); } }
    if (range.end - range.start < 16) return 0;
    block = FUN_02011cf4(&range, 0x4652);
    FUN_02011cc4(list, block, previous);
    return 1;
}
