// FUN_020e068c @ 0x020e068c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch55-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// Singleton initialization; preserve incoming r3 setting and void setter contract.
extern unsigned int DAT_0211dc9c[];
extern void FUN_020656b8(void *,unsigned int,unsigned int);
extern void FUN_02028ad4(unsigned int);
void FUN_020e068c(unsigned char *self,unsigned int kind,unsigned int unused,unsigned int setting){
 if(!DAT_0211dc9c[1]){
 FUN_020656b8(self,0,100);
 *(unsigned short *)(self+8)=(unsigned short)kind;
 *(unsigned short *)(self+10)=1;
 *(unsigned short *)(self+4)=1;
 *(unsigned short *)(self+6)=0;
 self[12]=0;*(unsigned int *)(self+16)=0;
 DAT_0211dc9c[1]=(unsigned int)self;
 FUN_02028ad4(setting);
 }

}
