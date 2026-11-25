// FUN_overlay_12__021207e0 @ 0x021207e0 (0x90, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__021207e0 @ 0x021207e0 (code 0x7c, pool extent 0x90, thumb)
// check: vers=2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Enable the two display layers, configure their background registers, and load their resource holders.
 * Field identities remain provisional.
 */
extern void FUN_020a45a4(unsigned int);extern void FUN_020c2b84(void *,void *,int,int,int);

extern void FUN_overlay_12__02120870(int,int,int,int,int);extern void FUN_overlay_12__0212089c(int,int,int,int);
void FUN_overlay_12__021207e0(unsigned char *self){volatile unsigned short *bg=(volatile unsigned short *)0x0400000e;volatile unsigned int *display=(volatile unsigned int *)0x04001000;unsigned int layers,word;FUN_020a45a4(2);FUN_overlay_12__02120870(0,0,2,2,0);FUN_020a45a4(8);*bg=(*bg&0x43)|0x194;FUN_020c2b84(self,(void *)0x0213d334,3,1,5);layers=(*display&0x1f00)>>8;word=*display&0xffffe0ff;*display=word|((layers|8)<<8);FUN_overlay_12__0212089c(0,1,1,4);FUN_020c2b84(self+4,(void *)0x0213d354,7,1,4);}
