// FUN_overlay_12__02135750 @ 0x02135750 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135750 @ 0x02135750 (code 0x60, pool extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Accept confirmation when permitted or toggle choice on directional input.
 * Field identities remain provisional.
 */
extern int FUN_020bbf94(int);
extern void FUN_020c193c(int,int,int,int,int);
extern int FUN_020bbf6c(int);
extern int FUN_020c2e38(void);
int FUN_overlay_12__02135750(int *p) {if(FUN_020bbf6c(1)){if(!FUN_020c2e38()){FUN_020c193c(0,0,0,0,-1);return 1;}}else if(FUN_020bbf94(64)||FUN_020bbf94(128)){p[5]^=1;FUN_020c193c(0,2,0,0,-1);}return 0;}
