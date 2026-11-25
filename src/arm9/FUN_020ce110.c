// FUN_020ce110 @ 0x020ce110 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern void FUN_020c6de0(void *);
void FUN_020ce110(char **object){char *state=*object;void *array=*(void **)(state+948);if(array){FUN_020c6de0(array);*(void **)(state+948)=0;}}
