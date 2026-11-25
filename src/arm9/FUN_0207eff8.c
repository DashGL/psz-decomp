// FUN_0207eff8 @ 0x0207eff8 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207eff8 @ 0x0207eff8 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update effect and add scalar to all vector components when active.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207eff8.txt.
 */
typedef struct {int x,y,z;} Vector;extern int FUN_02047440(void *),FUN_0204770c(void *);extern void FUN_02035408(void *,int,int,int);int FUN_0207eff8(char *self){int result=FUN_02047440(self);if(!result && FUN_0204770c(self)){Vector old=*(Vector *)(self+80),out;int delta=*(int *)(self+260);FUN_02035408(&out,delta+old.x,delta+old.y,delta+old.z);*(Vector *)(self+80)=out;}return result;}
