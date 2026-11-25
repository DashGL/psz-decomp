// FUN_020b3448 @ 0x020b3448 (0x104, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020b3448 @ 0x020b3448 (inventory code 0xea, thumb)
// check: 2.0/sp2p3 target=0x104 candidate=0x104 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct a moving object with randomized starting height and motion parameters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3448.txt.
 */
typedef struct {int x,y,z;} Vec;extern Vec UNK_020fc958;extern char UNK_020fc740[],UNK_0211c844[];extern void FUN_020302dc(void *);extern char *FUN_020ba894(int),*FUN_02034700(void *);extern int FUN_020b3410(void *,int);char *FUN_020b3448(char *s){char *p;*(void **)s=UNK_020fc740;*(int *)(s+4)=0;FUN_020302dc(s+8);*(int *)(s+12)=-1;*(Vec *)(s+28)=UNK_020fc958;*(Vec *)(s+40)=UNK_020fc958;*(Vec *)(s+52)=UNK_020fc958;*(int *)(s+64)=8192;*(int *)(s+68)=0;*(int *)(s+72)=0;*(int *)(s+76)=0;*(short *)(s+80)=0;*(short *)(s+82)=0;*(short *)(s+84)=0;*(short *)(s+86)=0;p=FUN_020ba894(12);if(p)p=FUN_02034700(p);*(char **)(s+4)=p;if(p)*(int *)(p+8)=1;*(int *)(s+32)=((long long)FUN_020b3410(UNK_0211c844,4095)*8192+2048)>>12;*(int *)(s+64)=(((long long)FUN_020b3410(UNK_0211c844,4095)*3277+2048)>>12)+6144;*(int *)(s+72)=FUN_020b3410(UNK_0211c844,64)+160;*(int *)(s+68)=FUN_020b3410(UNK_0211c844,65535);return s;}
