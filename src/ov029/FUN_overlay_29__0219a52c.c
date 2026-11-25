// FUN_overlay_29__0219a52c @ 0x0219a52c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a52c @ 0x0219a52c (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base and initialize two embedded record arrays.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,int,int);
extern void *FUN_overlay_29__0219a4dc(void *);
extern void *FUN_overlay_29__0219a4fc(void *);
char *FUN_overlay_29__0219a52c(char *p,int id,int kind) {char *a,*end;FUN_020352dc(p,id,kind);*(int *)p=0x0219be9c;a=p+212;end=p+284;do{FUN_overlay_29__0219a4dc(a);a+=24;}while(a<end);a=end;end=p+324;do{FUN_overlay_29__0219a4fc(a);a+=40;}while(a<end);return p;}
