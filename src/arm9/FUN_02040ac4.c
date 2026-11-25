// FUN_02040ac4 @ 0x02040ac4 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040ac4 @ 0x02040ac4 (inventory code 0x68, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b44/02040ac4.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern void FUN_02040b30(void *);
void FUN_02040ac4(char *s){int i;*(int *)(s+4)=-1;*(int *)s=0;*(int *)(s+8)=-1;*(int *)(s+12)=-1;*(int *)(s+16)=0;*(int *)(s+20)=0;*(int *)(s+24)=0;*(int *)(s+32)=0;*(int *)(s+36)=0;*(Vector *)(s+40)=*(Vector *)0x020fc958;*(int *)(s+252)=0;*(int *)(s+256)=0;*(int *)(s+260)=4096;*(int *)(s+264)=0;*(int *)(s+268)=4096;*(int *)(s+272)=0;*(int *)(s+276)=0;for(i=0;i<10;i++)FUN_02040b30(s+52+20*i);}
