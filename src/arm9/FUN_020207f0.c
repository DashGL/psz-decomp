// flags: -O4,p -noThumb
typedef struct Node { unsigned int start, size; struct Node *prev, *next; } Node;
unsigned int FUN_020207f0(Node **head, Node **freehead, unsigned int *out, unsigned int size, unsigned int alignment) {
    unsigned int start; unsigned int used; unsigned int pad; Node *found; Node *p;
    p = *head;
    found = 0;
    while (p != 0) {
        if (alignment > 1) {
            start = (p->start + (alignment - 1)) & ~(alignment - 1);
            pad = start - p->start;
            used = size + pad;
        } else {
            start = p->start;
            pad = 0;
            used = size;
        }
        if (p->size >= used) { found = p; break; }
        p = p->next;
    }
    if (found == 0) goto fail;
    if (pad != 0) {
        Node *spare = *freehead;
        if (spare != 0) *freehead = spare->next;
        if (spare == 0) goto fail;
        spare->start = found->start; spare->size = pad; spare->prev = 0; spare->next = 0;
        if (*head != 0) (*head)->prev = spare;
        spare->next = *head; spare->prev = 0; *head = spare;
    }
    found->size -= used; found->start += used;
    if (found->size == 0) {
        Node *next, *prev;
        prev = found->prev; next = found->next;
        if (prev != 0) prev->next = next; else *head = next;
        if (next != 0) next->prev = prev;
        if (*freehead != 0) (*freehead)->prev = found;
        found->next = *freehead; found->prev = 0; *freehead = found;
    }
    *out = start; return 1;
fail:
    *out = 0; return 0;
}
