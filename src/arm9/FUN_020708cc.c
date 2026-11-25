// FUN_020708cc @ 0x020708cc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_020708cc @ 0x020708cc (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store option byte at +148 and create callback task with receiver and full option arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020708cc.txt.
 */
extern void FUN_0207096c(void *,unsigned int);
extern void *FUN_02050018(int,void (*)(void *,unsigned int),void *,unsigned int);
void *FUN_020708cc(char *self,unsigned int option) {
    self[0x148]=option; return FUN_02050018(1,FUN_0207096c,self,option);
}
