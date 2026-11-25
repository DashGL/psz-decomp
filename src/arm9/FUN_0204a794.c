// flags: -O4,s
//cpp
extern "C" {
extern char *DAT_02108c84;
extern short DAT_020ed83c[];
extern void FUN_0204ac70(void *);
extern void FUN_0204a5d0(void *, void *);
extern void FUN_0204adbc(void *);
extern void FUN_020ba8ac(void *);
extern void *FUN_020ba894(unsigned int);
}

struct Node {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
    char pad04[0xc];
    Node *next;
    char pad14[0xcc];
    int type;
};

struct Pending {
    Node *item;
    Pending *next;
};

struct S {
    int f00;
    Node *head;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    unsigned int arr1[10];
    unsigned int arr2[10];
};

extern "C" void FUN_0204a794(S *s) {
    char *manager = DAT_02108c84;
    if (manager) {
        char *o = ((char **)(manager + 0x40))[*(unsigned int *)(manager + 0x64)];
        if (o) {
            int angle = (unsigned short)(0x10000 - *(unsigned short *)(o + 0x80));
            angle >>= 4;
            s->f08 = DAT_020ed83c[angle * 2];
            s->f0a = DAT_020ed83c[angle * 2 + 1];
            angle = *(unsigned short *)(o + 0x82) >> 4;
            s->f0c = DAT_020ed83c[angle * 2];
            s->f0e = DAT_020ed83c[angle * 2 + 1];
        }
    }
    FUN_0204ac70(s);
    Pending *pending = 0;
    Node *node = s->head;
    while (node) {
        if (node->v5()) {
            Node *item = node;
            Node *next = node->next;
            if (node != next) {
                node = next;
            } else {
                node = next->next;
            }
            if (item->type != 3) {
                FUN_0204a5d0(s, item);
                if (item) {
                    FUN_0204adbc(item);
                }
            } else {
                Pending *p = (Pending *)FUN_020ba894(8);
                if (p) {
                    p->item = item;
                    p->next = pending;
                    pending = p;
                }
            }
        } else {
            node = node->next;
            if ((unsigned int)node & 0xf) {
                node = 0;
            }
        }
    }
    while (pending) {
        Pending *p = pending;
        Node *item = p->item;
        pending = p->next;
        if (p) {
            FUN_020ba8ac(p);
        }
        FUN_0204a5d0(s, item);
        if (item) {
            FUN_0204adbc(item);
        }
    }
    for (int i = 0; i < 10; i++) {
        s->arr2[i] = s->arr1[i];
        s->arr1[i] = ~0u;
    }
}
