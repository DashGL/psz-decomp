// FUN_overlay_19__0219b0b8 @ 0x0219b0b8 (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b0b8 @ 0x0219b0b8 (code 0x98, full extent 0x9c, thumb)
// check: vers=2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch448.md.
 */
typedef struct {signed char bytes[4];volatile int words[2];} Payload;extern int FUN_02084d00(void *);extern void *FUN_02001540(void *,int,unsigned);extern void FUN_overlay_19__02198b10(void *,void *);extern int *FUN_overlay_19__021985f8(void *,int);
void FUN_overlay_19__0219b0b8(int *self,signed char *packet) { void *owner=(void *)self[1];if(packet[0]==1){if(FUN_02084d00((void *)0x0211a51c)==1 && ((signed char *)self)[100]!=packet[1] && ((signed char *)self)[112]!=packet[1]){Payload p;FUN_02001540(&p,0,12);p.words[0]=-1;p.words[1]=-1;FUN_02001540(&p,0,12);p.words[0]=-1;p.words[1]=-1;p.bytes[0]=packet[1];p.words[0]=*(int *)(packet+4);p.words[1]=*(int *)(packet+8);FUN_overlay_19__02198b10((void *)self[1],&p);}if(packet[1]==5){int *child=FUN_overlay_19__021985f8(owner,packet[2]);if(child && child[9]!=3 && child[9]!=5){child[11]=*(int *)(packet+4);child[9]=6;}}} }
