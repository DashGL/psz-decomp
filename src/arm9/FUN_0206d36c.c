// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6e, exact bytes and relocation targets.
// FUN_0206d36c @ 0x0206d36c (full decoded extent 0x6e, Thumb).
// check: 2.0/sp2p3 target=0x6e candidate=0x6e words=0 exact_bytes=0 bad_relocs=0
// Validate record discriminator, map states 1..4 to 0..3, optionally store result.
// Nested success guards share final failure return. Named initial loads and
// !(a!=0 || b!=1) preserve the branchy valid select and both return blocks.
// flags: -O4,s
extern int FUN_0206d1fc(const int *);
int FUN_0206d36c(const int *self,int *out){
 int value;
 if(FUN_0206d1fc(self)) {
  int a=self[0],b=self[1];
  int valid=!(a!=0 || b!=1);
  if(valid!=0) {
   switch(self[4]){case 1:value=0;break;case 2:value=1;break;case 3:value=2;break;case 4:value=3;break;default:value=-1;break;}
   if(out)*out=value;
   return value!=-1;
  }
 }
 return 0;
}
