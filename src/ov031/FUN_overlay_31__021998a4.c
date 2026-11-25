// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_31__021998a4 @ 0x021998a4
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke five-argument operation with module-table entry selected by owner field.
 * Field identities remain provisional.
 */
extern void FUN_02037214(void *,unsigned int,unsigned int,void *,unsigned int);
extern unsigned int data_0219c590[];
void FUN_overlay_31__021998a4(unsigned int *p) { FUN_02037214(p,28,data_0219c590[p[54]],p+14,1); }
