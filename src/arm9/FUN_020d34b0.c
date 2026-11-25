// FUN_020d34b0 @ 0x020d34b0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// Connection construction and elapsed-time probe; explicit sixth argument and unsigned tick subtraction.
extern unsigned int FUN_020d4be8(void *,const char *,unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020d34b0(void *out,const char *address,unsigned int receiveSize,unsigned int sendSize,unsigned int user){return FUN_020d4be8(out,address,receiveSize,sendSize,user,0);}
