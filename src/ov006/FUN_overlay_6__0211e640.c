// FUN_overlay_6__0211e640 @ 0x0211e640 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch62.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211e640 @ 0x0211e640 (code 0x4a, pool extent 0x4a, thumb)
// check: vers=2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize fixed-size byte buffer and associated bookkeeping fields.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,int);
extern void *FUN_02001540(void *,int,int);
char *FUN_overlay_6__0211e640(char *p) {*(int *)p=0;FUN_0200c938(p+4,256);*(int *)(p+260)=0;*(int *)(p+264)=0;*(int *)(p+268)=0;*(int *)(p+272)=0;p[276]=0;*(int *)(p+280)=0;*(int *)(p+284)=0;FUN_02001540(p+4,-1,256);return p;}
