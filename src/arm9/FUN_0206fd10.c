// FUN_0206fd10 @ 0x0206fd10 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206fd10 @ 0x0206fd10
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If two guards are clear, launch action10 and set flags1/4 plus state14 after success.
 * Evidence: scratch/coverage-root/batch13/0206fd10.txt.
 */
extern int FUN_0203b41c(void *);
extern int FUN_020390f4(void *);
extern int FUN_02039140(void *,int,unsigned int,int);
void FUN_0206fd10(unsigned char *self){if(!FUN_0203b41c(self) && !FUN_020390f4(self)){if(FUN_02039140(self,10,*(unsigned int *)(self+0xd8),4)){*(unsigned int *)(self+0xf8)|=1;*(unsigned int *)(self+0xf8)|=4;*(unsigned int *)(self+0x240)=14;}}}
