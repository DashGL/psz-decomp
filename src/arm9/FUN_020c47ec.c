// FUN_020c47ec @ 0x020c47ec (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c47ec @ 0x020c47ec
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reject existing singleton, allocate0x460, forward six constructor arguments and query singleton state.
 * Evidence: scratch/coverage-root/batch11/020c47ec.txt.
 */
extern void *FUN_020ba894(unsigned int);
extern void FUN_020c45bc(void *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
extern int FUN_020c4848(void);
int FUN_020c47ec(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f){void *self;if(*(void **)0x0211ceec)return 0;self=FUN_020ba894(0x460);if(self)FUN_020c45bc(self,a,b,c,d,e,f);return FUN_020c4848();}
