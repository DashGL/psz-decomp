// FUN_020926d0 @ 0x020926d0 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020926d0 @ 0x020926d0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word vector and initialize fields from register and stack arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020926d0.txt.
 */
typedef struct { unsigned int a,b,c; } Vector; void *FUN_020926d0(char *self,Vector *source,unsigned short tag,unsigned int value,unsigned int shared,unsigned int last) { *(Vector *)self=*source; *(unsigned short *)(self+12)=tag; *(unsigned int *)(self+16)=value; *(unsigned int *)(self+20)=shared; *(unsigned int *)(self+24)=shared; *(unsigned int *)(self+28)=0; *(unsigned int *)(self+32)=3; *(unsigned int *)(self+36)=0; *(unsigned int *)(self+40)=last; *(unsigned short *)(self+44)=0; return self; }
