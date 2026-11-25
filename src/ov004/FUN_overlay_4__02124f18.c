// FUN_overlay_4__02124f18 @ 0x02124f18 (0x86, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02124f18 @ 0x02124f18 (0x86, Thumb)
// check: vers=2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// Cycle four groups in response to input, record direction, reset presentation and request feedback.
extern int FUN_020bbf94(unsigned int);extern void *FUN_02088c7c(void);extern void FUN_0208b4e8(void *),FUN_020c193c(unsigned int,unsigned int,int,unsigned int,int);
void FUN_overlay_4__02124f18(int *self){int changed=0;if(FUN_020bbf94(16)){self[25]++;if(self[25]>3)self[25]=0;self[38]=3;self[39]=0;changed=1;}else if(FUN_020bbf94(32)){self[25]--;if(self[25]<0)self[25]=3;self[38]=3;self[39]=1;changed=1;}if(changed){FUN_0208b4e8(FUN_02088c7c());self[47]&=~4;FUN_020c193c(0,2,0,0,-1);}}
