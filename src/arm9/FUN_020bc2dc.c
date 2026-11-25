// FUN_020bc2dc @ 0x020bc2dc (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020bc2dc @ 0x020bc2dc (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize loader state and bounded three-character identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc2dc.txt.
 */
extern void FUN_0200c938(void *,unsigned int),FUN_02003d54(void *,void *,unsigned int);void *FUN_020bc2dc(char *s,void *name,int mode){*(unsigned int *)s=0x020fc970;*(int *)(s+4)=0;*(int *)(s+112)=0;FUN_0200c938(s+116,4);*(int *)(s+120)=0;*(int *)(s+124)=mode;*(int *)(s+128)=1;FUN_02003d54(s+116,name,4);s[119]=0;return s;}
