// FUN_overlay_31__0219bf6c @ 0x0219bf6c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219bf6c @ 0x0219bf6c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Accumulate signed halfword while positive and latch expiration.
 * Field identities remain provisional.
 */
void FUN_overlay_31__0219bf6c(char *p,short *delta) {if(*(short *)(p+0x64)>0) {*(short *)(p+0x64)+=*delta;if(*(short *)(p+0x64)<=0)*(unsigned int *)(p+0x58)=1;}}
