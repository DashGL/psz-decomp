// FUN_02078f48 @ 0x02078f48 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_02078f48 @ 0x02078f48 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Replace one of two resource handles when manager exists.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078f48.txt.
 */
extern void FUN_02037d20(void *,unsigned int); extern unsigned short FUN_02037c88(void *,void *,int,int); void FUN_02078f48(char *self,int index,void *arg) { if(index<2) { void *manager=*(void **)0x02108c84; if(manager) { unsigned short *slot=(unsigned short *)(self+252)+index; if(*slot!=65535) FUN_02037d20(manager,*slot); if(arg) *slot=FUN_02037c88(manager,arg,0,0); } } }
