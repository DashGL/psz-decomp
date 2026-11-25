// FUN_020d5104 @ 0x020d5104 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020c6e0c(void *);
extern void **FUN_020c6e10(void *,int);
extern void FUN_020d4ee4(void *);
void FUN_020d5104(void **self){int i=FUN_020c6e0c(self[4])-1;if(i>=0){do{FUN_020d4ee4(*FUN_020c6e10(self[4],i));}while(--i>=0);}}
