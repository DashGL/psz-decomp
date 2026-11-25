// FUN_0200f314 @ 0x0200f314 (0xc, arm) - ported from FUN_020299a4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f314 @ 0x020299a4 (0xc, ARM) — read a halfword field at offset +0xc
 * and return it biased down by one.
 *
 * Bytes: bc 00 d0 e1 / 01 00 40 e2 / 1e ff 2f e1
 *   ldrh r0, [r0, #0xc] ; sub r0, r0, #1 ; bx lr
 *
 * Semantics verified against the DISASSEMBLY, not the decompile. The decompile
 * says `*(ushort *)(param_1 + 0xc) - 1`; that agrees, and the ldrh pins the
 * access width as an unsigned halfword (a signed ldrsh would differ, and the
 * subtraction happens in 32-bit r0 after the zero-extension, so the bias is
 * applied to the widened value, not to a narrowed one). Arity is 1: the only
 * consumed register is the incoming r0 base and nothing is reloaded.
 *
 * The +0xc bias is a field of a record whose neighbouring function
 * FUN_020299b0 tail-calls through a veneer to 0x020146b4 with r1 = 0, and the
 * 0x10-byte function below it pushes {r3,r4,r5,lr} and works from r0 + 4 with
 * a 0xc step — the same record shape.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

int FUN_0200f314(u32 *p)
{
    return (int) *(u16 *)((u8 *) p + 0xc) - 1;
}
