// FUN_020c89b4 @ 0x020c89b4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020ccaa0(void *,int);
extern void FUN_020c9344(void *);
void FUN_020c89b4(int **self){if(self&&*self&&!(*self)[66]){FUN_020ccaa0(self,1);FUN_020c9344(self);}}
