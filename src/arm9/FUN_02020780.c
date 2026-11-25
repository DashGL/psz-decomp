// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
typedef struct N {
    unsigned int a, b;
    struct N *prev, *next;
} N;
int FUN_02020780(N **head, N **freehead, unsigned int a, unsigned int b) {
    N *n = *freehead;
    if (n != 0) {
        *freehead = n->next;
    }
    if (n != 0) {
        n->a = a;
        n->b = b;
        n->prev = 0;
        n->next = 0;
        if (*head != 0) {
            (*head)->prev = n;
        }
        n->next = *head;
        n->prev = 0;
        *head = n;
        return 1;
    }
    return 0;
}
