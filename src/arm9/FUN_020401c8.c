// FUN_020401c8 @ 0x020401c8 (0x3a, thumb) - ported from FUN_0205c434 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020401c8 @ 0x0205c434 (0x3a, Thumb), verified dsi/1.1.
 * Looks up a keyed record in one of two object tables. Rejects signed indices outside [0,2), traverses a signed count of 20-byte records, and compares the pointed-to key using FUN_02003f38 with limit 8. Returns the record or null. The helper remains external; this is application table selection and traversal.
 * 2026-10-15: unchanged recovered body matches with -O4,s; default -O4,p
 * caused the previously recorded compiler residual. Full words and relocations pass.
 * True extent checked against ROM return/pool boundaries; trailing inventory
 * padding is excluded when present. Gameplay has not been tested.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
extern s32 FUN_02003f38(u8 *a, u8 *b, u32 n);

u8 *FUN_020401c8(u32 *self, u8 *key, int idx) {
    u32 *tbl;
    u32 *h;
    u32 *rec;
    s32 count;
    s32 i;
    if (idx < 0) {
        goto reject;
    }
    if (idx >= 2) {
        goto reject;
    }
    tbl = (u32 *)self[8];
    h = *(u32 **)((u8 *)tbl + idx * 8 + 0xc);
    i = 0;
    rec = (u32 *)h[2];
    count = (s32)h[3];
    while (i < count) {
        if (FUN_02003f38((u8 *)rec[0], key, 8) == 0) {
            return (u8 *)rec;
        }
        i++;
        rec += 5;
    }
reject:
    return 0;
}
