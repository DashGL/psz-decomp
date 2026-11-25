// FUN_020c5094 @ 0x020c5094 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c5094 @ 0x020c5094
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Restore derived vtable, release buffer and run base teardown then free self.
 * Evidence: scratch/coverage-root/batch17/020c5094.txt.
 */
extern void FUN_020ba8b4(void *),FUN_020ba940(void *);
extern void *FUN_020b9e28(void *);
void *FUN_020c5094(unsigned char *self){*(unsigned int *)self=0x020fcba0;if(*(void **)(self+0x28))FUN_020ba8b4(*(void **)(self+0x28));FUN_020b9e28(self);FUN_020ba940(self);return self;}
