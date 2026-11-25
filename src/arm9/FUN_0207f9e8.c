// FUN_0207f9e8 @ 0x0207f9e8 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207f9e8 @ 0x0207f9e8 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize entity and nested component from source descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f9e8.txt.
 */
extern char UNK_020fa690[],UNK_020fa6b4[];extern void FUN_0203020c(void *,void *,int),FUN_02076574(void *,int,int),FUN_02076c4c(void *,int),FUN_020304b8(void *,void *);extern int FUN_0203068c(void *);void *FUN_0207f9e8(char *s,void *source){int v[3];FUN_0203020c(s,source,8);FUN_02076574(s+48,FUN_0203068c(s),11);*(void **)s=UNK_020fa690;*(void **)(s+48)=UNK_020fa6b4;*(int **)(s+68)=**(int ***)(s+4);*(int *)(s+72)=0;FUN_02076c4c(v,**(int **)(s+68));FUN_020304b8(s,v);*(unsigned short *)(s+64)=0;*(unsigned short *)(s+66)=31;return s;}
