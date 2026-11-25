// FUN_020c750c @ 0x020c750c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// Socket address adapters; byte lengths and fixed callee argument contracts preserved.
extern int FUN_020280bc(unsigned int,void *,unsigned int,unsigned int,unsigned char *);
extern int FUN_020c7458(int,int);
int FUN_020c750c(unsigned int fd,void *buffer,unsigned int size,unsigned int flags,unsigned char *address,unsigned int *length){
 int result;address[0]=(unsigned char)*length;
 result=FUN_020280bc(fd,buffer,size,flags,address);*length=address[0];
 return FUN_020c7458(result,-1);
}
