// FUN_020792ec @ 0x020792ec (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020792ec @ 0x020792ec (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select global first/second handle by unsigned second argument threshold two; first argument unused.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020792ec.txt.
 */
extern void *FUN_02077f3c(void); extern unsigned int FUN_02078038(void *), FUN_02077fec(void *);
unsigned int FUN_020792ec(void *unused,unsigned int selector) { if(selector>=2) return FUN_02078038(FUN_02077f3c()); return FUN_02077fec(FUN_02077f3c()); }
