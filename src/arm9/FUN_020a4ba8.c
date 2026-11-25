// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// ROM literal base 0x0211a664 with owner member at +0x10; typed global
// preserves base-relative member access instead of hoisting field address.
extern struct { unsigned char pad[16]; void *owner; } DAT_0211a664;
// FUN_020a4ba8 @ 0x020a4ba8 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release optional owner outside active mode and clear subsystem.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4ba8.txt.
 */
typedef void (*Method)(void *);extern char *FUN_0200d16c(void);extern int FUN_0200d42c(void *,int);extern void FUN_020a59ac(void);void FUN_020a4ba8(void){char *p=FUN_0200d16c();void *q=FUN_0200d16c();if(!FUN_0200d42c(q,*(int *)(p+8))){void *owner=DAT_0211a664.owner;if(owner){if(owner)(*(Method **)owner)[1](owner);DAT_0211a664.owner=0;}}FUN_020a59ac();}
