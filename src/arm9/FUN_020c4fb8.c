// FUN_020c4fb8 @ 0x020c4fb8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c4fb8 @ 0x020c4fb8
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If singleton exists, write a cleared16-byte buffer at offset0. No defined return on absent path.
 * Evidence: scratch/coverage-root/batch10/020c4fb8.txt.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int);
extern int FUN_020c4ca4(unsigned char *,unsigned int,const void *,unsigned int);
void FUN_020c4fb8(void){if(*(unsigned char **)0x0211ceec){unsigned int buffer[4];FUN_020656b8(buffer,0,16);FUN_020c4ca4(*(unsigned char **)0x0211ceec,0,buffer,16);}}
