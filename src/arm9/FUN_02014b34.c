// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_021056ec[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived resource and list helper.
extern void FUN_020137f4(void *);
void FUN_02014b34(unsigned int *records,unsigned int count,unsigned int arg){unsigned int *g=(unsigned int *)((unsigned int)DAT_021056ec + 0u),i=0;g[0]=arg;g[1]=count;g[2]=(unsigned int)records;if(!count)return;do{FUN_020137f4(records);records[3]=0;records[4]=0;records[5]=0;records[6]=0;records[7]=0;records[8]=0;records[9]=0;records[10]=0;records[11]=0;i++;records+=12;}while(i<count);}
