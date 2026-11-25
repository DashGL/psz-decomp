// FUN_overlay_4__02122840 @ 0x02122840 (0xb8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch39.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122840 @ 0x02122840 (0xb8, Thumb)
// check: vers=2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// Wrap selected list index, copy newly selected descriptor, adjust five-row window and invalidate text cache on scroll.
extern char data_02192d68[];extern int FUN_020bbf94(unsigned int);extern void FUN_020c193c(unsigned int,unsigned int,int,unsigned int,int),FUN_overlay_4__02122148(void *,void *),FUN_02088e10(void *,void *,int,int);extern void *FUN_02088c7c(void);
void FUN_overlay_4__02122840(int *self){int changed=0,old,delta;if(self[8]>0){if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);self[21]++;if(self[21]>=self[8])self[21]=0;changed=1;}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);self[21]--;if(self[21]<0)self[21]=self[8]-1;changed=1;}}if(changed){FUN_overlay_4__02122148(self,data_02192d68+self[21]*24);FUN_02088e10(FUN_02088c7c(),self,0,-1);}old=self[22];delta=self[21]-old;if(delta>=5)self[22]=self[21]-4;if(delta<0)self[22]=self[21];if(self[22]<0)self[22]=4;if(old!=self[22])self[28]=0;}
