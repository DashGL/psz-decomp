// FUN_overlay_22__021a01e8 @ 0x021a01e8 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a01e8 @ 0x021a01e8 (full extent 0x94, thumb)
// check: vers=2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete destructor. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch593.md. */
typedef void (*Destroy)(void *);extern void FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void *FUN_overlay_22__021a01e8(unsigned *self){self[0]=0x021a16ec;if(self[28]){if(self[28])((Destroy)(*(unsigned **)self[28])[4])((void *)self[28]);self[28]=0;}if(self[27]){if(self[27])((Destroy)(*(unsigned **)self[27])[4])((void *)self[27]);self[27]=0;}if(self[26]){if(self[26])((Destroy)(*(unsigned **)self[26])[4])((void *)self[26]);self[26]=0;}if(self[25]){if(self[25])((Destroy)(*(unsigned **)self[25])[4])((void *)self[25]);self[25]=0;}if(self[12]){if(self[12])((Destroy)(*(unsigned **)self[12])[1])((void *)self[12]);self[12]=0;}if(self[13]){if(self[13])((Destroy)(*(unsigned **)self[13])[1])((void *)self[13]);self[13]=0;}if(self[14]){if(self[14])((Destroy)(*(unsigned **)self[14])[1])((void *)self[14]);self[14]=0;}FUN_02037848(self);return self;}
