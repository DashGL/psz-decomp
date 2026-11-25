// flags: -O4,s -noThumb
typedef struct { unsigned int head; unsigned int pad[3]; unsigned int tail; } Q;
extern Q DAT_02118600;
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
unsigned int FUN_0206a014(void) {
    unsigned int saved = FUN_020683d4(), head = DAT_02118600.head, next;
    if (!head) {
        FUN_020683e8(saved);
        return 0;
    }
    next = *(unsigned int *)head;
    DAT_02118600.head = next;
    if (!next) DAT_02118600.tail = 0;
    FUN_020683e8(saved);
    return head;
}
