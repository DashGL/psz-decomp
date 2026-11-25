// FUN_02057140 @ 0x02057140 (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02057140 @ 0x02057140 (inventory code 0x44, arm)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 220.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b220/02057140.txt.
 */
void FUN_02057140(unsigned int *out){volatile unsigned short *p=(volatile unsigned short *)0x04000204;out[0]=(*p&12)>>2;out[1]=(*p&16)>>4;*p=(*p&~12u)|12;*p=*p&~16u;}
