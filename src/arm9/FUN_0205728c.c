// FUN_0205728c @ 0x0205728c (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205728c @ 0x0205728c (inventory code 0x44, arm)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 222.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b222/0205728c.txt.
 */
extern unsigned int FUN_020683d4(void),FUN_020683e8(unsigned int);extern int FUN_02056ff4(void);extern void FUN_02067aa8(unsigned int,unsigned int);void FUN_0205728c(unsigned int enabled){unsigned int irq=FUN_020683d4();*(unsigned int *)0x02111f08=enabled;if(!FUN_02056ff4())FUN_02067aa8(0xf000,enabled?0x1000:0x5000);FUN_020683e8(irq);}
