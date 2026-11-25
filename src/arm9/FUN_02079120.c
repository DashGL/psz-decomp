// FUN_02079120 @ 0x02079120 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_02079120 @ 0x02079120 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate 12-byte global record, initializing only halfword +8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079120.txt.
 */
extern void *FUN_020ba894(unsigned int);
void FUN_02079120(void) { if(!*(void **)0x0211a428) { char *object=FUN_020ba894(12); if(object) *(unsigned short *)(object+8)=0; *(void **)0x0211a428=object; } }
