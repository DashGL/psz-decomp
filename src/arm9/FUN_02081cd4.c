// FUN_02081cd4 @ 0x02081cd4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02081cd4 @ 0x02081cd4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For key byte +8 zero, resolve subkey at +4 through manager then set record byte bit one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02081cd4.txt.
 */
extern unsigned char *FUN_02030a98(void *,void *);
void FUN_02081cd4(signed char *key) { if(key[8]==0) { unsigned char *record=FUN_02030a98(*(void **)0x02108c54,key+4); record[0]|=2; } }
