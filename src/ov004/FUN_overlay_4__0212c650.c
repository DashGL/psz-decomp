// FUN_overlay_4__0212c650 @ 0x0212c650 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212c650 @ 0x0212c650 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Configure optional display from copied 32-byte template and clear display word.
 * Field identities remain provisional.
 */
extern void FUN_020c35ac(void *,int);
extern void FUN_020c35d4(void *,const void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_4__0212c650(void **p) {if(p[0]){struct Template {int v[8];} t;FUN_020c35ac(p[0],1);t=*(const struct Template *)0x0212e584;FUN_020c35d4(p[0],&t);FUN_020c38f0(p[0],0);}}
