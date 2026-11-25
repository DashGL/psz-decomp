//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern "C" {
void FUN_0204adbc(void *);
void FUN_02045630(void);
void FUN_02045490(void);
void FUN_0204644c(void);
}
struct Node {
    virtual void m0();
    char pad0[0xc];
    Node *next;
    char pad1[0x34];
    int f48;
    char pad2[0x94];
    unsigned int fe0;
    unsigned int fe4;
};
extern "C" void FUN_0204a520(char *s) {
    Node *next = *(Node **)(s + 4);
    Node *p;
    while (next != 0) {
        p = next;
        next = next->next;
        p->m0();
        if (p->fe0 == 0 || p->fe0 == 1 || p->fe0 == 3) {
            if (((p->fe4 & 2) ? E1 : E0) == 0 || p->f48 > 0) {
                if (p != 0) {
                    FUN_0204adbc(p);
                }
            }
        }
    }
    FUN_02045630();
    FUN_02045490();
    FUN_0204644c();
}
