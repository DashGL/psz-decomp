// version: 1.2/sp4
// flags: -O4,p -noThumb
typedef struct Node {
    unsigned int pad[4];
    struct Node *next;
} Node;

int FUN_02018c78(Node **head, Node *target) {
    Node *p = *head;
    Node *n;
    if (p == 0) {
        return 0;
    }
    if (p == target) {
        *head = p->next;
        target->next = 0;
        return 1;
    }
    n = p->next;
    while (n != 0) {
        if (n == target) {
            p->next = n->next;
            n->next = 0;
            return 1;
        }
        p = n;
        n = n->next;
    }
    return 0;
}
