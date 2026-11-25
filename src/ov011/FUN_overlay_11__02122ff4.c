// FUN_overlay_11__02122ff4 @ 0x02122ff4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__02122ff4 @ 0x02122ff4 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * If owner byte +2c is below five, initialize output with zero kind and that byte.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020a7800(void *,int,int);
void FUN_overlay_11__02122ff4(char *self,void *out) { unsigned int value=*(unsigned char *)(self+0x2c); if(value<5) FUN_020a7800(out,0,value); }
