// FUN_0206c760 @ 0x0206c760 (0x30, arm) - ported from FUN_020339bc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef int s32;

struct OutStream {
    s32 remaining;
    char *cursor;
};

void FUN_0206c760(struct OutStream *s, char c) {
    if (s->remaining != 0) {
        *s->cursor = c;
        s->remaining--;
    }
    s->cursor++;
}
