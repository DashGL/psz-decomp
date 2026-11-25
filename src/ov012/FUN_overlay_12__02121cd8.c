// FUN_overlay_12__02121cd8 @ 0x02121cd8 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02121ea0(void);
extern void FUN_overlay_12__02121ef8(const char *,int,int,int,int,int,void (*)(void),void (*)(void),int);
void FUN_overlay_12__02121cd8(int *self,int next,int selection,const char *format,int argument,int a,int b,int c,void (*callback)(void))
{
    FUN_overlay_12__0212c9a0();
    FUN_overlay_12__02121ef8(format,argument,a,b,c,0,callback,FUN_overlay_12__02121ea0,0);
    self[805]=self[804];self[804]=6;self[811]=next;self[812]=selection;self[803]=0;
}
