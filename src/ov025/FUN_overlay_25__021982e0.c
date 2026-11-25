// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_25__021982e0 @ 0x021982e0
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Forward base arguments, install dispatch and copy module default to extended field.
 * Field identities remain provisional.
 */
extern unsigned int data_0219abd8[];
extern void FUN_020352dc(void *,unsigned int,unsigned int);
void *FUN_overlay_25__021982e0(unsigned int *p,unsigned int a,unsigned int b) { FUN_020352dc(p,a,b); p[0]=0x0219abfc; p[53]=*data_0219abd8; return p; }
