// FUN_020c15e4 @ 0x020c15e4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c15e4 @ 0x020c15e4
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, clean two embedded contexts and global state, release child/buffer, clear singleton, then free receiver.
 * Evidence: scratch/coverage-root/batch8/020c15e4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0200d7b8(void *),FUN_020c1768(void),FUN_0200f0d0(void *),FUN_020ba8b4(void *),FUN_020ba8ac(void *);
void *FUN_020c15e4(char *self) { *(unsigned int *)self=0x020fca6c;FUN_0200d7b8(self+184);FUN_0200d7b8(self+188);FUN_020c1768();FUN_0200f0d0(*(void **)(self+8));FUN_020ba8b4(*(void **)(self+4));*(void **)0x0211c85c=0;FUN_020ba8ac(self);return self; }
