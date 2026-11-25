// FUN_overlay_3__0211eb10 @ 0x0211eb10 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_3__0211eb10 @ 0x0211eb10 (code 0x52, pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 3 reconstruction from extracted module bytes, 2026-11-04.
 * Render two fixed-position descriptors when resource handle is valid.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_3__0211eb10(int *p) {int t[4];if(p[8]!=-1){FUN_02071d0c(t);*(short *)t=p[12]/7+10;t[2]=0xeb000;t[3]=0x16a000;FUN_020c32b4(t,1);*(short *)t=10;t[2]=0xeb000;t[3]=0x16a000;FUN_020c32b4(t,1);}}
