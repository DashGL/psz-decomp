// FUN_overlay_12__02130000 @ 0x02130000 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02130000 @ 0x02130000 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Choose descriptor vertical coordinate from two state fields.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_12__02130000(int *p) {int t[4];FUN_02071d0c(t);FUN_02090b44(t);t[2]=0;t[3]=(p[17]==1&&p[18]==1)?0xc5000:0x5000;*(short *)t=3;FUN_020c32b4(t,FUN_overlay_12__02131ad0(4));}
