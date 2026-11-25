// FUN_0203eb14 @ 0x0203eb14 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203eb14 @ 0x0203eb14 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/0203eb14.txt.
 */
extern char *DAT_02108d08;
extern unsigned long long FUN_0200a5ac(int,int);
int FUN_0203eb14(unsigned int index) { char *p=DAT_02108d08; if(p) { unsigned long long qr=FUN_0200a5ac(*(int *)(p+0x24),40); if((unsigned int)(qr>>32)==10u*index) return 1; } return 0; }
