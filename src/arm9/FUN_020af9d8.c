// FUN_020af9d8 @ 0x020af9d8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020af9d8 @ 0x020af9d8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy position to receiver +24 then add it into receiver +c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af9d8.txt.
 */
typedef struct { unsigned int a,b,c; } Triple; extern void FUN_02036848(void *,void *); void FUN_020af9d8(char *self,Triple *source) { *(Triple *)(self+36)=*source; FUN_02036848(self+12,source); }
