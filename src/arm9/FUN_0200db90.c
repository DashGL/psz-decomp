// FUN_0200db90 @ 0x0200db90 (0x98, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_0200d7b8(unsigned int);
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern unsigned int FUN_0200de38(unsigned int);
extern unsigned int FUN_0200de70(int);
extern unsigned int FUN_0200dd94(unsigned int,unsigned int);
unsigned int FUN_0200db90(unsigned int self,unsigned int index,int priority){unsigned int owner=0x02102288+index*36,node=*(unsigned int *)self;if(node)FUN_0200d7b8(self);if(*(unsigned short *)(owner+8)>=*(unsigned int *)(owner+24)){node=FUN_02011b20(owner,0);if(!node)return 0;if(priority<(int)*(unsigned char *)(node+61))return 0;FUN_0200de38(node);}node=FUN_0200de70(priority);if(!node)return 0;FUN_0200dd94(owner,node);*(unsigned int *)node=self;*(unsigned int *)self=node;return node;}
