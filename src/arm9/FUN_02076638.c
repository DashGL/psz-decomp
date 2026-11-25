// FUN_02076638 @ 0x02076638 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076638 @ 0x02076638 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 120-byte object, initialize with supplied argument if allocation succeeds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076638.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_02076650(void *,void *);
void *FUN_02076638(void *arg) { void *object=FUN_020ba894(120); if(object) object=FUN_02076650(object,arg); return object; }
