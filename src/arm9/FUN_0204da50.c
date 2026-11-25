// FUN_0204da50 @ 0x0204da50 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204da50 @ 0x0204da50 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/0204da50.txt.
 */
extern void FUN_02041510(void *);extern void FUN_02035408(void *,int,int,int);
void *FUN_0204da50(char *s){FUN_02041510(s);*(int *)(s+16)=-1;*(int *)(s+20)=-1;*(int *)(s+24)=4096;*(int *)(s+28)=0;FUN_02035408(s+32,0,0,0);FUN_02035408(s+44,4096,4096,4096);*(short *)(s+56)=0;*(short *)(s+58)=0;*(short *)(s+60)=0;*(short *)(s+62)=0;*(int *)(s+64)=-1;*(int *)(s+68)=-1;*(int *)(s+72)=-1;*(int *)(s+76)=-1;*(int *)(s+80)=0;*(unsigned int *)(s+28)|=2;return s;}
