// FUN_overlay_23__0219c62c @ 0x0219c62c (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219c62c @ 0x0219c62c (code 0x7a, pool extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Reset the movement state from fixed configuration and start animation one if necessary.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern int FUN_02040cd4(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_23__0219c62c(int *self){void *owner=(void *)self[1];int *cfg=(int *)0x0219db0c;int *unit=(int *)0x020fc988;
if(FUN_02040cd4(owner,0)!=1)FUN_02040c0c(owner,0,1,4096,0);
*(Vec *)(self+3)=*(Vec *)0x020fc958;
self[6]=*unit;self[7]=*unit;self[8]=cfg[1];self[12]=0;self[9]=cfg[0];self[10]=0;self[11]=0;
self[13]=cfg[20];self[14]=*unit;self[15]=cfg[18];self[16]=cfg[18];self[17]=cfg[16];self[18]=cfg[15];self[19]=0;self[20]=*unit;self[21]=cfg[13];self[22]=cfg[13];self[23]=cfg[9];self[24]=cfg[8];}
