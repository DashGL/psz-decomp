// FUN_overlay_12__0211eed0 @ 0x0211eed0 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211eed0 @ 0x0211eed0 (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Configure embedded display from template then acquire two resources.
 * Field identities remain provisional.
 */
typedef struct {int a[8];} T;
extern void FUN_020c35ac(void *,int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
extern void FUN_overlay_12__0211f100(void *);
void FUN_overlay_12__0211eed0(char *p) {T t;FUN_020c35ac(p+28,1);t=*(T *)0x02137ba4;FUN_020c35d4(p+28,&t);FUN_020c38f0(p+28,0);FUN_overlay_12__0211f100(p);}
