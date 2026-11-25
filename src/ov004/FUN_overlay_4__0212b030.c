// FUN_overlay_4__0212b030 @ 0x0212b030 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212b030 @ 0x0212b030 (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Configure optional display using local template and clear state.
 * Field identities remain provisional.
 */
typedef struct {int a[8];} T;
extern void FUN_020c35ac(void *,int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_4__0212b030(int *p) {T t;if(p[0]){FUN_020c35ac((void *)p[0],1);t=*(T *)0x0212e4b8;FUN_020c35d4((void *)p[0],&t);FUN_020c38f0((void *)p[0],0);p[1]=0;}}
