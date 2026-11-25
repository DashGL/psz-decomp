// FUN_020612ac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0205a150(unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_0205a160(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020612ac(unsigned int file){unsigned int header[24],*record=0,result=0,position;if(file){position=*(unsigned int *)(file+44)-*(unsigned int *)(file+36);if(FUN_0205a150(file,(unsigned int)header,96)>=96)record=header;FUN_0205a160(file,position,0);}else record=(unsigned int *)0x027ffe00;if(record){result=record[11]+616+record[15];if(result<65536)result=65536;}return result;}
