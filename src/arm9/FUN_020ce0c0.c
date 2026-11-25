// FUN_020ce0c0 @ 0x020ce0c0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern void FUN_020c7bec(void *);
void FUN_020ce0c0(void **entry){FUN_020c7bec(entry[0]);entry[0]=0;FUN_020c7bec(entry[1]);entry[1]=0;}
