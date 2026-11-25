// FUN_02044a98 @ 0x02044a98 (0xb0, thumb) - ported from FUN_02072f7c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef signed char s8;
typedef struct { u32 word[13]; } Record;
extern int FUN_020be450(void);
extern Record *FUN_020be584(int table, int handle, int index);
extern void FUN_020be58c(int table, int handle, int index, const Record *source);
extern void FUN_020be490(int table, int handle);
extern void FUN_020be4b4(int table, int handle);
void FUN_02044a98(void *state, u32 flags)
{
    Record local;
    int handle = *(int *)state;
    u32 blocked = 1;
    if ((*(u16 *)((char *)state + 0x1e) & 1) == 0)
        blocked = 0;
    if (blocked == 0 && (flags & 4) == 4) {
        Record *source = FUN_020be584(FUN_020be450(), handle, 0);
        if (source != 0) {
            local = *source;
            local.word[1] &= ~3u;
            if ((flags & 0xc) == 0xc)
                local.word[1] |= 1;
            if ((flags & 0x24) == 0x24)
                local.word[1] |= 2;
            FUN_020be58c(FUN_020be450(), handle, 0, &local);
        }
        FUN_020be490(FUN_020be450(), handle);
    } else {
        FUN_020be4b4(FUN_020be450(), handle);
    }
    if ((flags & 0x14) == 0x14)
        *(s8 *)((char *)state + 0x22) |= 1;
    else
        *(s8 *)((char *)state + 0x22) &= ~1;
}
