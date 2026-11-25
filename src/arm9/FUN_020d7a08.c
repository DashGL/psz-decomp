// flags: -O4,p
struct Node {
    char pad[0x24];
    struct Node *next;
};
struct List {
    struct Node *head;
    struct Node *tail;
    int count;
};
int FUN_020d7a08(struct List *list, struct Node *target) {
    struct Node *p = list->head;
    struct Node *prev = 0;
    while (p != 0) {
        if (p == target) {
            if (prev != 0) {
                prev->next = p->next;
            }
            if (list->head == p) {
                list->head = p->next;
            }
            if (list->tail == p) {
                list->tail = prev;
            }
            list->count--;
            return 1;
        }
        prev = p;
        p = p->next;
    }
    return 0;
}
