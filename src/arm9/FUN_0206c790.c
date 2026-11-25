// FUN_0206c790 @ 0x0206c790 (0x54, arm) - ported from FUN_020339ec [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef int s32;

struct OutStream {
    s32 remaining;
    char *cursor;
};

void FUN_0206c790(struct OutStream *s, char c, unsigned n) {
    if ((s32)n > 0) {
        unsigned i;
        unsigned m = s->remaining;
        if (m > n) {
            m = n;
        }
        for (i = 0; i < m; i++) {
            s->cursor[i] = c;
        }
        s->remaining -= m;
        s->cursor += n;
    }
}
