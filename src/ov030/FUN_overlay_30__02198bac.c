// FUN_overlay_30__02198bac @ 0x02198bac (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_30__02198bac @ 0x02198bac (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation two, update placement and initialize random count and timer.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_overlay_30__02198d68(void *);
extern int FUN_02035b60(int);
void FUN_overlay_30__02198bac(unsigned int *p) {FUN_02040c0c((void *)p[1],0,2,4096,0);FUN_overlay_30__02198d68(p);p[6]=FUN_02035b60(2)+1;p[7]=*(unsigned int *)0x020fc988;}
