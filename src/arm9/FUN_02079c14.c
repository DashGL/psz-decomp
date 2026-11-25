// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_02079c14 @ 0x02079c14
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize outgoing descriptor and final command flags.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079c14.txt.
 */
void FUN_02079c14(unsigned char *out,signed char *in,unsigned int arg) { out[0]=1;out[1]=0;out[2]=0;out[3]=0;out[4]=in[0];out[5]=in[1];out[6]=in[2];out[7]=((unsigned char *)in)[3];*(unsigned short *)(out+8)=0;((signed char *)out)[10]=-1;out[11]=arg;out[2]=5;out[3]=2;out[0]=3; }
