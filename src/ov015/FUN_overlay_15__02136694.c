// FUN_overlay_15__02136694 @ 0x02136694 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136694 @ 0x02136694 (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate aligned shared heap storage while preserving interrupt mask.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02065e30(unsigned int);
extern unsigned int FUN_02065e00(unsigned int);
extern void *FUN_020121ac(void *,unsigned int,int);
extern void FUN_02068728(void);
void *FUN_overlay_15__02136694(unsigned int size,int alignment) {unsigned int mask=FUN_02065e30(1);void *p=FUN_020121ac(*(void **)0x0213e904,size,alignment);if(!p)FUN_02068728();FUN_02065e00(mask);return p;}
