// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3e, exact bytes and relocation targets.
typedef struct{unsigned int w[8];} Block_0209e6c4;
// FUN_0209e6c4 @ 0x0209e6c4 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy descriptor scalar fields and four paired words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Concrete aggregate layout and access widths recovered.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct {unsigned int a,b;} Pair;void *FUN_0209e6c4(unsigned char *out,unsigned char *in){int i;out[0]=in[0];out[1]=in[1];out[2]=in[2];out[3]=in[3];*(unsigned int *)(out+4)=*(unsigned int *)(in+4);out[8]=in[8];out[9]=in[9];out[10]=in[10];out[11]=in[11];*(Block_0209e6c4 *)(out+12)=*(const Block_0209e6c4 *)(in+12);return out;}
