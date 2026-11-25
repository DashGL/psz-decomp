// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
typedef struct{unsigned char b[4];} Key_02070110;
// FUN_02070110 @ 0x02070110 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate item header and apply consumable to actor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Concrete aggregate layout and access widths recovered.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
extern int FUN_0203a820(void *,int),FUN_0203a1a8(void *,int),FUN_0204ead0(int,int,int);extern void FUN_0203b3b4(void *);void FUN_02070110(char *s,unsigned char *item,int arg){unsigned char first[4],second[4];int i;*(Key_02070110 *)first=*(const Key_02070110 *)item;if(FUN_0203a820(first,3)){*(Key_02070110 *)second=*(const Key_02070110 *)item;if(FUN_0203a1a8(second,0) && FUN_0204ead0(*(int *)(s+252),item[2],arg))FUN_0203b3b4(s);}}
