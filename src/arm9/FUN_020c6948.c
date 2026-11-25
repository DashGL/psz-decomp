// FUN_020c6948 @ 0x020c6948 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
extern void FUN_020c6960(void *);
void FUN_020c6948(char *self){int mode=*(int *)(self+280);if(mode==0)return;if(mode==1)FUN_020c6960(self);}
