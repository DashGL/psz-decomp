// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// FUN_02051c10 @ 0x02051c10 (inventory code 0x26, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/02051c10.txt.
 */
int FUN_02051c10(char *s) { int sub=*(int *)(s+0x50); if(sub!=-1) { char *table=*(char **)(s+8); short *base=*(short **)s; unsigned int index=*(unsigned int *)(s+0x4c); unsigned int b=base[index*4]; int entry=b+sub; return *(signed char *)(table+12*entry+1); } return 0; }
