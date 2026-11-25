// FUN_020c0af8 @ 0x020c0af8 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c0af8 @ 0x020c0af8
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Search 64-bit key backwards through records; zero key is invalid and returns -1.
 * Evidence: scratch/coverage-root/batch7/020c0af8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
typedef unsigned long long u64;
int FUN_020c0af8(u64 key,const u64 *table,int count) {
    if(key) { int i;for(i=count-1;i>=0;i--)if(table[i]==key)return i; }
    return -1;
}
