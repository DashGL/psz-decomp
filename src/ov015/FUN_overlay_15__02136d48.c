// FUN_overlay_15__02136d48 @ 0x02136d48 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136d48 @ 0x02136d48 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Insert node before receiver in doubly linked list while interrupt mask bit is disabled.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02065e30(unsigned int);
extern unsigned int FUN_02065e00(unsigned int);
void FUN_overlay_15__02136d48(unsigned int *p,unsigned int *node) {unsigned int mask=FUN_02065e30(1);((unsigned int *)p[0])[1]=(unsigned int)node;node[0]=p[0];node[1]=(unsigned int)p;p[0]=(unsigned int)node;FUN_02065e00(mask);}
