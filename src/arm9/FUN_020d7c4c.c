// FUN_020d7c4c @ 0x020d7c4c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020c7478(unsigned int);
extern void FUN_020d7a44(char *);
void FUN_020d7c4c(char *self){FUN_020c7478(*(unsigned int *)(self+0x20));*(int *)(self+0x20)=-1;FUN_020d7a44(self+0x14);FUN_020d7a44(self+8);}
