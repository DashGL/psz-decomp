// FUN_overlay_24__021997d4 @ 0x021997d4 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_24__021997d4 @ 0x021997d4 (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Scale signed input by child speed with rounded fixed-point conversion, then truncate to integer.
 * Field identities remain provisional.
 */
extern int FUN_02036c34(void *);
void FUN_overlay_24__021997d4(unsigned int *p,int value) {int speed=FUN_02036c34((void *)p[1]);p[12]=(int)(((long long)value*speed+2048)>>12)>>12;}
