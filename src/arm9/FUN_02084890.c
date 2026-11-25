// FUN_02084890 @ 0x02084890 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_02084890 @ 0x02084890 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release eight resource records and virtual owned object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084890.txt.
 */
extern void FUN_020848b4(void *); void FUN_02084890(char *self) { int i; void *p; for(i=0;i<8;i++) FUN_020848b4(self+8*i); p=*(void **)(self+64); if(p) { if(p) (*(void (***)(void *))p)[1](p); } }
