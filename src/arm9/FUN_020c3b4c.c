// flags: -O4,s
typedef struct Node { unsigned int base, used, size, reserved; struct Node *next, *prev; unsigned int active, bank; } Node;
typedef struct Pool { Node *head[3]; Node nodes[3][8]; } Pool;
Node *FUN_020c3b4c(Pool *self, int bank, unsigned int size, unsigned int reserved) {
    Node *node;
    int i;
    if (bank < 0 || bank >= 3) return 0;
    node = 0;
    for (i = 0; i < 8; i++) {
        if (!self->nodes[bank][i].active) {
            node = &self->nodes[bank][i];
            node->active = 1;
            node->bank = bank;
            break;
        }
    }
    if (!node) return 0;
    if (bank < 0 || bank >= 3) bank = 2;
    if (!self->head[bank]) self->head[bank] = node;
    size = (size + 31) & ~31u;
    reserved = (reserved + 31) & ~31u;
    node->base = self->head[bank]->base + self->head[bank]->size;
    node->used = 0;
    node->size = size;
    node->reserved = reserved;
    self->head[bank]->next = node;
    node->prev = self->head[bank];
    node->next = 0;
    self->head[bank] = node;
    return node;
}
