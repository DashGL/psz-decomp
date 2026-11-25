// FUN_overlay_12__02125f50 @ 0x02125f50 (0x86, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125f50 @ 0x02125f50 (thumb)
// check: 2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Refresh dirty dialog contents and wrap choice navigation. */
extern void FUN_overlay_12__0212601c(void *),FUN_overlay_12__021260b4(void *),FUN_020c193c(int,int,int,int,int);extern int FUN_020bbf94(int);
void FUN_overlay_12__02125f50(int *self){int old;if(self[24]&4){self[24]&=~4;FUN_overlay_12__0212601c(self);if(self[24]&1){FUN_overlay_12__021260b4(self);self[24]&=~1;}}if(self[16]>0){old=self[22];if(FUN_020bbf94(64))self[22]--;else if(FUN_020bbf94(128))self[22]++;if(self[22]>=self[16])self[22]=0;else if(self[22]<0)self[22]=self[16]-1;if(old!=self[22])FUN_020c193c(0,2,0,0,-1);}}
