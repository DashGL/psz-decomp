// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets.
// FUN_overlay_12__02125708 @ 0x02125708 (code 0x16, pool extent 0x16, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return one of two words at +8/+c for signed index in range, otherwise -1.
 * Field identities and high-level API contracts remain provisional.
 */
struct S_ov12_25708 { unsigned int pad[2]; unsigned int a[2]; };
unsigned int FUN_overlay_12__02125708(struct S_ov12_25708 *self,int index) { if(index>=0 && index<2) return self->a[index]; return ~0u; }
