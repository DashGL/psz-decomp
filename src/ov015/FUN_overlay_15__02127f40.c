// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_15__02127f40 @ 0x02127f40 (code 0x1c, pool extent 0x1c, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve low-halfword table index and optionally write digit halfword.
 * Field identities remain provisional.
 */
void *FUN_overlay_15__02127f40(unsigned int *p,unsigned int index,int pos,unsigned int digit) {char *base=(char *)p[1];unsigned int *offsets=(unsigned int *)p[0];unsigned short *record=(unsigned short *)(base+offsets[(unsigned short)index]);if(pos>=0)record[pos]=digit+48;return record;}
