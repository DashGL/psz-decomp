// FUN_020be58c @ 0x020be58c (0x34, thumb) - ported from FUN_020abb2c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
typedef struct { u32 word[9]; } Block;
typedef struct { u32 a, b, c; Block block; u32 tail; } Element;
extern Element *FUN_020beee4(int table, int handle, int index);
void FUN_020be58c(int table, int handle, int index, const Element *source)
{
    Element *dest = FUN_020beee4(table, handle, index);
    if (dest != 0) {
        dest->a = source->a;
        dest->b = source->b;
        dest->c = source->c;
        dest->block = source->block;
        dest->tail = source->tail;
    }
}
