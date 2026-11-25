// FUN_overlay_22__02198890 @ 0x02198890 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198890 @ 0x02198890 (code 0x78, pool extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Build nine cell update codes and select replacement behavior at the timer threshold.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219894c(void *,signed char *);
extern void FUN_overlay_22__02198908(void *,signed char *);
void FUN_overlay_22__02198890(unsigned char *self,signed char *marked){signed char states[9];int i;if(*(signed char *)(self+308)!=1)return;for(i=0;i<9;i++)states[i]=0;
for(i=0;i<9;i++){if(*(int *)(self+92+24*i)==2)states[i]=5;else if(marked[i])states[i]=4;}
if(*(int *)(self+320)>=150){for(i=0;i<9;i++)if(states[i])states[i]=3;FUN_overlay_22__0219894c(self,states);}else FUN_overlay_22__02198908(self,states);}
