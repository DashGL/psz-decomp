// FUN_02070b44 @ 0x02070b44 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070b44 @ 0x02070b44 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, release buffer through owned heap, then destroy heap.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070b44.txt.
 */
extern void FUN_020c13ec(void *,void *); void *FUN_02070b44(unsigned int *self) { self[0]=0x020f9998; if(self[9]) { FUN_020c13ec((void *)self[6],(void *)self[9]); self[9]=0; } if(self[6]) { void *p=(void *)self[6]; if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } self[6]=0; } return self; }
