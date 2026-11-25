// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p
typedef struct Node {
    int f0, f4, f8;
    struct Node *next;
} Node;
typedef struct {
    char pad[0x40];
    Node *f40;
    Node *f44;
    Node *f48;
} List;
extern void FUN_020c7bec(Node *);
void FUN_020cf4f4(List *a, Node *b) {
    Node *cur, *next;
    if (a == 0 || b == 0 || a->f40 == 0) {
        return;
    }
    cur = a->f44;
    if (cur == a->f48 && cur == b) {
        next = b->next;
        a->f48 = next;
        a->f44 = next;
        a->f40 = next;
    } else if (cur == b) {
        next = cur->next;
        a->f44 = next;
        a->f40 = next;
    } else {
        for (next = cur->next; next != b; cur = next, next = next->next) {
            if (next == 0) {
                return;
            }
        }
        cur->next = b->next;
    }
    FUN_020c7bec(b);
}
