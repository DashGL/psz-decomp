// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// FUN_020736b8 @ 0x020736b8
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned char UNK_0211a230[];extern char UNK_0211a250[];extern int FUN_020736a0(void),FUN_02073198(void),FUN_020b3bc8(void *),FUN_02073218(int);extern void FUN_02073744(void),FUN_020b3bc0(void *),FUN_020737c0(void);void FUN_020736b8(void){int current,i,changed;if(UNK_0211a230[13]){--UNK_0211a230[13];return;}if(FUN_020736a0()==1){current=FUN_02073198();if(current!=-1 && FUN_020b3bc8(UNK_0211a250+80*current)==1)FUN_02073744();if(((signed char *)UNK_0211a230)[12]==1){changed=0;for(i=0;i<4;i++)if(current!=i && !FUN_02073218(i) && !FUN_020b3bc8(UNK_0211a250+80*i)){FUN_020b3bc0(UNK_0211a250+80*i);changed=1;}if(changed)FUN_020737c0();}}}
