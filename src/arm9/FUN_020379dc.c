// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_020379dc @ 0x020379dc (inventory code 0x1a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Install dispatch table and initialize invalid id, null payloads and byte defaults.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/020379dc.txt.
 */
void *FUN_020379dc(char *self) { *(unsigned int *)self=0x020f700c; *(unsigned short *)(self+4)=0xffff; *(unsigned int *)(self+8)=0; *(unsigned int *)(self+12)=0; self[16]=0; ((unsigned char *)self)[17]=255; ((unsigned char *)self)[18]=255; self[19]=0; return self; }
