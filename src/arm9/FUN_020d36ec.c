// FUN_020d36ec @ 0x020d36ec (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int D_0211d4c4;
extern void FUN_020d36e0(void *);
extern void FUN_020c735c(int,void (*)(void *),int);
void FUN_020d36ec(int *self){if(D_0211d4c4!=1){D_0211d4c4=1;FUN_020c735c(self[3],FUN_020d36e0,0);D_0211d4c4=0;}}
