// FUN_overlay_22__0219a638 @ 0x0219a638 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a638 @ 0x0219a638 (code 0x42, pool extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve one of four active entities with optional status filtering.
 * Field identities remain provisional.
 */
extern void *FUN_020352a4(void *,int);
extern void *FUN_02039200(void *);
extern int FUN_0203bf3c(void *);
extern int FUN_0203ae60(void *);
void *FUN_overlay_22__0219a638(int index,int filter) {void *p;if(index>=0&&index<4){p=FUN_020352a4(*(void **)0x02108cf4,index);if(p){p=FUN_02039200(p);if(p&&FUN_0203bf3c(p)==1&&(!filter||!FUN_0203ae60(p)))return p;}}return 0;}
