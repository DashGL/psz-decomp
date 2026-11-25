// FUN_020c0a08 @ 0x020c0a08 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c0a08 @ 0x020c0a08
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If primary lookup equals one, move matching 64-bit key to front of 64-entry history and require success; otherwise return true.
 * Evidence: scratch/coverage-root/batch7/020c0a08.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
typedef unsigned long long u64;
extern int FUN_020dd3fc(void *,unsigned int,unsigned int),FUN_020c0a40(u64,u64 *,int);
int FUN_020c0a08(u64 key) {
    if(FUN_020dd3fc((void *)0x0211b404,(unsigned int)key,(unsigned int)(key>>32))==1) { if(FUN_020c0a40(key,(u64 *)0x0211c444,64)==1)return 1;return 0; }return 1;
}
