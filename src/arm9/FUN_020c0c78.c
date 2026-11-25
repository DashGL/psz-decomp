// FUN_020c0c78 @ 0x020c0c78 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c0c78 @ 0x020c0c78
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Fetch global 64-bit identifier; if nonzero format it into caller output through explicit low/high word arguments.
 * Evidence: scratch/coverage-root/batch7/020c0c78.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
typedef unsigned long long u64;
extern u64 FUN_020dd878(void *);
extern void FUN_020dd468(void *,unsigned int,unsigned int);
int FUN_020c0c78(void *out) { u64 key=FUN_020dd878((void *)0x0211b404);if(!key)return 0;FUN_020dd468(out,(unsigned int)key,(unsigned int)(key>>32));return 1; }
