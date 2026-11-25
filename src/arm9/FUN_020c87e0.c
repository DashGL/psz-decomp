// FUN_020c87e0 @ 0x020c87e0 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// USA runtime callback/collection helper; full ABI and extent in root batch241.
extern int *FUN_020c7e54(void *);
int FUN_020c87e0(void *object){int *s=FUN_020c7e54(object);if(!s[3])return 1;if(s[5]||s[8]||s[4]||s[9]||s[6]||s[7]||s[10])return 0;return 1;}
