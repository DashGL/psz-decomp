// FUN_020d94c8 @ 0x020d94c8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern unsigned int FUN_020014d4(unsigned int,unsigned int,unsigned int);
void FUN_020d94c8(unsigned int *self,unsigned int src,unsigned int len,unsigned int *cnt){FUN_020014d4(*self,src,len);*cnt+=len;*self+=len;}
