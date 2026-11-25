// FUN_02053424 @ 0x02053424 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02053424 @ 0x02053424 (inventory code 0x18, arm)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 91.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b91/02053424.txt.
 */
void FUN_02053424(void){volatile unsigned short *p=(volatile unsigned short *)0x027fff96;unsigned int value=*p;if(value&1)*p=value&~1u;}
