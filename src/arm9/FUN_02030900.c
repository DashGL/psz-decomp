// FUN_02030900 @ 0x02030900 (0x18, thumb) - ported from FUN_020977e8 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

struct Pair {
    u32 a;
    u32 b;
};

extern void FUN_020ba8b4(void *a0);

u32 FUN_02030900(struct Pair *obj)
{
    if (obj->a != 0) {
        FUN_020ba8b4((void *)obj->a);
        obj->a = 0;
    }
    obj->b = 0;
    return 0;
}
