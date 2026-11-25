// FUN_020783c0 @ 0x020783c0 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_020783c0 @ 0x020783c0 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy mixed-width descriptor with signed byte fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020783c0.txt.
 */
void *FUN_020783c0(signed char *out,signed char *in){*(unsigned short *)out=*(unsigned short *)in;out[2]=in[2];out[3]=in[3];out[4]=in[4];out[5]=in[5];out[6]=in[6];out[7]=in[7];*(int *)(out+8)=*(int *)(in+8);out[12]=in[12];out[13]=in[13];out[14]=in[14];out[15]=in[15];return out;}
