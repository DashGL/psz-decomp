// FUN_020dab60 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA resident callback/state routines; full ABI and extents in root batch244.
extern unsigned char *FUN_020dac74(unsigned int);unsigned int FUN_020dab60(unsigned int mask,void *context){unsigned char *s=FUN_020dac74(1);if(!(s[8]&mask)){s[8]|=mask;return (*(unsigned int (**)(unsigned int,void *))s)(mask,context);}return 0;}
