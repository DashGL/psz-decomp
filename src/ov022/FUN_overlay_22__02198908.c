// FUN_overlay_22__02198908 @ 0x02198908 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198908 @ 0x02198908 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Change flagged grid slots to state two when the controller is active.
 * Field identities remain provisional.
 */
extern int FUN_overlay_22__021986c8(void *,int);extern int FUN_overlay_22__02198694(void *,int,int,int);void FUN_overlay_22__02198908(unsigned char *p,signed char *flags) {int i;if(*(signed char *)(p+308)==1)for(i=0;i<9;i++)if(flags[i]&&*(int *)(p+92+24*i)!=2){FUN_overlay_22__021986c8(p,i);FUN_overlay_22__02198694(p,i,2,0);}}
