// FUN_020c44a8 @ 0x020c44a8 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c44a8 @ 0x020c44a8
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear 16-byte record, mark optional name type and copy at most six nonzero halfwords.
 * Evidence: scratch/coverage-root/batch10/020c44a8.txt.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int);
unsigned char *FUN_020c44a8(unsigned char *self,const unsigned short *name) {int i;FUN_020656b8(self,0,2);FUN_020656b8(self+2,0,14);if(name){self[0]=2;for(i=0;i<6 && name[i];++i)((unsigned short *)(self+2))[i]=name[i];}return self;}
