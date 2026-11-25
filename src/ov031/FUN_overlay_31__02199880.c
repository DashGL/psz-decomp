// FUN_overlay_31__02199880 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_31__02199880 @ 0x02199880 (code 0x1e, pool extent 0x24, thumb)
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke five-argument operation with module-table entry selected by owner field.
 * Field identities remain provisional.
 */
extern unsigned int D_0219c5e4[];
extern void FUN_02037214(void *,unsigned int,unsigned int,void *,unsigned int);
void FUN_overlay_31__02199880(unsigned int *p) { FUN_02037214(p,28,D_0219c5e4[p[54]],p+14,1); }
