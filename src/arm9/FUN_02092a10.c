// FUN_02092a10 @ 0x02092a10 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02092a10 @ 0x02092a10 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set state and copy three-word vector unless state is one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02092a10.txt.
 */
typedef struct { unsigned int a,b,c; } Vector; extern void FUN_0203067c(void *,unsigned int); void FUN_02092a10(char *self,Vector *source,unsigned int value) { if((unsigned char)self[46]!=1) { FUN_0203067c(self,value); *(Vector *)(self+292)=*source; } }
