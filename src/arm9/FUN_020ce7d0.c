// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020ce764(void *, void *);

struct Node {
    char pad[0x20];
    struct Node *next;
};

void FUN_020ce7d0(char **p, struct Node *target) {
    char *base = *p;
    struct Node *prev = 0;
    struct Node *curr = *(struct Node **)(base + 0x5c4);
    while (curr != 0) {
        if (curr == target) {
            if (prev == 0) {
                *(struct Node **)(base + 0x5c4) = curr->next;
            } else {
                prev->next = target->next;
            }
            FUN_020ce764(p, target);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}
