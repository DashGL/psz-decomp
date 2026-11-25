// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa, exact bytes and relocation targets.
// FUN_020c242c @ 0x020c242c
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear word one after indexed base, preserving computed base in return.
 * Evidence: scratch/coverage-root/batch4/020c242c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
struct S_020c242c { int pad; unsigned int a[1]; };
void *FUN_020c242c(struct S_020c242c *self,unsigned int index) { self->a[index]=0; return (char *)self+4*index; }
