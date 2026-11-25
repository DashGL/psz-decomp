// FUN_overlay_4__021268c0 @ 0x021268c0 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__021268c0 @ 0x021268c0 (code 0x4e, pool extent 0x4e, thumb)
// check: vers=2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Handle button input by resetting manager values and setting local flag.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int,int,int,int,int);
extern void *FUN_02077930(void);
extern void FUN_02077e34(void *,int,int,int);
extern void *FUN_02072af0(void);
extern int FUN_02072c20(void *,int,int);
void FUN_overlay_4__021268c0(int *p) {if(FUN_020bbf6c(8)){FUN_020c193c(0,4,0,0,-1);FUN_02077e34(FUN_02077930(),0,0,0);FUN_02072c20(FUN_02072af0(),0,1);p[47]|=16;}}
