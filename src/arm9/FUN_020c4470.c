// FUN_020c4470 @ 0x020c4470 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c4470 @ 0x020c4470
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Zero 16-byte record in two ranges; nonnull text marks active and copies at most 12 nonzero bytes.
 * Evidence: scratch/coverage-root/batch1/020c4470.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern void FUN_020656b8(void *,int,unsigned int);
void *FUN_020c4470(char *self,const char *text) {
    FUN_020656b8(self,0,2); FUN_020656b8(self+2,0,14);
    if(text) { int i; self[0]=1; for(i=0;i<12 && text[i];i++) self[i+2]=text[i]; }
    return self;
}
