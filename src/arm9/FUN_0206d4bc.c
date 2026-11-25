// flags: -O4,s
// check: 2.0/sp2p3 target=0x12a candidate=0x126 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/75 size=0x12a vers=2.0/sp2p3 next="inspect boolean lowering and switch case scheduling using proven full 298-byte body"
// USA ARM9 configuration dispatch. Proven complete body ends at 0206d5e6, before next symbol 0206d5e8.
extern void FUN_0206d198(void *);
extern void FUN_0206d1ec(void *,int,int,int,int,int);
void FUN_0206d4bc(void *self,unsigned int kind,int value,int mode){
 int valid,allowed;
 FUN_0206d198(self);if(value>=1 && value<8)valid=1;else valid=0;if(mode==0 || mode==2)allowed=1;else allowed=0;
 switch(kind){
 case 0:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,4,1);break;
 case 1:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,4,3);break;
 case 2:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,4,4);break;
 case 3:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,4,5);break;
 case 4:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,4,6);break;
 case 5:if(valid)FUN_0206d1ec(self,value,1,4,4,2);break;
 case 6:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,0,1);break;
 case 7:if(valid && allowed)FUN_0206d1ec(self,value,mode,4,2,2);break;
 }
}
