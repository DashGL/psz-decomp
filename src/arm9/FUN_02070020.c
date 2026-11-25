// FUN_02070020 @ 0x02070020 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070020 @ 0x02070020 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Request state transition and set success fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070020.txt.
 */
extern int FUN_020390f4(void *),FUN_02039108(void *,int,unsigned int,int); void FUN_02070020(char *self) { if(!FUN_020390f4(self) && FUN_02039108(self,19,*(unsigned int *)(self+216),0)) { *(unsigned int *)(self+248)|=1; *(int *)(self+576)=20; } }
