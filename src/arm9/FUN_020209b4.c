// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02020644(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020209b4(unsigned int list,unsigned int free_list,unsigned int start,unsigned int size){unsigned int range[2],node,head;range[0]=start;range[1]=start+size;FUN_02020644(list,free_list,(unsigned int)range);node=*(unsigned int *)free_list;if(node)*(unsigned int *)free_list=*(unsigned int *)(node+12);if(!node)return 0;*(unsigned int *)node=range[0];*(unsigned int *)(node+4)=range[1]-range[0];*(unsigned int *)(node+8)=0;*(unsigned int *)(node+12)=0;head=*(unsigned int *)list;if(head)*(unsigned int *)(head+8)=node;*(unsigned int *)(node+12)=*(unsigned int *)list;*(unsigned int *)(node+8)=0;*(unsigned int *)list=node;return 1;}
