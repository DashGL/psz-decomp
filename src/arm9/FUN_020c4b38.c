// FUN_020c4b38 @ 0x020c4b38 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c4b38 @ 0x020c4b38
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run global preparation, fill16-byte header using fixed8-byte prefix and object word, then write offset0.
 * Evidence: scratch/coverage-root/batch11/020c4b38.txt.
 */
extern int FUN_020c4b78(void);
extern void FUN_020656b8(void *,unsigned int,unsigned int);
extern void FUN_02065774(const void *,void *,unsigned int);
extern int FUN_020c4ca4(unsigned char *,unsigned int,const void *,unsigned int);
int FUN_020c4b38(unsigned char *self){unsigned int buffer[4];if(!FUN_020c4b78())return 0;FUN_020656b8(buffer,0,16);FUN_02065774((const void *)0x020f5c44,buffer,8);buffer[2]=*(unsigned int *)(self+4);return FUN_020c4ca4(self,0,buffer,16);}
