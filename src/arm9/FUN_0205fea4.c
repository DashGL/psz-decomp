// FUN_0205fea4 @ 0x0205fea4 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_0205fea4 @ 0x0205fea4 (inventory code 0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 185.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b185/0205fea4.txt.
 */
extern void FUN_0205fe18(const unsigned int *,unsigned int *,const unsigned char *,unsigned int);unsigned int FUN_0205fea4(const unsigned int *table,const unsigned char *data,unsigned int count){unsigned int crc=~0u;FUN_0205fe18(table,&crc,data,count);return ~crc;}
