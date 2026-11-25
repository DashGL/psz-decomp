// FUN_020c6d90 @ 0x020c6d90 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// USA state and indexed-copy operations; helper return and store order retained.
extern unsigned int FUN_020c6e10(unsigned int,int);
extern unsigned int FUN_020014d4(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020c6d90(unsigned int self,unsigned int source,int index){unsigned int dest=FUN_020c6e10(self,index);return FUN_020014d4(dest,source,*(unsigned int *)(self+8));}
