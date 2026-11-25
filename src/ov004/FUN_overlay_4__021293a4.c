// FUN_overlay_4__021293a4 @ 0x021293a4 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__021293a4 @ 0x021293a4 (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Clear optional display and draw shared text resource nineteen.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern int FUN_02077d98(void *);
extern void *FUN_0208efa8(void *,int,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_4__021293a4(void **p) {void *manager,*text;if(p[1]){FUN_020c38f0(p[1],0);manager=FUN_0208f068();if(manager){int handle=FUN_02077d98(FUN_02077930());text=FUN_0208efa8(manager,handle,0,19);FUN_020c3788(p[1],text,0,0,2);}}}
