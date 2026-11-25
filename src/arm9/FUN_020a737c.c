// FUN_020a737c @ 0x020a737c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a737c @ 0x020a737c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Schedule callback when child field present, else transition global state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a737c.txt.
 */
extern void FUN_020a7490(void *,void *),FUN_020a7360(void),FUN_020a521c(void); void FUN_020a737c(char *self) { void **child=*(void ***)(self+252); if(child[5]) { *(unsigned int *)(self+68)=0; FUN_020a7490(self,(void *)FUN_020a7360); } else FUN_020a521c(); }
