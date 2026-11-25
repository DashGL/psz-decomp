// flags: -O4,p -noThumb
typedef struct Node {
    unsigned int start;
    unsigned int size;
    unsigned int f08;
    struct Node *next;
} Node;

extern int FUN_02020644(Node **list, void *free_list, unsigned int *range);

void FUN_02020930(Node **list, void *free_list) {
    Node *node = *list;
    unsigned int range[2];
    while (node != 0) {
        range[0] = node->start;
        range[1] = node->start + node->size;
        if (FUN_02020644(list, free_list, range)) {
            node->start = range[0];
            node->size = range[1] - range[0];
            node = *list;
        } else {
            node = node->next;
        }
    }
}
