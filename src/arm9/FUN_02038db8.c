// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f7088[];
extern unsigned char DAT_020f70a4[];
// FUN_02038db8 @ 0x02038db8 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02038db8.txt.
 */
extern void FUN_020472bc(void *); extern void FUN_02038154(void *); extern void FUN_0203819c(void *); extern void FUN_020b9e28(void *); extern void FUN_020ba940(void *);
void *FUN_02038db8(char *s) { *(unsigned int *)s=((unsigned int)DAT_020f7088 + 0u); *(unsigned int *)(s+0x20)=((unsigned int)DAT_020f70a4 + 0u); if(*(void **)(s+0xe0)) { FUN_020472bc(*(void **)(s+0xe0)); *(void **)(s+0xe0)=0; } FUN_02038154(s); FUN_0203819c(s); FUN_020b9e28(s); FUN_020ba940(s); return s; }
