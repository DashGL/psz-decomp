// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_31__021998c8 @ 0x021998c8 (code 0x1e, pool extent 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke operation with module-table selection and embedded vector.
 * Field identities remain provisional.
 */
extern char G_0219C59C[];
extern void FUN_02037214(void *,unsigned int,unsigned int,void *,unsigned int);
void FUN_overlay_31__021998c8(unsigned int *p) { FUN_02037214(p,28,((unsigned int *)G_0219C59C)[p[54]],p+14,1); }
