// FUN_020c7574 @ 0x020c7574 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// Socket address adapters; byte lengths and fixed callee argument contracts preserved.
extern int FUN_020282cc(unsigned int, unsigned char *);
extern int FUN_020c7458(int,int);
int FUN_020c7574(unsigned int fd,unsigned char *address,unsigned int *length){
 int result; address[0]=(unsigned char)*length;
 result=FUN_020282cc(fd,address);*length=address[0];
 return FUN_020c7458(result,-1);
}
