// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// Native receiver-first dispatch: notes/sessions/resume-low-2026-11-12.md
// Full per-function ROM, prior C, and concrete table evidence in accompanying proof.
//cpp
struct Receiver_0203f078 {virtual ~Receiver_0203f078();};
// FUN_0203f078 @ 0x0203f078 (inventory code 0x7c, thumb)
// check: 2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 119.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b119/0203f078.txt.
 */
extern "C" {
extern void *DAT_02108c84;
extern void FUN_02037b88(void *,unsigned int),FUN_02037d20(void *,unsigned int);void FUN_0203f078(char *s,int index){void *manager=DAT_02108c84,*obj;unsigned short *a,*b,*c;if(index>=0&&index<4){if(manager){a=(unsigned short *)(s+1192+6*index);FUN_02037b88(manager,*a);*a=65535;b=(unsigned short *)(s+1196+6*index);FUN_02037d20(manager,*b);*b=65535;c=(unsigned short *)(s+1194+6*index);FUN_02037d20(manager,*c);*c=65535;}obj=*(void **)(s+1120+4*index);if(obj){delete (Receiver_0203f078 *)obj;*(void **)(s+1120+4*index)=0;}}}

}
