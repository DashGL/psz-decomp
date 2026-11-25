// FUN_overlay_10__0211f288 @ 0x0211f288 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211f288 @ 0x0211f288 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Consume positive signed repeat count and reset timer, otherwise mark completion.
 * Field identities remain provisional.
 */
int FUN_overlay_10__0211f288(char *p) {if(*(short *)(p+0xa2)>0){*(unsigned int *)(p+0xa4)=1;*(short *)(p+0xa0)=0;--*(short *)(p+0xa2);}else *(unsigned int *)(p+0xa4)=3;return 1;}
