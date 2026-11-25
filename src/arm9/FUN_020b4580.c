// FUN_020b4580 @ 0x020b4580 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020b4580 @ 0x020b4580 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Spawn effect descriptor above referenced position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b4580.txt.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_0203666c(void *),FUN_02035408(void *,int,int,int);extern void *FUN_02046d94(void *,int,int);void *FUN_020b4580(char *s){Vec position=*(Vec *)(*(char **)(s+20)+92),adjusted;int d[25];FUN_0203666c(d);FUN_02035408(&adjusted,position.x,position.y+2048,position.z);*(Vec *)(d+8)=adjusted;d[17]=1;d[18]=22;d[19]=-1;d[21]=52;return FUN_02046d94(d,0,0);}
