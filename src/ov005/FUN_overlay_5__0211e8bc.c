// FUN_overlay_5__0211e8bc @ 0x0211e8bc (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_5__0211e8bc @ 0x0211e8bc (0x7c, Thumb)
// check: vers=2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// Advance presentation page state, compare signed-extended counter against unsigned 64-bit duration, and request next page or scene.
extern const void *data_0211e99c[];extern void FUN_020c2b84(void *,const void *,int,int,int),FUN_overlay_5__0211e938(void *,int);extern int FUN_020c2d94(int,int,int),FUN_0200d3a4(void *,int,int);extern void *FUN_0200d16c(void);
void FUN_overlay_5__0211e8bc(int *self){int counter,next;const void *p;if(self[11]==1){p=data_0211e99c[self[9]];if(p){FUN_020c2b84(self+1,p,7,4,4);self[11]=2;FUN_020c2d94(2,1,0);}}else{counter=self[3]+1;self[3]=counter;if(*(unsigned long long *)(self+6)<(unsigned long long)(long long)counter){next=self[9]+1;if(next>=3){FUN_0200d3a4(FUN_0200d16c(),0,1);}else if(data_0211e99c[next]){FUN_overlay_5__0211e938(self,1);}else FUN_020c2d94(2,2,2);}}}
