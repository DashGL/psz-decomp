// FUN_0207da30 @ 0x0207da30 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0207da30 @ 0x0207da30 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base and table, copy default vector at +104, then clear word/halfword/word fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207da30.txt.
 */
typedef struct Vec { int x,y,z; } Vec;
extern void FUN_0204734c(void *);
void *FUN_0207da30(char *self) {
    FUN_0204734c(self); *(unsigned int *)self=0x020fa520;
    *(Vec *)(self+0x104)=*(Vec *)0x020fc958;
    *(unsigned int *)(self+0x110)=0; *(unsigned short *)(self+0x114)=0; *(unsigned int *)(self+0x118)=0;
    return self;
}
