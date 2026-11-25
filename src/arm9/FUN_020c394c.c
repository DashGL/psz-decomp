// FUN_020c394c @ 0x020c394c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// FUN_020c394c @ 0x020c394c
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, invoke cleanup helper, free receiver, return original receiver.
 * Evidence: scratch/coverage-root/batch5/020c394c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c39c8(void *),FUN_020ba8ac(void *);
void *FUN_020c394c(unsigned int *self) { self[0]=0x020fcb44;FUN_020c39c8(self);FUN_020ba8ac(self);return self; }
