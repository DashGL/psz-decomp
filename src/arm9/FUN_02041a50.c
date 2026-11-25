// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f8dc4[];
extern unsigned char DAT_020f8dc8[];
extern unsigned char DAT_020f8dcc[];
extern unsigned char DAT_020f8dd0[];
extern unsigned char DAT_020f8dd4[];
extern unsigned char DAT_020f8dd8[];
extern unsigned char DAT_0211a3c4[];
// FUN_02041a50 @ 0x02041a50 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 117.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b117/02041a50.txt.
 */
extern void *FUN_02031a74(void);extern signed char *FUN_02031c74(void *);extern void FUN_02003d54(void *,const void *,unsigned int);extern int FUN_020038ec(void *,unsigned int,const char *,...);void FUN_02041a50(void *out){int mode=*(signed char *)((unsigned int)DAT_0211a3c4 + 12u),value;signed char *record;if(mode==1){FUN_02003d54(out,(void *)((unsigned int)DAT_020f8dc4 + 0u),4);return;}if(mode==0){FUN_02003d54(out,(void *)((unsigned int)DAT_020f8dc8 + 0u),4);return;}record=FUN_02031c74(FUN_02031a74());if(record){value=record[11];if(value<1){FUN_02003d54(out,(void *)((unsigned int)DAT_020f8dcc + 0u),4);return;}if(value>9){FUN_02003d54(out,(void *)((unsigned int)DAT_020f8dd0 + 0u),4);return;}FUN_020038ec(out,4,(const char *)((unsigned int)DAT_020f8dd4 + 0u),value);return;}FUN_02003d54(out,(void *)((unsigned int)DAT_020f8dd8 + 0u),4);}
