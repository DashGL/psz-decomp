// FUN_02016d34 @ 0x02016d34 (0x4c, arm) - ported from FUN_0201c608 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02016d34 @ 0x0201c608 (0x4c, ARM), verified 2.0/base. */
typedef unsigned short u16;
typedef struct Node {
    u16 lo;
    u16 hi;
    struct Node *next;
} Node;

int FUN_02016d34(int *a0, u16 a1) {
    for (Node *p = *(Node **)(*a0 + 0xc); p != 0; p = p->next) {
        if (p->lo <= a1 && a1 <= p->hi) {
            return (int)p + 8 + (a1 - p->lo) * 3;
        }
    }
    return *a0 + 4;
}
