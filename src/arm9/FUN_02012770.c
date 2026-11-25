// FUN_02012770 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_02059cd4(unsigned int *);
extern unsigned int FUN_02059fb4(unsigned int *,unsigned int);
extern void FUN_02059ffc(unsigned int *);
unsigned int FUN_02012770(unsigned int path){unsigned int file[18],result=0;FUN_02059cd4(file);if(FUN_02059fb4(file,path)){unsigned int archive=file[2],offset=file[9];result=*(unsigned int *)(archive+100)+offset;FUN_02059ffc(file);}return result;}
