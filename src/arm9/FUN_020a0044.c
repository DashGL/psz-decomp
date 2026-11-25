// FUN_020a0044 @ 0x020a0044 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020a0044 @ 0x020a0044 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize typed object and save initial position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0044.txt.
 */
typedef struct {int v[3];} Vec;extern char UNK_020fb8cc[],UNK_020fb8f4[];extern void FUN_0203020c(void *,void *,int),FUN_02076574(void *,int,int);extern int FUN_0203068c(void *),FUN_02030dd0(void *);void *FUN_020a0044(char *s,void *source){FUN_0203020c(s,source,27);FUN_02076574(s+48,FUN_0203068c(s),8);*(void **)s=UNK_020fb8cc;*(void **)(s+48)=UNK_020fb8f4;*(void **)(s+68)=**(void ***)(s+4);*(int *)(s+72)=0;*(int *)(s+76)=FUN_02030dd0(s);*(int *)(s+80)=0;*(Vec *)(s+84)=*(Vec *)(s+28);*(short *)(s+96)=364;*(short *)(s+64)=0;*(short *)(s+66)=21;return s;}
