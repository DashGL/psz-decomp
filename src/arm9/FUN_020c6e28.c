// FUN_020c6e28 @ 0x020c6e28 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020c6e38(int *,const void *,int);
void FUN_020c6e28(int *self,const void *item){if(self)FUN_020c6e38(self,item,self[0]);}
