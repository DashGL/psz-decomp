// FUN_overlay_18__0211f920 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_18__0211f920 @ 0x0211f920 (code 0x10, pool extent 0x14, thumb)
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Read bounded global pointer table.
 * Field identities remain provisional.
 */
extern void * D_021565a0[];
void *FUN_overlay_18__0211f920(unsigned int index) {if(index>=32)return 0;return D_021565a0[index];}
