// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int DAT_0211dbd8[];
// flags: -O4,s
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0206719c(unsigned int);
extern unsigned int FUN_02067220(unsigned int);
unsigned int FUN_020ddbb0(void){unsigned int context=DAT_0211dbd8[2],result;if(!context)return 22;FUN_0206719c(context+0x13d8);context=DAT_0211dbd8[2];result=*(unsigned int *)(context+0x1004);FUN_02067220(context+0x13d8);return result;}
