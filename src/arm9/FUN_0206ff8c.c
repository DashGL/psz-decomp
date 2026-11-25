// FUN_0206ff8c @ 0x0206ff8c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206ff8c @ 0x0206ff8c
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Conditionally start action and publish state only on success.
 * Evidence: scratch/coverage-root/batch12/0206ff8c.txt.
 */
extern int FUN_020390f4(void *);
extern int FUN_02039140(void *,int,unsigned int,int);
void FUN_0206ff8c(unsigned char *self,unsigned int unused1,unsigned int unused2,int trigger){if(trigger==1 && !FUN_020390f4(self)){if(FUN_02039140(self,20,*(unsigned int *)(self+0xd8),4))*(unsigned int *)(self+0x240)=8;}}
