// FUN_020cf3ec @ 0x020cf3ec (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// Record marking adapters; preserve unused r2 and fourth/fifth argument positions.
extern unsigned int *FUN_020cf0f8(void *,unsigned int,unsigned int);
unsigned int *FUN_020cf3ec(unsigned int key,unsigned int port,unsigned int unused,void *self){unsigned int *p=FUN_020cf0f8(self,key,port);if(p)*p=106;return p;}
