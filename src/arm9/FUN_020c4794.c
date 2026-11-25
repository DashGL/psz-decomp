// FUN_020c4794 @ 0x020c4794 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c4794 @ 0x020c4794
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, release +34, invoke helper, clear +34/global.
 * Evidence: scratch/coverage-root/batch5/020c4794.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020ba8b4(void *),FUN_020c4f98(void *),FUN_020ba8ac(void *);
void *FUN_020c4794(void **self) { self[0]=(void *)0x020fcb90;FUN_020ba8b4(self[13]);FUN_020c4f98(self);self[13]=0;*(void **)0x0211ceec=0;return self; }
