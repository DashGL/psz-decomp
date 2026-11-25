// FUN_020750d0 @ 0x020750d0 (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_020750d0 @ 0x020750d0 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update target position and conditionally initiate movement.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020750d0.txt.
 */
extern void FUN_020345f0(void *,void *),FUN_02034680(void *,void *),FUN_0206f0dc(void *,int,int);extern int FUN_02070870(void *,void *),FUN_0203bee0(void *),FUN_0203b41c(void *);void FUN_020750d0(char *s,int *position){int local[3],angle,speed,state;FUN_020345f0(local,position);angle=FUN_02070870(s,local);speed=FUN_0203bee0(s);FUN_02034680(s+588,position);state=*(int *)(s+576);if(state!=3 && state!=15 && !FUN_0203b41c(s))FUN_0206f0dc(s,angle,speed);}
