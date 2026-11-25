// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
typedef struct{unsigned int w[8];} Block_020af4d0;
extern const Block_020af4d0 UNK_020f55a4;
// FUN_020af4d0 @ 0x020af4d0 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy resource defaults and initialize configured resource.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Concrete aggregate layout and access widths recovered.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct {unsigned int a,b;} Pair;extern void FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int),FUN_020c3788(void *,void *,int,int,int);void FUN_020af4d0(char *self){Pair data[4];int i;*(Block_020af4d0 *)data=UNK_020f55a4;FUN_020c35d4(self+24,data);FUN_020c38f0(self+24,0);FUN_020c3788(self+24,(void *)0x020fc540,8,0,2);}
