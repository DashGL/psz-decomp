// FUN_overlay_12__0211f7fc @ 0x0211f7fc (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f7fc @ 0x0211f7fc (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Populate a UI record with its identifier, copied two-word position, bounded text, owner, and option.
 * Field identities remain provisional.
 */
typedef struct{int x,y;}Pair;extern void *FUN_0208971c(void *,const void *);extern unsigned int FUN_020c3f00(char *,const char *,unsigned int);
void FUN_overlay_12__0211f7fc(unsigned char *self,int id,const char *text,int owner,Pair position,int option){*(unsigned short *)self=id;FUN_0208971c(self+8,&position);*(int *)(self+276)=owner;if(text)FUN_020c3f00((char *)self+16,text,255);else self[16]=0;*(int *)(self+284)=1;*(int *)(self+280)=option;}
