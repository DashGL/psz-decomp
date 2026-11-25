// FUN_020d80f4 @ 0x020d80f4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020c718c(void *);
extern void FUN_020c7bec(void *);
void FUN_020d80f4(void ***self){void **p=*self;FUN_020c718c(p[6]);p[6]=0;FUN_020c7bec(p);}
