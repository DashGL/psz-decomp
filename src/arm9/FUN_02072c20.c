// FUN_02072c20 @ 0x02072c20 (0xc8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072c20 @ 0x02072c20 (inventory code 0xba, thumb)
// check: 2.0/sp2p3 target=0xc8 candidate=0xc8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Queue or begin a requested screen transition.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072c20.txt.
 */
extern int FUN_020a53c8(void (*)(void)),FUN_020c2e38(void),FUN_020c2d94(int,int,int);extern void FUN_02072dac(void),FUN_020c3064(int);extern int UNK_020f9aa8,UNK_0211a200;int FUN_02072c20(int *s,int request,int fade){if(!s[4]&&request!=-1){s[3]=request;return 0;}if(!s[5]&&s[2]==2&&request!=-1&&FUN_020a53c8(FUN_02072dac)==1){UNK_020f9aa8=request;UNK_0211a200=1;s[5]=1;return 1;}if(request==-1){s[1]=request;if(fade&&!s[8]&&!FUN_020c2e38()){FUN_020c2d94(2,2,2);s[8]=4;}else{FUN_020c3064(2);s[8]=1;}return 1;}if(request< -1||request>=19)return 0;if(s[8])return 0;s[1]=request;if(fade&&s[8]!=4){FUN_020c2d94(2,2,2);s[8]=4;}else s[8]=1;return 1;}
