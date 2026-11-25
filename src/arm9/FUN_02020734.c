// flags: -O4,p -noThumb
typedef struct Node {
    unsigned int a, b;
    struct Node *prev;
    struct Node *next;
} Node;

Node *FUN_02020734(Node *base, unsigned int count) {
    unsigned int i;
    for (i = 0; i < count - 1; i++) {
        base[i].next = &base[i + 1];
        base[i + 1].prev = &base[i];
    }
    base[0].prev = 0;
    *(Node **)((char *)(base + count) - 4) = 0;
    return base;
}
