// FUN_020c3768 @ 0x020c3768 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c3768 @ 0x020c3768
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Replace halfword spaces with 3000 until terminator, then call text helper with replacement code 42.
 * Evidence: scratch/coverage-root/batch4/020c3768.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020c3740(unsigned short *,unsigned int);
int FUN_020c3768(unsigned short *text) { unsigned short *p=text;while(*p) { if(*p==32)*p=0x3000;p++; }return FUN_020c3740(text,42); }
