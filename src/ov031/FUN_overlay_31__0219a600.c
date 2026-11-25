// FUN_overlay_31__0219a600 @ 0x0219a600 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a600 @ 0x0219a600 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Apply signed halfword decrement and enter state six upon exhaustion.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219a638(void *,int);
void FUN_overlay_31__0219a600(char *p,const short *delta) {if(*(short *)(p+96)>0) {*(short *)(p+96)+=*delta;if(*(short *)(p+96)<=0)FUN_overlay_31__0219a638(p,6);}}
