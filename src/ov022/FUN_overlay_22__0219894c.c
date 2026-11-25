// FUN_overlay_22__0219894c @ 0x0219894c (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219894c @ 0x0219894c (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Emit feedback and replace state-three grid slots before clearing the active controller flag.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219addc(void *,int);extern int FUN_overlay_22__021986c8(void *,int);extern int FUN_overlay_22__02198694(void *,int,int,int);void FUN_overlay_22__0219894c(unsigned char *p,signed char *states) {int i;if(*(signed char *)(p+308)==1){FUN_overlay_22__0219addc(p,22);for(i=0;i<9;i++)if(states[i]==3){FUN_overlay_22__021986c8(p,i);FUN_overlay_22__02198694(p,i,states[i],0);}p[308]=0;}}
