// FUN_0206d1ec @ 0x0206d1ec (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206d1ec @ 0x0206d1ec
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store five values into receiver including two stack arguments; return receiver.
 * Evidence: scratch/coverage-root/batch6/0206d1ec.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_0206d1ec(unsigned int *self,unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e) { self[0]=a;self[1]=b;self[2]=c;self[3]=d;self[4]=e;return self; }
