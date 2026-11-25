// FUN_020af64c @ 0x020af64c (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020af64c @ 0x020af64c (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base, store displacement at +10c, reconstruct three-word vector with shifted second component.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af64c.txt.
 */
typedef struct Vec { int x,y,z; } Vec;
extern void FUN_020473e8(void *,void *,int), FUN_02035408(Vec *,int,int,int);
void FUN_020af64c(char *self,void *arg,int shift) {
    Vec vector;
    FUN_020473e8(self,arg,0); *(int *)(self+0x10c)=shift;
    FUN_02035408(&vector,*(int *)(self+0x5c),shift+*(int *)(self+0x60),*(int *)(self+0x64));
    *(Vec *)(self+0x5c)=vector;
}
