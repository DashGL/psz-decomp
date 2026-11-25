// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_0206453c @ 0x0206453c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern unsigned char * data_021180a0[];
int FUN_0206453c(void){unsigned char *p=*(data_021180a0+2);return p[0x50d]==1;}
