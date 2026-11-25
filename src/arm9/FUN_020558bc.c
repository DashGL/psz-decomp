// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021116a0[];
// FUN_020558bc @ 0x020558bc (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 209.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b209/020558bc.txt.
 */
extern void FUN_02066bb8(void *,unsigned int),FUN_02066a94(void *);void FUN_020558bc(unsigned int value){char *s=(char *)((unsigned int)DAT_021116a0 + 0u);unsigned int flags;FUN_02066bb8(s+68,*(unsigned int *)(s+264));flags=*(unsigned int *)(s+276)|8;*(void **)(s+260)=s+68;*(unsigned int *)(s+64)=value;*(unsigned int *)(s+276)=flags;FUN_02066a94(s+68);}
