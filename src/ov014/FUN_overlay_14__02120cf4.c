// FUN_overlay_14__02120cf4 @ 0x02120cf4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120cf4 @ 0x02120cf4 (code 0x3c, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Clear sub-screen memory and configure embedded display template.
 * Field identities remain provisional.
 */
typedef struct {int a[8];} T;
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(int,void *,unsigned int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_14__02120cf4(char *p) {T t;FUN_0206557c(0,FUN_0205e0c4(),2048);t=*(T *)0x02121958;FUN_020c35d4(p+20,&t);FUN_020c38f0(p+20,0);}
