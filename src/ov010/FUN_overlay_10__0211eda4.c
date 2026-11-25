// flags: -O4,s
/* Copy wide keyboard text and zero-fill remaining output capacity. */
extern int FUN_overlay_10__0211f680(void *);
int FUN_overlay_10__0211eda4(int *self,unsigned short *out,int capacity){int i,j,wide=0;if((unsigned)self[0]<=3&&(11&(1u<<self[0])))wide=1;if(!wide)return -1;if(!FUN_overlay_10__0211f680(self))return -1;if(out&&*(unsigned short **)(self+34)){for(i=0;i<capacity&&i<self[36]&&(*(unsigned short **)(self+34))[i];i++)out[i]=(*(unsigned short **)(self+34))[i];for(j=i;j<capacity;j++)out[j]=0;return i;}return -1;}
