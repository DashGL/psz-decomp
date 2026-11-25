// FUN_020c2cdc @ 0x020c2cdc (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c2cdc @ 0x020c2cdc
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward eight stored words to resource helper, cache two child lengths and register embedded +c via singleton.
 * Evidence: scratch/coverage-root/batch9/020c2cdc.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_02015c1c(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int),FUN_020c2974(void *,void *);
extern void *FUN_020c1fc8(void);
void FUN_020c2cdc(unsigned int *self) { FUN_02015c1c(self[22],self[8],self[7],self[6],self[9],self[10],self[18],self[19]);self[20]=((unsigned int *)self[8])[2];self[21]=((unsigned int *)self[7])[4];FUN_020c2974(FUN_020c1fc8(),self+3); }
