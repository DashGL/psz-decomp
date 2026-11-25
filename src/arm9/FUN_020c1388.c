// FUN_020c1388 @ 0x020c1388 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// FUN_020c1388 @ 0x020c1388
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup dispatch table, release object +8 and buffer +4, return receiver.
 * Evidence: scratch/coverage-root/batch2/020c1388.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020121a0(void *), FUN_020ba8c4(void *);
void *FUN_020c1388(void **self) {
    self[0]=(void *)0x020fca4c;FUN_020121a0(self[2]);FUN_020ba8c4(self[1]);return self;
}
