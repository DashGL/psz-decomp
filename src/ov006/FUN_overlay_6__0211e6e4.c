// FUN_overlay_6__0211e6e4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_6__0211e6e4 @ 0x0211e6e4 (0x98, Thumb)
// check: vers=2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// Reset element, parse non-sentinel text and apply mode-specific horizontal alignment.
extern const int data_02120440[];extern void FUN_overlay_6__0211e690(void *),FUN_overlay_6__0211e77c(void *,const signed char *,void *);
void FUN_overlay_6__0211e6e4(char *self,const signed char *text,int mode){int offset;float value;FUN_overlay_6__0211e690(self);if(text){if(text[0]=='0'&&text[1]<32)return;FUN_overlay_6__0211e77c(self,text,self+4);if(mode>=0&&mode<6){*(int *)(self+260)=data_02120440[mode];if(mode==2||mode==5){offset=6*(*(int *)self/2)-3;if(offset>0)value=0.5f+(float)(int)((unsigned int)offset<<12);else value=(float)(int)((unsigned int)offset<<12)-0.5f;*(int *)(self+260)-=(int)value;}*(unsigned char *)(self+276)=mode;*(int *)(self+280)=1;}}}
