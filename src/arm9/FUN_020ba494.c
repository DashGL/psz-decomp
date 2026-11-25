// FUN_020ba494 @ 0x020ba494 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020ba494 @ 0x020ba494 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Detach matching children and process global owner list.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba494.txt.
 */
extern void FUN_020ba730(void *),FUN_020b9ebc(void *);void FUN_020ba494(void *target){if(target){char *owner=*(char **)0x0211b280;if(owner){char *p=*(char **)(owner+28);while(p){if(*(void **)(p+120)==target)FUN_020ba730(p);p=*(char **)(p+20);}owner=*(char **)0x0211b280;if(owner)FUN_020b9ebc(owner);}}}
