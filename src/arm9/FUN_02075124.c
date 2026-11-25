// FUN_02075124 @ 0x02075124 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02075124 @ 0x02075124 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy supplied vector to embedded +24c using helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075124.txt.
 */
extern void FUN_02034680(void *,void *);
void FUN_02075124(char *self,void *vector) { FUN_02034680(self+0x24c,vector); }
