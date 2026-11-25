// FUN_02091a28 @ 0x02091a28 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_02091a28 @ 0x02091a28 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned buffers in duplicate cleanup entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02091a28.txt.
 */
extern void FUN_020ba8b4(void *);void *FUN_02091a28(char *s){*(unsigned int *)s=0x020faf24;if(!*(int *)(s+32) && *(void **)(s+12)){FUN_020ba8b4(*(void **)(s+12));*(void **)(s+12)=0;}if(!*(int *)(s+28) && *(void **)(s+8)){FUN_020ba8b4(*(void **)(s+8));*(void **)(s+8)=0;}if(*(void **)(s+48)){FUN_020ba8b4(*(void **)(s+48));*(void **)(s+48)=0;}if(*(void **)(s+44)){FUN_020ba8b4(*(void **)(s+44));*(void **)(s+44)=0;}return s;}
