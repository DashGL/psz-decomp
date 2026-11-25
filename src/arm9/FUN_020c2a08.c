// FUN_020c2a08 @ 0x020c2a08 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c2a08 @ 0x020c2a08
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release nested buffer, clear its slot, release owner record and clear outer slot; initial nested record is assumed nonnull.
 * Evidence: scratch/coverage-root/batch4/020c2a08.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020ba8c4(void *),FUN_020ba8ac(void *);
void *FUN_020c2a08(void ***self) {
    if((*self)[0]) { FUN_020ba8c4((*self)[0]);(*self)[0]=0; }
    if(*self) { FUN_020ba8ac(*self);*self=0; }return self;
}
