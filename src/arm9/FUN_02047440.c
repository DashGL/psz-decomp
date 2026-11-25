// FUN_02047440 @ 0x02047440 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02047440 @ 0x02047440 (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 52.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b52/02047440.txt.
 */
typedef struct{unsigned int w[9];} Matrix;extern int FUN_0204b5cc(void *);extern void FUN_0204bf88(void *);
int FUN_02047440(char *s){int result=FUN_0204b5cc(s);if(!result){unsigned int flags=*(unsigned int *)(s+228);if(flags&0x30000){char *m=*(char **)0x02108c84;if(m){char *p=*(char **)(m+64+4**(int *)(m+100));if(p){if(flags&0x20000){*(unsigned short *)(s+104)=65536-*(unsigned short *)(p+128);FUN_0204bf88(s);}if(*(unsigned int *)(s+228)&0x10000){*(unsigned short *)(s+106)=*(unsigned short *)(p+130);FUN_0204bf88(s);}p=*(char **)(s+48);if(p)*(Matrix *)(p+144)=*(Matrix *)(s+112);}}}}return result;}
