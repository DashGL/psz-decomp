// FUN_overlay_12__021334bc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 numeric digit-entry widget rendering and cursor/unit sprite submission, full 196-byte extent.
typedef struct{unsigned short a,b,c,d;int x,y;} D;
extern void FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int),FUN_overlay_12__02133580(void *);
extern int FUN_overlay_12__02131ad0(int);
void FUN_overlay_12__021334bc(int *self){D d;int digits[10];int val,i,handle;unsigned short icon_cursor,icon_unit;FUN_02071d0c(&d);FUN_02090b44(&d);val=self[23];for(i=0;i<10;i++){digits[i]=val%10;val/=10;}switch(self[26]){case 1:icon_cursor=18;icon_unit=10;break;case 0:icon_cursor=23;icon_unit=15;break;default:return;}handle=FUN_overlay_12__02131ad0(1);d.y=(self[17]+15)<<12;d.x=(self[16]+36+4*self[25])<<12;for(i=0;i<self[25];i++){d.a=digits[i]+8;FUN_020c32b4(&d,handle);if(self[24]!=i){d.a=icon_cursor;FUN_020c32b4(&d,self[27]);}d.x-=8<<12;}FUN_overlay_12__02133580(self);d.x=self[16]<<12;d.y=self[17]<<12;d.a=icon_unit;FUN_020c32b4(&d,self[27]);}
