// FUN_overlay_3__0211ed68 @ 0x0211ed68 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_3__0211ed68 @ 0x0211ed68 (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 3 reconstruction from extracted module bytes, 2026-11-04.
 * Clear optional display and draw selected resource text when handle is valid.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *,int,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_3__0211ed68(int *p,int index) {void *manager,*text;FUN_020c38f0((void *)p[10],0);manager=FUN_0208f068();if(manager&&p[11]!=-1){text=FUN_0208efa8(manager,p[11],0,index);if(p[10])FUN_020c3788((void *)p[10],text,128,70,2);}}
