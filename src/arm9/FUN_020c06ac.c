// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020c06ac @ 0x020c06ac (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c06ac @ 0x020c06ac
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear byte +2, copy supplied record into self+36, refresh globals, and repack fields.
 * Evidence: scratch/coverage-root/batch2/020c06ac.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020743fc(void *, const void *),FUN_020c0c58(void),FUN_020c064c(void *,unsigned int,unsigned int,unsigned int);
void FUN_020c06ac(char *self, const void *source) {
    unsigned int *global=(unsigned int *)0x0211b3d8;
    self[2]=0;FUN_020743fc(self+36, source);FUN_020c0c58();
    FUN_020c064c(self,global[1],global[2],global[3]);
}
