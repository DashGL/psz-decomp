// FUN_overlay_12__02131668 @ 0x02131668 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131668 @ 0x02131668 (code 0x58, pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Update or create a text panel from the default parameter block and supplied fields.
 * Field identities remain provisional.
 */
typedef struct {int v[9];} Params;
extern void FUN_overlay_12__02136818(int,void *,const Params *);extern int FUN_overlay_12__0213682c(void *,const Params *);
void FUN_overlay_12__02131668(unsigned char *self,int text,int a,int b,int c,int d){Params p=*(Params *)0x0213ba04;p.v[0]=text;p.v[2]=a;p.v[3]=b;p.v[4]=c;p.v[5]=d;if(*(int *)(self+472)!=-1)FUN_overlay_12__02136818(*(int *)(self+472),self,&p);else *(int *)(self+472)=FUN_overlay_12__0213682c(self,&p);}
