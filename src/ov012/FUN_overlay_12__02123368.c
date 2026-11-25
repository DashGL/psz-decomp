// FUN_overlay_12__02123368 @ 0x02123368 (0x82, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02123368 @ 0x02123368 (thumb)
// check: 2.0/sp2p3 target=0x82 candidate=0x82 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Copy wide keyboard text and zero-fill remaining output capacity. */
extern int FUN_overlay_12__02123df4(void *);
int FUN_overlay_12__02123368(int *self,unsigned short *out,int capacity){int i,j,wide=0;if((unsigned)self[0]<=3&&(11&(1u<<self[0])))wide=1;if(!wide)return -1;if(!FUN_overlay_12__02123df4(self))return -1;if(out&&*(unsigned short **)(self+34)){for(i=0;i<capacity&&i<self[36]&&(*(unsigned short **)(self+34))[i];i++)out[i]=(*(unsigned short **)(self+34))[i];for(j=i;j<capacity;j++)out[j]=0;return i;}return -1;}
