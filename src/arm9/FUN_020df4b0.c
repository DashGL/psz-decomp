// flags: -O4,p
// USA allocation/state adapters; full ABI and extents in root batch245.
extern char DAT_02100698[],DAT_021006b4[];void FUN_020df4b0(char *s,void **pairs,int count){int i;void (*release)(const char *,void *,unsigned int)=*(void (**)(const char *,void *,unsigned int))(s+4116);for(i=0;i<count;i++,pairs+=2){if(pairs[0]){release(DAT_02100698,pairs[0],0);pairs[0]=0;}if(pairs[1]){release(DAT_021006b4,pairs[1],0);pairs[1]=0;}}}
