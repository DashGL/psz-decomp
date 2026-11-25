// FUN_0205d620 @ 0x0205d620 (0x1d8, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x1d8 candidate=0x1d8 words=0 exact_bytes=0 bad_relocs=0
// FUN_0205d620 @ 0x0205d620 (0x1d8 complete epilogue/literals, ARM)
// flags: -noThumb
// Reassign four texture VRAM banks with the original ordered byte writes, then apply remaining ownership mask.
// Inventory0x1b8 excludes the final POP and seven literals; full extent ends0205d7f7.
typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
extern u16 data_0211259c[];
extern void FUN_0205cfdc(u32);
#define CONTROL (*(volatile u16 *)0x04000060)
#define A (*(volatile u8 *)0x04000240)
#define B (*(volatile u8 *)0x04000241)
#define C (*(volatile u8 *)0x04000242)
#define D (*(volatile u8 *)0x04000243)
void FUN_0205d620(u32 mask){
 data_0211259c[0]=(data_0211259c[0]|data_0211259c[4])&~mask;data_0211259c[4]=mask;
 if(!mask)CONTROL&=0xcffe;
 else{
  CONTROL=(CONTROL&~0x3000u)|1;
  switch(mask){
   case 5:A=0x83;C=0x8b;break;
   case 9:A=0x83;D=0x8b;break;
   case 10:B=0x83;D=0x8b;break;
   case 11:A=0x83;B=0x8b;D=0x93;break;
   case 13:A=0x83;C=0x8b;D=0x93;break;
   case 8:D=0x83;break;
   case 12:D=0x8b;
   case 4:C=0x83;break;
   case 14:D=0x93;
   case 6:C=0x8b;
   case 2:B=0x83;break;
   case 15:D=0x9b;
   case 7:C=0x93;
   case 3:B=0x8b;
   case 1:A=0x83;break;
  }
 }
 FUN_0205cfdc(data_0211259c[0]);
}
