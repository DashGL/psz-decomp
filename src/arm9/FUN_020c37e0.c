// FUN_020c37e0 @ 0x020c37e0 (0x82, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x82 candidate=0x82 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 text direction wrapper; seven-argument callee consumes final two-byte struct by value.
typedef struct {signed char x,y;} Direction;
extern void FUN_0200c938(void *,unsigned int);
extern void FUN_02018444(void *,int,int,void *,unsigned int,unsigned int,Direction);
void FUN_020c37e0(char *self,int x,int y,void *text,unsigned int flags,unsigned int count){
 char **font=*(char ***)(self+4);Direction direction;
 FUN_0200c938(&direction,2);
 switch((unsigned char)(*(char **)(*font+8))[7]){
 case 0:case 7:direction.x=1;break;
 case 1:case 2:direction.y=1;break;
 case 3:case 4:direction.x=-1;break;
 case 5:case 6:direction.y=-1;break;
 }
 FUN_02018444(self,x,y,text,flags,count,direction);
}
