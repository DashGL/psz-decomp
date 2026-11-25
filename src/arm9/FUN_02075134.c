// FUN_02075134 @ 0x02075134 (0xd8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02075134 @ 0x02075134 (inventory code 0xd2, thumb)
// check: 2.0/sp2p3 target=0xd8 candidate=0xd8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply actor facing mode and update associated motion state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075134.txt.
 */
extern int FUN_020390f4(void *),FUN_0203b41c(void *),FUN_02038790(void *);extern void FUN_020391cc(void *,int),FUN_0206f090(void *,int),FUN_0206f7b8(void *),FUN_0206f7e4(void *);void FUN_02075134(char *s,int angle,int mode){if(FUN_020390f4(s))return;*(short *)(s+600)=angle;s[602]=mode;if(mode==5){*(short *)(s+192)=*(unsigned short *)(s+600);FUN_020391cc(s,0);return;}if(mode==2){if(!FUN_0203b41c(s)||*(int *)(s+576)==18){if(!FUN_02038790(s)){FUN_0206f090(s,*(unsigned short *)(s+600));return;}}}mode=*(unsigned char *)(s+602);if(mode==1){if(*(int *)(s+576)==1)return;*(short *)(s+192)=*(unsigned short *)(s+600);FUN_0206f7b8(s);*(int *)(s+576)=1;return;}if(mode==3){if(*(int *)(s+576)==2)return;*(short *)(s+192)=*(unsigned short *)(s+600);FUN_0206f7e4(s);*(int *)(s+576)=2;return;}if(*(int *)(s+576)!=0){FUN_0206f090(s,*(unsigned short *)(s+600));*(int *)(s+576)=0;}}
