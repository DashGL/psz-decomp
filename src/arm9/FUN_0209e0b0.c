// FUN_0209e0b0 @ 0x0209e0b0 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0209e0b0 @ 0x0209e0b0 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve description text through loaded or fallback table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e0b0.txt.
 */
extern int FUN_0209e05c(void *);extern void *FUN_0209e294(void *,int,int),*FUN_0209e0f0(void *,int,int);void *FUN_0209e0b0(unsigned char *desc){if(*(void **)0x0211a624){int kind=FUN_0209e05c(desc),index=kind==88?desc[3]:desc[2];if(kind>=0){char *p=*(char **)0x0211a624;if(*(void **)(p+4))return FUN_0209e294(*(void **)(p+4),kind,index);return FUN_0209e0f0(p,kind,index);}}return 0;}
