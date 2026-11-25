// FUN_020e1ebc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA allocation/state adapters; full ABI and extents in root batch245.
extern unsigned int DAT_0211de44[];extern void FUN_020e056c(int,int),FUN_020e1f24(void);void FUN_020e1ebc(int error,int code){if(DAT_0211de44[1]&&error){char *s;void (*callback)(int,int,void *);FUN_020e056c(error,code);s=(char *)DAT_0211de44[1];callback=*(void (**)(int,int,void *))(s+20);if(callback)callback(error,0,*(void **)(s+24));FUN_020e1f24();}}
