// FUN_0206f558 @ 0x0206f558 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206f558 @ 0x0206f558
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize selected fields: invalid handle, zero word +10, duration30, two zero halfwords and halfword25.
 * Evidence: scratch/coverage-root/batch6/0206f558.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_0206f558(char *self) { *(unsigned int *)self=~0u;*(unsigned int *)(self+16)=0;*(unsigned int *)(self+20)=30;*(unsigned short *)(self+24)=0;*(unsigned short *)(self+26)=0;*(unsigned short *)(self+28)=25;return self; }
