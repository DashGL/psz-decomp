// FUN_overlay_4__0212ac78 @ 0x0212ac78 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212ac78 @ 0x0212ac78 (code 0x5e, pool extent 0x68, thumb)
// check: vers=2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Apply copied template and reset each present display.
 * Field identities remain provisional.
 */
extern void FUN_020c35ac(void *,int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_4__0212ac78(void **p) {struct T {int w[8];} a,b;if(p[3]){FUN_020c35ac(p[3],1);a=*(struct T *)0x0212e46c;FUN_020c35d4(p[3],&a);FUN_020c38f0(p[3],0);}if(p[4]){FUN_020c35ac(p[4],1);b=*(struct T *)0x0212e44c;FUN_020c35d4(p[4],&b);FUN_020c38f0(p[4],0);}}
