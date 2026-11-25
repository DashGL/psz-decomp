// FUN_020c06d4 @ 0x020c06d4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c06d4 @ 0x020c06d4
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize dispatch table and fields, install singleton, refresh global state, then save byte result from self helper.
 * Evidence: scratch/coverage-root/batch2/020c06d4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c0c58(void);
extern unsigned int FUN_020c0b64(void *);
void *FUN_020c06d4(char *self) {
    *(unsigned int *)self=0x020fca38;self[4]=0;*(int *)(self+8)=0;
    *(void **)0x0211b3d8=self;FUN_020c0c58();self[4]=FUN_020c0b64(self);return self;
}
