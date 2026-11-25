// FUN_020c13a4 @ 0x020c13a4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c13a4 @ 0x020c13a4
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, release object +8 and buffer +4, free receiver, return original pointer.
 * Evidence: scratch/coverage-root/batch2/020c13a4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020121a0(void *), FUN_020ba8c4(void *),FUN_020ba8ac(void *);
void *FUN_020c13a4(void **self) {
    self[0]=(void *)0x020fca4c;FUN_020121a0(self[2]);FUN_020ba8c4(self[1]);FUN_020ba8ac(self);return self;
}
