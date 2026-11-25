// FUN_0207734c @ 0x0207734c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_0207734c @ 0x0207734c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize zero/-1/-1 words and copy default vector at +c; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207734c.txt.
 */
typedef struct Vec { unsigned int x,y,z; } Vec;
void *FUN_0207734c(char *self) {
    *(int *)self=0; *(int *)(self+4)=-1; *(int *)(self+8)=-1;
    *(Vec *)(self+12)=*(Vec *)0x020fc958; return self;
}
