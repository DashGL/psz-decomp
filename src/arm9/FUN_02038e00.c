// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f7088[];
extern unsigned char DAT_020f70a4[];
// FUN_02038e00 @ 0x02038e00 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/02038e00.txt.
 */
extern void FUN_020472bc(void *); extern void FUN_02038154(void *); extern void FUN_0203819c(void *); extern void FUN_020b9e28(void *);
void *FUN_02038e00(char *s) { *(unsigned int *)s=((unsigned int)DAT_020f7088 + 0u); *(unsigned int *)(s+0x20)=((unsigned int)DAT_020f70a4 + 0u); if(*(void **)(s+0xe0)) { FUN_020472bc(*(void **)(s+0xe0)); *(void **)(s+0xe0)=0; } FUN_02038154(s); FUN_0203819c(s); FUN_020b9e28(s); return s; }
