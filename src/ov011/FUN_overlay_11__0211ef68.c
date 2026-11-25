// FUN_overlay_11__0211ef68 @ 0x0211ef68 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211ef68 @ 0x0211ef68 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete bounded name conversion; successful extractors initialize full buffers. */
typedef struct {unsigned short word[8];} Name;
extern int FUN_overlay_11__0211ee64(void *,unsigned short *,int),FUN_overlay_11__0211eee8(void *,char *,int);extern void *FUN_020c44a8(Name *,const unsigned short *),*FUN_020c4470(Name *,const char *);extern void FUN_020c44e4(void *,const void *);
int FUN_overlay_11__0211ef68(unsigned *s,Name *out){int n;unsigned short wide[6];char bytes[12];Name a,b;int wideMode=0;if(s[0]<=3 && ((1u<<s[0])&11))wideMode=1;if(wideMode){n=FUN_overlay_11__0211ee64(s,wide,6);if(n>0){FUN_020c44a8(&a,wide);FUN_020c44e4(out,&a);}}else{n=FUN_overlay_11__0211eee8(s,bytes,12);if(n>0){FUN_020c4470(&b,bytes);FUN_020c44e4(out,&b);}}return n;}
