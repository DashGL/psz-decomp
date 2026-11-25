// FUN_02087384 @ 0x02087384 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02087384 @ 0x02087384 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear word +640, initialize +644 subobject, clear word +b74; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087384.txt.
 */
extern void FUN_020a1264(void *);
void *FUN_02087384(char *self) { *(unsigned int *)(self+0x640)=0; FUN_020a1264(self+0x644); *(unsigned int *)(self+0xb74)=0; return self; }
