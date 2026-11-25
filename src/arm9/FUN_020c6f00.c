// FUN_020c6f00 @ 0x020c6f00 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020c6d60(void *,int);
extern unsigned int FUN_020c6d90(void *,const void *,int);
unsigned int FUN_020c6f00(void *self,const void *src,int idx){FUN_020c6d60(self,idx);return FUN_020c6d90(self,src,idx);}
