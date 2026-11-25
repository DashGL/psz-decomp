// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p

struct NodeCBA44 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    struct NodeCBA44 *next;
};

struct InnerCBA44 {
    unsigned char pad[0x5d8];
    struct NodeCBA44 *head;
    struct NodeCBA44 *tail;
};

struct SelfCBA44 {
    struct InnerCBA44 *inner;
};

extern void FUN_020cb890(struct SelfCBA44 *, struct NodeCBA44 *);

int FUN_020cba44(struct SelfCBA44 *self, int target) {
    struct InnerCBA44 *inner = self->inner;
    if (target != 0) {
        struct NodeCBA44 *prev = 0;
        struct NodeCBA44 *head = inner->head;
        struct NodeCBA44 *tail = inner->tail;
        struct NodeCBA44 *cur;
        inner->head = 0;
        inner->tail = 0;
        cur = head;
        while (cur != 0) {
            struct NodeCBA44 *next = cur->next;
            if (cur->f10 == target || cur->fc == 1) {
                if (prev != 0) {
                    prev->next = next;
                } else {
                    head = next;
                }
                if (tail == cur) {
                    tail = prev;
                }
                FUN_020cb890(self, cur);
            } else {
                prev = cur;
            }
            cur = next;
        }
        if (inner->head != 0) {
            inner->tail->next = head;
            inner->tail = tail;
        } else {
            inner->head = head;
            inner->tail = tail;
        }
        return 0;
    }
    while (inner->head != 0) {
        struct NodeCBA44 *cur = inner->head;
        inner->head = 0;
        inner->tail = 0;
        while (cur != 0) {
            struct NodeCBA44 *next = cur->next;
            FUN_020cb890(self, cur);
            cur = next;
        }
    }
    return 0;
}
