// FUN_overlay_4__02129368 @ 0x02129368 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__02129368 @ 0x02129368 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Clear display and load selected shared resource text.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern int FUN_02077d98(void *);
extern void *FUN_0208efa8(void *,int,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_4__02129368(void **p) {void *manager,*text;FUN_020c38f0(p[1],0);manager=FUN_0208f068();if(manager){int handle=FUN_02077d98(FUN_02077930());text=FUN_0208efa8(manager,handle,0,18);FUN_020c3788(p[1],text,0,0,2);}}
