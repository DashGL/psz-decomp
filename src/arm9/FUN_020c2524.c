// FUN_020c2524 @ 0x020c2524 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c2524 @ 0x020c2524
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When enabled, query nested resource and set ready word +14 on success.
 * Evidence: scratch/coverage-root/batch4/020c2524.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020128d8(void *,void *);
void FUN_020c2524(char *self) {
    if(*(unsigned int *)(self+24)) { char *child=*(char **)self;if(FUN_020128d8(*(void **)child,child+20))*(unsigned int *)(self+20)=1; }
}
