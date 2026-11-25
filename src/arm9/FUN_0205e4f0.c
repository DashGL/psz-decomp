// FUN_0205e4f0 @ 0x0205e4f0 (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205e4f0 @ 0x0205e4f0 (inventory code 0x44, arm)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 220.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b220/0205e4f0.txt.
 */
void FUN_0205e4f0(volatile unsigned short *p,int value){unsigned int bits=*p,mode=bits&192;if(value<0){if(mode==128)*p=(bits&~192u)|192;p[2]=0u-(unsigned int)value;}else{if(mode==192)*p=(bits&~192u)|128;p[2]=value;}}
