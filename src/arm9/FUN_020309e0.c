// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02108c50[];
// FUN_020309e0 @ 0x020309e0 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/020309e0.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020308bc(void *,int,int);
void *FUN_020309e0(void **s) { void *p; s[0]=0; s[1]=0; p=FUN_020ba894(16); if(p) p=FUN_020308bc(p,20,1); s[0]=p; p=FUN_020ba894(16); if(p) p=FUN_020308bc(p,4,0); s[1]=p; ((void **)((unsigned int)DAT_02108c50 + 0u))[1]=s; return s; }
