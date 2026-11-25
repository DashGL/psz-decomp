// FUN_0207a070 @ 0x0207a070 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch29-manifest.json; original draft retained for referenced provenance.
// FUN_0207a070 @ 0x0207a070 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build local descriptor/message, add global halfword and dispatch message.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a070.txt.
 */
extern void FUN_02030da8(void *,void *),FUN_02079c14(void *,void *,int),FUN_020bce3c(void *); void FUN_0207a070(void *self) { unsigned int storage[4]; char *global; FUN_02030da8(storage,self); FUN_02079c14(storage+1,storage,1); global=*(char **)0x02108c64; ((unsigned short *)storage)[6]=*(unsigned short *)(global+112); FUN_020bce3c(storage+1); }
