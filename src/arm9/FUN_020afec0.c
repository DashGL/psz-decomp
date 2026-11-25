// FUN_020afec0 @ 0x020afec0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020afec0 @ 0x020afec0 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate constructed saved-state array and clear each entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afec0.txt.
 */
extern void FUN_020963b0(void *),FUN_02080d10(void *);extern void *FUN_0200c2dc(int,int,int,void (*)(void *),void (*)(void *));void *FUN_020afec0(char *s,int count){int i;*(unsigned int *)s=0x020fc5d8;*(int *)(s+4)=count;*(int *)(s+8)=0;*(int *)(s+12)=0;*(int *)(s+16)=1;*(int *)(s+20)=0;*(void **)(s+12)=FUN_0200c2dc(count,772,0,FUN_020963b0,0);for(i=0;i<count;i++)FUN_02080d10(*(char **)(s+12)+772*i);return s;}
