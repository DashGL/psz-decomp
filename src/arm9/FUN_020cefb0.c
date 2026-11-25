// FUN_020cefb0 @ 0x020cefb0 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern void FUN_020c7bec(void *),FUN_020c6de0(void *);
void FUN_020cefb0(void *unused,char *state){FUN_020c7bec(*(void **)(state+28));*(void **)(state+28)=0;FUN_020c7bec(*(void **)(state+44));*(void **)(state+44)=0;if(*(void **)(state+60)){FUN_020c6de0(*(void **)(state+60));*(void **)(state+60)=0;}FUN_020c7bec(state);}
