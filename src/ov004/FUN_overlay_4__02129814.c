// FUN_overlay_4__02129814 @ 0x02129814 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02129814 @ 0x02129814 (code 0x56, pool extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Apply two copied display templates and clear selection state.
 * Field identities remain provisional.
 */
extern void FUN_020c35ac(void *,int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_4__02129814(void **p) {struct T {int w[8];} a,b;FUN_020c35ac(p[0],1);FUN_020c35ac(p[1],1);a=*(struct T *)0x0212e1fc;b=*(struct T *)0x0212e21c;FUN_020c35d4(p[0],&a);FUN_020c35d4(p[1],&b);FUN_020c38f0(p[0],0);FUN_020c38f0(p[1],0);}
