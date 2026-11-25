// FUN_02071948 @ 0x02071948 (0x22, thumb) - ported from FUN_0204bbb8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_02071948 @ 0x0204bbb8, Thumb, true 0x22 (recorded 0x24 spans the
 * 0000 inter-function pad halfword). Typed-slot default init, called by
 * banked FUN_0204bd64 (Slot stride 0x20 layout: type/data[4]/life/tail).
 * Stores land in the target's descending order. Scan 0920: 0.04 hits/s. */
typedef struct { int type; unsigned int data[4]; int life; short f18; short f1a; short f1c; } Slot;

void FUN_02071948(Slot *s)
{
    s->type = -1;
    s->life = 0x1e;
    s->data[3] = 0;
    s->data[2] = 0;
    s->data[1] = 0;
    s->data[0] = 0;
    s->f1a = 0;
    s->f18 = s->f1a;
    s->f1c = 0x19;
}
