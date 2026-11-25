// FUN_020af8e0 @ 0x020af8e0 (0xe4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020af8e0 @ 0x020af8e0 (inventory code 0xd8, thumb)
// check: 2.0/sp2p3 target=0xe4 candidate=0xe4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct a randomized effect motion object from template vectors.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af8e0.txt.
 */
typedef struct{int x,y,z;} Vec;extern char UNK_020fc598[];extern Vec UNK_020fc958;extern int FUN_02071188(void),FUN_0205c86c(void *);char *FUN_020af8e0(char *s){int r;*(void **)s=UNK_020fc598;*(int *)(s+4)=-1;*(int *)(s+8)=2048;*(Vec *)(s+12)=UNK_020fc958;*(Vec *)(s+24)=UNK_020fc958;*(Vec *)(s+36)=UNK_020fc958;*(short *)(s+48)=0;*(int *)(s+52)=0;*(int *)(s+56)=0;*(int *)(s+60)=0;*(int *)(s+64)=0;*(int *)(s+68)=0xffff000;*(Vec *)(s+72)=UNK_020fc958;*(Vec *)(s+84)=UNK_020fc958;*(int *)(s+96)=0;*(int *)(s+100)=0;r=FUN_02071188()-2048;*(int *)(s+12)=(int)(((long long)r*8192+2048)>>12);r=FUN_02071188()-2048;*(int *)(s+20)=(int)(((long long)r*8192+2048)>>12);*(int *)(s+24)=FUN_02071188()-2048;*(int *)(s+32)=FUN_02071188()-2048;*(int *)(s+52)=FUN_0205c86c(s+24);return s;}
