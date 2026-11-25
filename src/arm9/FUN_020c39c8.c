// FUN_020c39c8 @ 0x020c39c8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// FUN_020c39c8 @ 0x020c39c8
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release nonnull buffer +c, perform observed redundant slot clears, and clear size word +4.
 * Evidence: scratch/coverage-root/batch5/020c39c8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020ba8c4(void *);
void FUN_020c39c8(void **self) { void *buffer=self[3];if(buffer) { if(buffer) { FUN_020ba8c4(buffer);self[3]=0; }self[3]=0;self[1]=0; } }
