// FUN_020919cc @ 0x020919cc (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020919cc @ 0x020919cc (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned buffers and object allocation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020919cc.txt.
 */
extern char UNK_020faf24[];extern void FUN_020ba8b4(void *),FUN_020ba8ac(void *);void *FUN_020919cc(char *s){*(void **)s=UNK_020faf24;if(!*(int *)(s+32) && *(void **)(s+12)){FUN_020ba8b4(*(void **)(s+12));*(void **)(s+12)=0;}if(!*(int *)(s+28) && *(void **)(s+8)){FUN_020ba8b4(*(void **)(s+8));*(void **)(s+8)=0;}if(*(void **)(s+48)){FUN_020ba8b4(*(void **)(s+48));*(void **)(s+48)=0;}if(*(void **)(s+44)){FUN_020ba8b4(*(void **)(s+44));*(void **)(s+44)=0;}FUN_020ba8ac(s);return s;}
