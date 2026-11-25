// FUN_overlay_4__02126910 @ 0x02126910 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__02126910 @ 0x02126910 (code 0x40, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Handle button input by feedback, manager transition and setting state bit.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int,int,int,int,int);
extern void *FUN_02072af0(void);
extern int FUN_02072c20(void *,int,int);
void FUN_overlay_4__02126910(int *p) {if(FUN_020bbf6c(2)){FUN_020c193c(0,1,0,0,-1);FUN_02072c20(FUN_02072af0(),1,1);p[47]|=16;}}
