// FUN_0203afe8 @ 0x0203afe8 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203afe8 @ 0x0203afe8 (inventory code 0x7c, thumb)
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 48.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b48/0203afe8.txt.
 */
extern unsigned char *FUN_020384a4(void *,unsigned int);extern int FUN_020424b4(void *,int);extern void FUN_0203b298(void *,unsigned int);
void FUN_0203afe8(char *s,unsigned int arg){unsigned char *p=FUN_020384a4(s,*(unsigned int *)(s+208));if(p){void *obj=*(void **)(s+140);if(obj&&p[2]&&p[3]){int value=FUN_020424b4(obj,0);if(!value){s[581]=1;s[582]=1;}if(value>=((int)p[2]<<12)&&*(signed char *)(s+581)==1){FUN_0203b298(s,arg);s[581]=0;}if(value>=((int)p[3]<<12)&&*(signed char *)(s+582)==1){FUN_0203b298(s,arg);s[582]=0;}}}}
