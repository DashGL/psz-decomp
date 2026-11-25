// FUN_0206d1fc @ 0x0206d1fc (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206d1fc @ 0x0206d1fc
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate five signed fields in order +10, +0, +4, +8, +c with upper bounds 10,9,12,7,5.
 * Evidence: scratch/coverage-root/batch1/0206d1fc.txt.
 * Object identities and helper return contracts remain provisional.
 */
int FUN_0206d1fc(int *self) {
    if(self[4]<0 || self[4]>=10) return 0;
    if(self[0]<0 || self[0]>=9) return 0;
    if(self[1]<0 || self[1]>=12) return 0;
    if(self[2]<0 || self[2]>=7) return 0;
    if(self[3]<0 || self[3]>=5) return 0;
    return 1;
}
