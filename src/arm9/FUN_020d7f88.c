// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,s
typedef struct Node {
    char pad[0x15];
    unsigned char f15;
    short f16;
    int f18;
    unsigned int f1c;
} Node;
typedef struct Obj {
    int f0, f4;
    Node *f8;
    char pad[0x38];
    void (*f44)(struct Obj *, int, Node *, int);
    int f48;
} Obj;
extern unsigned int FUN_020c7824(void);
extern void FUN_020d79ec(Node **);
void FUN_020d7f88(Obj *a) {
    unsigned int now = FUN_020c7824();
    if (a->f8 != 0) {
        do {
            if (now <= a->f8->f1c + 2500) {
                break;
            }
            a->f8->f15 |= 0x10;
            a->f8->f1c = 2500;
            a->f8->f15 &= 0xd3;
            a->f44(a, 1, a->f8, a->f48);
            FUN_020d79ec(&a->f8);
        } while (a->f8 != 0);
    }
}
