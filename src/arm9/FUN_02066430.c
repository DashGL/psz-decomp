// flags: -O4,p -noThumb
typedef struct Node {
    unsigned char pad0[0x68];
    struct Node *next;
    unsigned int pad6c;
    unsigned int key;
} Node;
typedef struct {
    unsigned char pad[0x2c];
    Node *head;
} Global;
extern Global DAT_0211817c;
void FUN_02066430(Node *node) {
    Node *p = DAT_0211817c.head;
    Node *prev = 0;
    while (p && p->key < node->key) {
        prev = p;
        p = p->next;
    }
    if (prev == 0) {
        node->next = DAT_0211817c.head;
        DAT_0211817c.head = node;
    } else {
        node->next = prev->next;
        prev->next = node;
    }
}
