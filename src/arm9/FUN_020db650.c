struct BF { unsigned char b0 : 2; unsigned char b2 : 2; unsigned char b4 : 4; };
unsigned int FUN_020db650(const unsigned char *p){if(((const struct BF *)(p+0xd0b))->b2==1)return 0xc0000;return 0x80000;}
