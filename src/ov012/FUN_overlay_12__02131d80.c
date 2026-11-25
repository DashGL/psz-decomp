// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_12__02131d80 @ 0x02131d80 (code 0x2c, pool extent 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Construct owner-linked base and initialize dialog mode, handles and shared identifier.
 * Field identities remain provisional.
 */
extern char G_0213E838[];
extern void *FUN_020b9cb0(void *,void *);
void *FUN_overlay_12__02131d80(unsigned int *p,void *owner,unsigned int mode) {FUN_020b9cb0(p,owner);p[0]=0x0213e854;p[8]=mode;p[9]=0;p[10]=0;p[11]=0;p[12]=-1;p[13]=-1;p[14]=0;p[15]=0;p[3]=*(unsigned int *)G_0213E838;return p;}
