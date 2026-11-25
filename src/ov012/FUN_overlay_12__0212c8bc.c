// FUN_overlay_12__0212c8bc @ 0x0212c8bc (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c8bc @ 0x0212c8bc (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear display memory selected by screen and destroy embedded displays.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void *FUN_0205e0c4(void);
extern void *FUN_0205e090(void);
extern void FUN_0206557c(int,void *,unsigned int);
extern void FUN_020c3578(void *);
int *FUN_overlay_12__0212c8bc(int *p) {void *screen;FUN_020c38f0(p+1,0);if(p[0])screen=FUN_0205e0c4();else screen=FUN_0205e090();FUN_0206557c(0,screen,2048);FUN_020c3578(p+16);FUN_020c3578(p+1);return p;}
