// FUN_overlay_31__0219a944 @ 0x0219a944 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a944 @ 0x0219a944 (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Decode valid signed key into column remainder and row quotient or sentinel outputs.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219a798(void *,const signed char *);
void FUN_overlay_31__0219a944(void *p,const signed char *key,signed char *column,signed char *row) {if(FUN_overlay_31__0219a798(p,key)==1){*column=*key%5;*row=*key/5;}else{*column=-1;*row=-1;}}
