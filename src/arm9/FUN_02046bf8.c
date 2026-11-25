// FUN_02046bf8 @ 0x02046bf8 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02046bf8 @ 0x02046bf8 (inventory code 0x78, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 119.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b119/02046bf8.txt.
 */
extern void FUN_02041510(void *),FUN_02035408(void *,unsigned int,unsigned int,unsigned int);extern void *FUN_020474cc(void *);void *FUN_02046bf8(unsigned short *key){unsigned int data[21];int i;FUN_02041510(data);data[4]=~0u;data[5]=~0u;data[6]=4096;data[7]=0;FUN_02035408(data+8,0,0,0);FUN_02035408(data+11,4096,4096,4096);((unsigned short *)data)[28]=0;((unsigned short *)data)[29]=0;((unsigned short *)data)[30]=0;((unsigned short *)data)[31]=0;data[16]=~0u;data[17]=~0u;data[18]=~0u;data[19]=~0u;data[20]=0;data[7]|=2;((unsigned short *)data)[0]=key[0];((unsigned short *)data)[1]=key[1];for(i=0;i<5;i++)((unsigned short *)data)[2+i]=key[2+i];return FUN_020474cc(data);}
