// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
typedef struct {unsigned char bytes[4];} Copy_02090318;
// FUN_02090318 @ 0x02090318 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume typed item and send inventory action packet.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Byte-aligned aggregate layout reconstructed from ROM.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct {int words[3];} Tail;extern unsigned char UNK_0211a588[];extern Tail UNK_0211a58c;extern char UNK_0211a578[];extern int FUN_0204ec80(int,int),FUN_0204ea84(void *,int);extern void FUN_0204e994(void *,int,int),FUN_0208d784(void *,int,void *,int);int FUN_02090318(char *s){int d[4],actor,i;if(s){actor=*(int *)(s+252);if(FUN_0204ec80(actor,5)){FUN_0204e994(d,5,1);*(Copy_02090318 *)UNK_0211a588=*(const Copy_02090318 *)d;UNK_0211a58c=*(Tail *)(d+1);if(FUN_0204ea84(UNK_0211a588,1)){ FUN_0208d784(UNK_0211a578,actor,UNK_0211a588,1);return 1;}}}return 0;}
