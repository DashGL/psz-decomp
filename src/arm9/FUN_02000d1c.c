// FUN_02000d1c @ 0x02000d1c (ARM, full extent 0x128)
// check: 2.0/sp2p3 target=0x128 candidate=0x118 words=999 exact_bytes=999 bad_relocs=6
// near: ndiff=999/74 size=0x128 vers=2.0/sp2p3 next="recursive lock branch arrangement, callback stack registers and literal pooling"
// flags: -O4,p -noThumb
/* USA ROM reconstruction, 2026-11-06.
 * Drain exit callbacks in reverse order under a recursively owned mutex,
 * release the mutex at recursion zero, invoke/clear the final hook, then run
 * the final shutdown calls. Callback count is reloaded after each callback.
 */
typedef void (*Hook)(void);
extern unsigned char UNK_021019d8[];extern unsigned int UNK_021181a0[];
extern unsigned int UNK_02101990,UNK_021019b4;extern unsigned int UNK_02101880[];
extern Hook UNK_02101890[];
extern int FUN_020672b8(void *);extern void FUN_0206719c(void *),FUN_02067220(void *),FUN_02001284(int),FUN_0200c92c(void);
void FUN_02000d1c(void){
 if(FUN_020672b8(UNK_021019d8)==0){UNK_02101990=*(unsigned int *)(UNK_021181a0[1]+0x6c);UNK_021019b4=1;}
 else if(UNK_02101990==*(unsigned int *)(UNK_021181a0[1]+0x6c))++UNK_021019b4;
 else{FUN_0206719c(UNK_021019d8);UNK_02101990=*(unsigned int *)(UNK_021181a0[1]+0x6c);UNK_021019b4=1;}
 while((int)UNK_02101880[2]>0){Hook hook=UNK_02101890[--UNK_02101880[2]];hook();}
 if(--UNK_021019b4==0)FUN_02067220(UNK_021019d8);
 if(UNK_02101880[0]){((Hook)UNK_02101880[0])();UNK_02101880[0]=0;}
 FUN_02001284(0);FUN_0200c92c();
}
