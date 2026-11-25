// FUN_020bdef0 @ 0x020bdef0 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020bdef0 @ 0x020bdef0 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Mark one to three indexed peer records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bdef0.txt.
 */
void FUN_020bdef0(char *self,int *indices,int count){if(*(void **)(self+3920) && indices && count>=1 && count<=3){int i;for(i=0;i<count;i++)(*(char **)(self+3920))[24*indices[i]+2]=1;}}
