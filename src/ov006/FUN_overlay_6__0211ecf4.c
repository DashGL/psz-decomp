// FUN_overlay_6__0211ecf4 @ 0x0211ecf4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211ecf4 @ 0x0211ecf4 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Load named allocation and record its size and initial cursor.
 * Field identities remain provisional.
 */
extern void *FUN_020ba374(const char *,int *,int);
int FUN_overlay_6__0211ecf4(unsigned int *p,const char *name) {if(name){int size=0;p[0]=(unsigned int)FUN_020ba374(name,&size,16);if(p[0]){p[1]=size;p[2]=0;return 1;}}return 0;}
