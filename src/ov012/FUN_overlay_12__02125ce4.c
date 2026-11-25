// FUN_overlay_12__02125ce4 @ 0x02125ce4 (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125ce4 @ 0x02125ce4 (thumb)
// check: 2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Build dialog state with resource bindings and two complete palette records. */
typedef union{unsigned short h[8];unsigned words[4];}Records;
extern void *FUN_overlay_12__02131d80(void *,void *,int);extern void FUN_overlay_12__02131cf4(void *,int,int),FUN_overlay_12__02131c80(void *,int);
#pragma thumb off
extern void *FUN_02001540(void *,int,unsigned);
#pragma thumb on
void *FUN_overlay_12__02125ce4(int *self,void *resource,int handle,unsigned short a,unsigned short b){Records records;int i;FUN_overlay_12__02131d80(self,*(void **)0x0213f2dc,0);self[0]=0x0213dd78;self[16]=0;self[21]=-1;self[22]=0;self[23]=(int)resource;self[24]=0;self[89]=handle;((unsigned short *)self)[180]=a;((unsigned short *)self)[181]=b;for(i=0;i<4;i++)self[17+i]=-1;FUN_02001540(self+25,0,256);records=*(Records *)0x02138104;records.h[2]=((unsigned short *)self)[180];records.h[6]=((unsigned short *)self)[181];FUN_overlay_12__02131cf4(&records,self[89],2);FUN_overlay_12__02131c80((void *)0x0213829c,32);return self;}
