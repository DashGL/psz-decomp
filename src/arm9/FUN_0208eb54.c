// FUN_0208eb54 @ 0x0208eb54 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0208eb54 @ 0x0208eb54 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct compact message with descriptor and byte parameters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208eb54.txt.
 */
extern void FUN_02030d5c(void *,void *);void *FUN_0208eb54(unsigned char *s,void *desc,int a,int b,unsigned char c,unsigned char d,int e){s[0]=1;s[1]=0;s[2]=0;s[3]=0;FUN_02030d5c(s+4,desc);s[8]=a;s[9]=b;s[10]=c;s[11]=d;s[12]=e;s[13]=0;s[14]=0;s[15]=0;s[2]=5;s[3]=5;s[0]=4;return s;}
