// FUN_overlay_14__0212049c @ 0x0212049c (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__0212049c @ 0x0212049c (code 0x4c, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Enable layer, clear screen and apply embedded display template.
 * Field identities remain provisional.
 */
typedef struct {int v[8];} T;
extern void FUN_020a45a4(int);
extern void FUN_overlay_14__021201cc(int,int,int,int,int);
extern void *FUN_0205e090(void);
extern void FUN_0206557c(int,void *,int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_14__0212049c(char *p) {T t;FUN_020a45a4(2);FUN_overlay_14__021201cc(0,0,4,4,0);FUN_0206557c(0,FUN_0205e090(),2048);t=*(T *)0x021218e0;FUN_020c35d4(p+4,&t);FUN_020c38f0(p+4,0);}
