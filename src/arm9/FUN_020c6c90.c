// FUN_020c6c90 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived resource or movement logic.
extern int FUN_02098ed0(void *,void *);extern int FUN_02078198(int);extern unsigned int FUN_02035b60(unsigned int);extern void FUN_02098b48(void *,void *,int);
void FUN_020c6c90(char *self,unsigned int unused,int duration){unsigned int pos[3];char *p;if(!FUN_02098ed0(self,pos))return;p=*(char **)(self+12);if(!FUN_02078198(*(int *)(p+12)))return;if(duration>0)*(int *)(self+8)=duration;else *(unsigned int *)(self+8)=FUN_02035b60(150);if(FUN_02035b60(2)==0){*(unsigned short *)(self+4)=1;FUN_02098b48(*(void **)(*(char **)(self+12)+8),pos,1);}else{*(unsigned short *)(self+4)=0;FUN_02098b48(*(void **)(*(char **)(self+12)+8),pos,0);}}
