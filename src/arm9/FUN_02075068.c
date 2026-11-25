// FUN_02075068 @ 0x02075068 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02075068 @ 0x02075068 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve handle, release stored object, invalidate record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075068.txt.
 */
extern void **FUN_0207501c(void *,int);
extern void FUN_020472bc(void *), FUN_02075080(void *);
void FUN_02075068(void *self,int handle) { void **record=FUN_0207501c(self,handle); if(record) { FUN_020472bc(record[0]); FUN_02075080(record); } }
