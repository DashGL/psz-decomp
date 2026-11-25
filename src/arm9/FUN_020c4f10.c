// FUN_020c4f10 @ 0x020c4f10 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c4f10 @ 0x020c4f10
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize checksum to all ones, update through object table, complement result.
 * Evidence: scratch/coverage-root/batch10/020c4f10.txt.
 */
extern void FUN_0205fe18(void *,unsigned int *,const void *,unsigned int);
unsigned int FUN_020c4f10(unsigned char *self,const void *data,unsigned int size){unsigned int crc=0;crc=~0u;FUN_0205fe18(self+0x4c,&crc,data,size);return ~crc;}
