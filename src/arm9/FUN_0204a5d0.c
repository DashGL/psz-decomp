// flags: -O4,s
typedef struct Node { unsigned int pad[3]; struct Node *prev, *next; } Node;
int FUN_0204a5d0(Node **self, Node *node) {
    int removed = 0;
    if (node) {
        Node *scan, *head;
        head = self[1];
        scan = head;
        while (scan != node && scan) scan = scan->next;
        if (scan) {
            if (node == head) {
                self[1] = head->next;
                if (self[1]) self[1]->prev = 0;
            } else {
                if (node->next) node->next->prev = node->prev;
                if (node->prev) node->prev->next = node->next;
            }
            removed = 1;
        }
    }
    return removed;
}
