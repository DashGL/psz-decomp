// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_02078294 @ 0x02078294
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_0211a3e4[];
extern unsigned short D_0211a3b8[];
/* USA ROM reconstruction, 2026-11-04.
 * Copy record to global +2c then set global first-halfword bit zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078294.txt.
 */
extern void FUN_02078268(void *,void *);
void FUN_02078294(void *self) { FUN_02078268(D_0211a3e4,self); *D_0211a3b8|=1; }
