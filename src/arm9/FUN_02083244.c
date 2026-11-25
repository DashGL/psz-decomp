// FUN_02083244 @ 0x02083244 (0x6e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02083244 @ 0x02083244 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x6e candidate=0x6e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map percentage range into descriptor category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083244.txt.
 */
extern void FUN_0206d0c4(void *,int,int);void FUN_02083244(void *s,int value){if(value<=0)FUN_0206d0c4(s,8,4);else if(value<=20)FUN_0206d0c4(s,8,5);else if(value<=40)FUN_0206d0c4(s,8,6);else if(value<=60)FUN_0206d0c4(s,8,7);else if(value<=70)FUN_0206d0c4(s,8,8);else if(value<=90)FUN_0206d0c4(s,8,9);else if(value<=100)FUN_0206d0c4(s,8,10);else FUN_0206d0c4(s,8,11);}
