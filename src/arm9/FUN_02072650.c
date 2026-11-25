// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// FUN_02072650 @ 0x02072650
// check: 2.0/sp2p3 target=0xd4 candidate=0xd4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and initialize an effect descriptor slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072650.txt.
 */
extern char *FUN_02036888(void *,int);extern int FUN_0207f770(void *);int FUN_02072650(char *s,int index,int mode,int extra){char *resource=*(char **)(s+20),*slot,*desc,*payload;int i=0,count=*(int *)(s+172);for(;i<count;i++){slot=*(char **)(s+168)+52*i;if(*(signed char *)(slot+18)&1)continue;slot[20]=index;desc=*(char **)(resource+24)+8*index;switch(*(signed char *)desc){case 0:payload=*(char **)(desc+4);*(int *)(slot+36)=0;*(int *)(slot+40)=*(int *)payload;break;case 1:payload=*(char **)(desc+4);*(int *)(slot+36)=1;*(int *)(slot+40)=*(int *)(payload+4);*(int *)(slot+44)=*(int *)(payload+8);*(short *)(slot+48)=*(unsigned short *)payload;break;}*(short *)(slot+22)=*(short *)(FUN_02036888(s,*(signed char *)(desc+1))+8);if(mode==0)mode=FUN_0207f770(s+100)==3?2:1;if(mode==1)*(int *)(slot+4)|=1;else if(mode==2)*(int *)(slot+4)|=3;if(extra)slot[18]|=4;slot[18]|=3;return i;}return -1;}
