// FUN_0205d094 @ 0x0205d094 (0x290, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x290 candidate=0x290 words=0 exact_bytes=0 bad_relocs=0
// FUN_0205d094 @ 0x0205d094 (0x290 incl eight literals, ARM)
// flags: -noThumb
// Background VRAM bank assignment with signed mask dispatch and original ordered byte writes.
// All sparse and contiguous bank combinations retain switch fallthrough ordering.
typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
extern u16 data_0211259c[];
extern void FUN_0205cfdc(u32);
#define A (*(volatile u8 *)0x04000240)
#define B (*(volatile u8 *)0x04000241)
#define C (*(volatile u8 *)0x04000242)
#define D (*(volatile u8 *)0x04000243)
#define E (*(volatile u8 *)0x04000244)
#define F (*(volatile u8 *)0x04000245)
#define G (*(volatile u8 *)0x04000246)
void FUN_0205d094(int mask){
 data_0211259c[0]=(data_0211259c[0]|data_0211259c[1])&~(u32)mask;data_0211259c[1]=mask;
 switch(mask){
  case 8:D=0x81;break;
  case 12:D=0x89;
  case 4:C=0x81;break;
  case 14:D=0x91;
  case 6:C=0x89;
  case 2:B=0x81;break;
  case 15:D=0x99;
  case 7:C=0x91;
  case 3:B=0x89;
  case 1:A=0x81;break;
  case 11:A=0x81;B=0x89;D=0x91;break;
  case 13:D=0x91;
  case 5:A=0x81;C=0x89;break;
  case 9:A=0x81;D=0x89;break;
  case 10:B=0x81;D=0x89;break;
  case 112:G=0x99;
  case 48:F=0x91;
  case 16:E=0x81;break;
  case 80:G=0x91;E=0x81;break;
  case 96:G=0x89;
  case 32:F=0x81;break;
  case 64:G=0x81;break;
 }
 FUN_0205cfdc(data_0211259c[0]);
}
