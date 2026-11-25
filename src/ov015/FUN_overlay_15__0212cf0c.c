// FUN_overlay_15__0212cf0c @ 0x0212cf0c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212cf0c @ 0x0212cf0c (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read global output flag and clear compact input state when inactive.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__02127e24(unsigned int *,unsigned int *);
void FUN_overlay_15__0212cf0c(void) {unsigned int state;unsigned char *p=(unsigned char *)0x0213e86c;FUN_overlay_15__021318ac();FUN_overlay_15__02127e24(0,&state);if(!state){*(unsigned short *)(p+4)=0;p[0]=0;p[2]=0;}}
