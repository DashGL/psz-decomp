// FUN_overlay_4__02120138 @ 0x02120138 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__02120138 @ 0x02120138 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Reset receiver handle, release three manager handles and clear final count.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,int *);
void FUN_overlay_4__02120138(int *p) {int i;p[1]=-1;for(i=0;i<3;i++)if(p[2+i]!=-1)FUN_020c2624(FUN_020c1fc8(),p+2+i);p[9]=0;}
