// FUN_020b6ad4 @ 0x020b6ad4 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020b6ad4 @ 0x020b6ad4 (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reconstructed descriptor-copy twin, independently verified against USA bytes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6ad4.txt.
 */
typedef struct {int a,b,c,d;} Raw;typedef struct {unsigned char b[4];} Bytes;typedef struct {int x,y,z;} V;extern void *FUN_02086e3c(void);extern Raw *FUN_020b07b0(void *);extern int FUN_0203a1fc(void *);int FUN_020b6ad4(void *unused,char *out){Raw item=*FUN_020b07b0(FUN_02086e3c());if(FUN_0203a1fc(&item))return 0;*(Bytes *)out=*(Bytes *)&item;*(V *)(out+4)=*(V *)((char *)&item+4);return 1;}
