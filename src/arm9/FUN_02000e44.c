// FUN_02000e44 @ 0x02000e44 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// FUN_02000e44 @ 0x02000e44 (0x18 including literals, ARM)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb
/* Return the runtime binary32 NaN converted to binary64. No incoming
 * arguments are consumed; the previous integer-pointer twin was invalid. */
typedef unsigned long long u64;
extern u64 FUN_02009bcc(unsigned);
u64 FUN_02000e44(void) {return FUN_02009bcc(*(const unsigned *)0x020f6220);}
