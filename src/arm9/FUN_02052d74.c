// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// Match recovery 2026-11-12: typed nonoverlapping global fields retain
// ROM literal-base addressing and original load/store widths. Field offsets
// are established by the existing dereferences, with explicit padding.
extern struct { unsigned short field_0; unsigned char pad_2[2]; unsigned int field_4; } DAT_02110b00;
// FUN_02052d74 @ 0x02052d74 (inventory code 0x6c, arm)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 45.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b45/02052d74.txt.
 */
extern unsigned int FUN_020683d4(void);extern int FUN_02052f80(void);extern void FUN_020683e8(unsigned int);extern int FUN_02052fe4(int,int);extern void FUN_02053424(void);extern void FUN_02068850(int,int);
int FUN_02052d74(void){unsigned int state=FUN_020683d4();int result=FUN_02052f80();if(result){FUN_020683e8(state);return 3;}result=FUN_02052fe4(1,0);if(result)return result;FUN_02053424();FUN_02068850(10,0);DAT_02110b00.field_4=0;DAT_02110b00.field_0=0;FUN_020683e8(state);return 0;}
