// FUN_0206727c @ 0x0206727c (0x3c, arm) - ported from FUN_0202d774 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0206727c @ 0x0202d774 (0x3c, ARM) — self-emptying sub-list teardown.
 * The record lives at list+0x88 — the guard, the pop-arg add and the loop
 * re-read all use the +0x88 field (guard: ldr r0,[r5,#0x88]; loop:
 * add r0,r5,#0x88 → pop → re-read ldr r0,[r5,#0x88]).
 * FUN_02066400(list+0x88) pops the head (1-arg, own body pops [head],
 * relinks [head->0x10] as new head with twin fixes at +0x14/+0x4), zeroes
 * the popped node's +0xc / +0x8, then FUN_02066a2c(node) — 1-arg teardown,
 * banked at 0x0202d02c — until the sub-list head reads 0. Single
 * conditional exit (popeq), rule F3 flat.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 *FUN_02066400(u32 *list);
extern void FUN_02066a2c(u32 *node);

void FUN_0206727c(u32 *list)
{
    if (*(u32 *)((u8 *)list + 0x88) != 0)
    {
        do
        {
            u32 *node = FUN_02066400((u32 *)((u8 *)list + 0x88));
            *(u32 *)((u8 *)node + 0xc) = 0;
            *(u32 *)((u8 *)node + 0x8) = 0;
            FUN_02066a2c(node);
        } while (*(u32 *)((u8 *)list + 0x88) != 0);
    }
}
