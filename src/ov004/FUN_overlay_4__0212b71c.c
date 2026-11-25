// FUN_overlay_4__0212b71c @ 0x0212b71c (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212b71c @ 0x0212b71c (0x64, Thumb)
// check: vers=2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// Refresh pair from selected ID and lazily draw its text with five-argument rendering helper.
extern void FUN_02033758(short *,unsigned int),FUN_overlay_4__0212b06c(void *),FUN_020c3788(void *,const signed char *,int,int,unsigned int);extern const signed char *FUN_02033724(unsigned int);
void FUN_overlay_4__0212b71c(char *self,unsigned int id){short pair[2];const signed char *text;if(*(int *)(self+12)==2){FUN_02033758(pair,id);if(*(short *)(self+20)!=pair[0]||*(short *)(self+22)!=pair[1]){*(short *)(self+20)=pair[0];*(short *)(self+22)=pair[1];FUN_overlay_4__0212b06c(self);}}if(!*(int *)(self+4)){text=FUN_02033724(id);if(text){FUN_020c3788(*(void **)self,text,0,6,2);*(int *)(self+4)=1;}}}
