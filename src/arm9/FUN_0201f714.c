// FUN_0201f714 @ 0x0201f714 (0x44, arm) - ported from FUN_02024e50 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef int s32;

struct P { s32 f0; char pad[4]; u32 f8; };
struct S { u32 f0; char pad[0xc]; u32 f10; };

extern void FUN_0201f540(u32 a, u32 b, u32 c, void *self);

void FUN_0201f714(struct S *self, struct P *p, int c)
{
    FUN_0201f540(p->f8, (unsigned short)c, p->f0 >> 12, self);
    self->f10 = (self->f10 & ~0xc0000000u) | 0x40000000u;
    self->f0 |= 8;
}
