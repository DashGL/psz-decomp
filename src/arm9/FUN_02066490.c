// flags: -O4,p -noThumb
struct Node { unsigned char pad[0x68]; struct Node *next; };
struct Mgr { unsigned char pad[0x2c]; struct Node *head; };
extern struct Mgr DAT_0211817c;
void FUN_02066490(struct Node *target) {
    struct Node *p = DAT_0211817c.head;
    struct Node *prev = 0;
    while (p && p != target) { prev = p; p = p->next; }
    if (!prev) { DAT_0211817c.head = target->next; }
    else { prev->next = target->next; }
}
