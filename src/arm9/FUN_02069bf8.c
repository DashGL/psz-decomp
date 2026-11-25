// flags: -O4,s -noThumb
typedef struct Node {
    struct Node *next;
} Node;
typedef struct {
    unsigned int f00;
    unsigned int f04;
    Node *head;
    Node *tail;
} State;
extern State DAT_02118600;
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int);

void FUN_02069bf8(Node *cmd) {
    unsigned int saved = FUN_020683d4();
    if (DAT_02118600.tail == 0) {
        DAT_02118600.head = cmd;
        DAT_02118600.tail = cmd;
    } else {
        DAT_02118600.tail->next = cmd;
        DAT_02118600.tail = cmd;
    }
    cmd->next = 0;
    FUN_020683e8(saved);
}
