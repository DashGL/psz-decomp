// FUN_overlay_12__02128f5c @ 0x02128f5c (0x86, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128f5c @ 0x02128f5c (code 0x86, pool extent 0x86, thumb)
// check: vers=2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Cycle bounded choices and return confirmation with feedback.
 * Field identities remain provisional.
 */
extern int FUN_020bbf94(int);
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int,int,int,int,int);
int FUN_overlay_12__02128f5c(int *p) {if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);p[3]--;}else if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);p[3]++;}if(p[3]>=4)p[3]=0;else if(p[3]<0)p[3]=3;if(FUN_020bbf6c(1)){FUN_020c193c(0,0,0,0,-1);return 1;}return 0;}
