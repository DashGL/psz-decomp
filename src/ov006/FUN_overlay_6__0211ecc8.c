// FUN_overlay_6__0211ecc8 @ 0x0211ecc8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211ecc8 @ 0x0211ecc8 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Load named object and initialize owner and storage after successful load.
 * Field identities remain provisional.
 */
extern int FUN_overlay_6__0211ecf4(void *,const char *);
extern void *FUN_02001540(void *,int,unsigned int);
int FUN_overlay_6__0211ecc8(unsigned int *p,void *owner,const char *name) {if(FUN_overlay_6__0211ecf4(p,name)==1){p[168]=(unsigned int)owner;p[7]=0;FUN_02001540(p+8,0,640);return 1;}return 0;}
