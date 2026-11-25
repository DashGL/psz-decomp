// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,p -noThumb

struct Node2FCB8 {
    int f0;
    int id;
    struct Node2FCB8 *prev;
    struct Node2FCB8 *next;
};

struct List2FCB8 {
    int count;
    struct Node2FCB8 *head;
    struct Node2FCB8 *tail;
};

struct Base2FCB8 {
    unsigned char pad[0x2270];
    struct List2FCB8 *list;
    unsigned int size;
};

extern struct Base2FCB8 *FUN_0202e424(void);

void FUN_0202fcb8(struct Node2FCB8 *node) {
    struct Base2FCB8 *base = FUN_0202e424();
    struct List2FCB8 *list = base->list;
    struct Node2FCB8 *cur;

    if (node == 0 || list == 0) {
        return;
    }
    if (base->size <= 0xc) {
        return;
    }
    for (cur = list->head; cur != 0; cur = cur->next) {
        if (cur == node) {
            if (cur->prev != 0) {
                cur->prev->next = cur->next;
            } else {
                list->head = cur->next;
            }
            if (cur->next != 0) {
                cur->next->prev = cur->prev;
            } else {
                list->tail = cur->prev;
            }
            break;
        }
    }
    node->next = 0;
    node->prev = list->tail;
    list->tail = node;
    if (node->prev != 0) {
        node->prev->next = node;
    } else {
        list->head = node;
    }
    if (cur == 0) {
        node->id = list->count;
        list->count++;
    }
}
