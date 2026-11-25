// FUN_0206fd64 @ 0x0206fd64 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206fd64 @ 0x0206fd64
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When guards clear and action11 succeeds, clear flags1/4, reset action and publish state0.
 * Evidence: scratch/coverage-root/batch15/0206fd64.txt.
 */
extern int FUN_0203b41c(void *),FUN_020390f4(void *),FUN_02039108(void *,int,unsigned int,int),FUN_020391a0(void *,int);
void FUN_0206fd64(unsigned char *self){if(!FUN_0203b41c(self) && !FUN_020390f4(self)){if(FUN_02039108(self,11,*(unsigned int *)(self+0xd8),0)){*(unsigned int *)(self+0xf8)&=~1u;*(unsigned int *)(self+0xf8)&=~4u;FUN_020391a0(self,0);*(unsigned int *)(self+0x240)=0;}}}
