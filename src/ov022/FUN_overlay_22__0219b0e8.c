// FUN_overlay_22__0219b0e8 @ 0x0219b0e8 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219b0e8 @ 0x0219b0e8 (code 0x56, full extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game component setup with exact field
 * widths and inherited constructor arguments. ABI/behavior evidence:
 * notes/sessions/coverage-overlays-2026-11-05-batch371.md.
 */
extern void FUN_overlay_22__0219a05c(void *,int);
extern void FUN_overlay_22__0219a070(void *,int);
extern void *FUN_overlay_22__02199f98(void *,void *,void *,void *);extern void FUN_overlay_22__0219b0d8(void *);extern int FUN_overlay_22__0219a5b8(void *);extern void FUN_overlay_22__0219a09c(void *,int);
void * FUN_overlay_22__0219b0e8(int *self,void *owner,void *data,void *record) { int value,kind;FUN_overlay_22__02199f98(self,owner,data,record);self[0]=0x021a1268;
FUN_overlay_22__0219b0d8((char *)self+0x5a);
value=*(int *)0x020ed09c;self[24]=value;self[25]=value;self[26]=value;
*((char *)self+0x6c)=0;*(short *)((char *)self+0x6e)=0;
FUN_overlay_22__0219a05c(self,1);FUN_overlay_22__0219a070(self,0);
kind=FUN_overlay_22__0219a5b8(self);if(kind!=0x3f && kind==0x41)FUN_overlay_22__0219a09c(self,0);
return self; }
