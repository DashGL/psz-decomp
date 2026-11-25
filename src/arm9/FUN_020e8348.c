// FUN_020e8348 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020e8348 @ 0x020e8348
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned char data_0211de84[];
unsigned int FUN_020e8348(void){unsigned int i=0;do{if(!data_0211de84[i*12])return (unsigned char)(i+100);i=(unsigned char)(i+1);}while(i<154);return 0;}
