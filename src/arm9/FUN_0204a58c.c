// flags: -O4,s
typedef struct Node { unsigned int pad[3]; struct Node *prev, *next; } Node;
int FUN_0204a58c(Node **self, Node *node) {
    int added = 0;
    if (node) {
        if (!self[1]) {
            while (node->prev) node = node->prev;
            self[1] = node;
        } else {
            Node *saved = node;
            while (node->next) node = node->next;
            node->next = self[1];
            self[1]->prev = node;
            node = saved;
            while (node->prev) node = node->prev;
            self[1] = node;
        }
        added = 1;
    }
    return added;
}
