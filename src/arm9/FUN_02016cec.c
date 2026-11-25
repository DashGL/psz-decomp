// FUN_02016cec @ 0x02016cec (0x48, arm) - ported from FUN_0201c5c0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02016cec @ 0x0201c5c0 (0x48, ARM), verified dsi/1.1. */
typedef unsigned short u16;
typedef struct Node {
    u16 lo;
    u16 hi;
    int pad;
    struct Node *next;
} Node;
extern int FUN_02016c00(Node *, u16);

int FUN_02016cec(int *a0, u16 a1) {
    for (Node *p = *(Node **)(*a0 + 0x10); p != 0; p = p->next) {
        if (p->lo <= a1 && a1 <= p->hi) {
            return FUN_02016c00(p, a1);
        }
    }
    return 0xffff;
}
