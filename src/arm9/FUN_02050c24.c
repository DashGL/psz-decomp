// FUN_02050c24 @ 0x02050c24 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02050c24 @ 0x02050c24 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Install dispatch table and initialize payload, reference bytes and invalid halfword.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02050c24.txt.
 */
void *FUN_02050c24(char *self) { *(unsigned int *)self=0x020f93cc; *(unsigned int *)(self+4)=0; *(unsigned int *)(self+8)=0; self[12]=0; self[13]=0; *(unsigned short *)(self+14)=0xffff; return self; }
