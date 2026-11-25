// FUN_0206e6f4 @ 0x0206e6f4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e6f4 @ 0x0206e6f4
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unlink secondary membership; no previous delegates indexed manager removal.
 * Evidence: scratch/coverage-root/batch12/0206e6f4.txt.
 */
extern void FUN_02034504(void *,void *,int);
void FUN_0206e6f4(unsigned char *self){unsigned char *prev=*(unsigned char **)(self+16);if(prev)*(void **)(prev+12)=*(void **)(self+12);else {void *manager=*(void **)0x02108c84;if(manager)FUN_02034504(manager,self,*(int *)(self+0xc8));}if(*(void **)(self+12))*(void **)(*(unsigned char **)(self+12)+16)=*(void **)(self+16);}
