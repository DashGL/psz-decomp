// FUN_020af9f8 @ 0x020af9f8 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020af9f8 @ 0x020af9f8 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Preserve position and apply scaled velocity with random vertical component.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af9f8.txt.
 */
typedef struct {int x,y,z;} V;extern int FUN_02071188(void);extern void FUN_02083a70(void *,int),FUN_02036848(void *,void *);void FUN_020af9f8(char *s){*(V *)(s+72)=*(V *)(s+12);*(int *)(s+28)=(int)(((long long)FUN_02071188()*410+2048)>>12);FUN_02083a70(s+24,4301);FUN_02036848(s+12,s+24);}
