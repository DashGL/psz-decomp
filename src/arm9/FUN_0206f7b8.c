// FUN_0206f7b8 @ 0x0206f7b8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206f7b8 @ 0x0206f7b8
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Conditionally start action and publish state only on success.
 * Evidence: scratch/coverage-root/batch12/0206f7b8.txt.
 */
extern int FUN_020390f4(void *);
extern int FUN_02039140(void *,int,unsigned int,int);
void FUN_0206f7b8(unsigned char *self){if(!FUN_020390f4(self)){if(FUN_02039140(self,4,*(unsigned int *)(self+0xd8),0))*(unsigned int *)(self+0x240)=1;}}
