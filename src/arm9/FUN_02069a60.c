// flags: -O4,p -noThumb
typedef struct Node { struct Node *next; } Node;
extern unsigned int DAT_02118600[];
extern Node *DAT_02118624[];
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int FUN_0206a210(void);
extern void FUN_02068444(unsigned int);
Node *FUN_02069a60(unsigned int flags) {
    unsigned int saved = FUN_020683d4();
    Node *head;
    Node *last;
    int idx;
    if (flags & 1) {
        while (DAT_02118600[1] == FUN_0206a210()) {
            FUN_020683e8(saved);
            FUN_02068444(100);
            saved = FUN_020683d4();
        }
    } else {
        if (DAT_02118600[1] == FUN_0206a210()) {
            FUN_020683e8(saved);
            return 0;
        }
    }
    idx = (int)DAT_02118600[5];
    head = DAT_02118624[idx];
    DAT_02118600[5] = (unsigned int)(idx + 1);
    if ((int)DAT_02118600[5] > 8) DAT_02118600[5] = 0;
    last = head;
    while (last->next != 0) last = last->next;
    if (DAT_02118600[4] != 0) ((Node *)DAT_02118600[4])->next = head;
    else DAT_02118600[0] = (unsigned int)head;
    DAT_02118600[4] = (unsigned int)last;
    DAT_02118600[7]--;
    DAT_02118600[1]++;
    FUN_020683e8(saved);
    return head;
}
