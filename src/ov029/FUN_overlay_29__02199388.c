// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_29__02199388 @ 0x02199388 (code 0x2a, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table, clear shared selected owner, destroy base and free receiver.
 * Field identities remain provisional.
 */
extern int D_0219bd5c;
extern void *FUN_02035518(void *);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_29__02199388(unsigned int *p) {p[0]=0x0219bd00;if(p[53]==1)D_0219bd5c=-1;FUN_02035518(p);FUN_020ba8ac(p);return p;}
