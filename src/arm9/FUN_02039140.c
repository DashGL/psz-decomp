// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// Unsigned halfword field evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned char a[30];}Table_02039140;extern const Table_02039140 DAT_020ed19c;
// FUN_02039140 @ 0x02039140 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 41.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b41/02039140.txt.
 */
extern int FUN_020390f4(void *);extern int FUN_020385b4(void *,int,int,unsigned int);
int FUN_02039140(char *s,int a,int b,int mode){if(!FUN_020390f4(s)){unsigned char table[30];unsigned int flag=0,state;int i;*(Table_02039140*)table=DAT_020ed19c;state=*(unsigned int *)(s+576);if(mode==4&&state<30)flag=table[state];return FUN_020385b4(s,a,b,flag);}*(unsigned int *)(s+248)|=0x10000000;return 0;}
