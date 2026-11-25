// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned char pad_0[124]; unsigned int field_7c; } DAT_0210579c;
// FUN_02034600 @ 0x02034600 (inventory code 0x68, thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b44/02034600.txt.
 */
extern void FUN_0205c1cc(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int,void *);extern void FUN_02034680(void *,void *);extern void FUN_0205ba00(void *,void *,void *,void *);
void FUN_02034600(char *s){FUN_0205c1cc(*(unsigned int *)(s+4),*(unsigned int *)(s+8),*(unsigned int *)(s+12),*(unsigned int *)(s+16),*(unsigned int *)(s+20),4096,(void *)0x02105724);DAT_0210579c.field_7c&=~0x50u;FUN_02034680((void *)0x0210595c,s+24);FUN_02034680((void *)0x02105968,s+48);FUN_02034680((void *)0x02105974,s+36);FUN_0205ba00(s+24,s+48,s+36,(void *)0x02105768);DAT_0210579c.field_7c&=~0xe8u;}
