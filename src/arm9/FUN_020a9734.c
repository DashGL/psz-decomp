// FUN_020a9734 @ 0x020a9734 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020a9734 @ 0x020a9734 (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate constructed saved-state array and clear each entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9734.txt.
 */
extern void FUN_020963b0(void *),FUN_02080d10(void *);extern void *FUN_0200c2dc(int,int,int,void (*)(void *),void (*)(void *));void *FUN_020a9734(char *s,int count){int i;*(unsigned int *)s=0x020fc3f8;*(int *)(s+4)=count;*(int *)(s+8)=0;*(int *)(s+12)=0;*(int *)(s+16)=0;*(int *)(s+20)=0;*(int *)(s+24)=0;*(int *)(s+28)=1;*(void **)(s+12)=FUN_0200c2dc(count,772,0,FUN_020963b0,0);for(i=0;i<count;i++)FUN_02080d10(*(char **)(s+12)+772*i);return s;}
