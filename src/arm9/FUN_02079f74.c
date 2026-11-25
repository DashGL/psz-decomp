// FUN_02079f74 @ 0x02079f74 (0xbc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch29-manifest.json; original draft retained for referenced provenance.
// FUN_02079f74 @ 0x02079f74 (inventory code 0xae, thumb)
// check: 2.0/sp2p3 target=0xbc candidate=0xbc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Handle participant flag updates and acknowledgement packets.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079f74.txt.
 */
extern void *UNK_02108c54;extern char *UNK_02108c64;extern char UNK_0211a51c[];extern unsigned char *FUN_02030a98(void *,void *);extern int FUN_02084c70(void *);extern void FUN_02079c14(void *,void *,int),FUN_020bce3c(void *),FUN_02033144(void *,void *),FUN_02033158(void *,unsigned short,int);void FUN_02079f74(signed char *s){unsigned char *flags=FUN_02030a98(UNK_02108c54,s+4);int mode=s[11],id=s[1],packet[3];if(mode==0){if(id>=0 && id<4)*flags|=(unsigned char)(1<<id);}else if(mode==1){if(id>=0 && id<4){*flags&=~(unsigned char)(1<<id);if(id!=FUN_02084c70(UNK_0211a51c)){FUN_02079c14(packet,s+4,3);*(unsigned short *)((char *)packet+8)=*(unsigned short *)(s+8);((char *)packet)[10]=id;FUN_020bce3c(packet);}}}else if(mode==2){*flags|=128;FUN_02033144(UNK_02108c64,s+4);}else if(mode==3){if(s[10]==FUN_02084c70(UNK_0211a51c))FUN_02033158(UNK_02108c64+108,*(unsigned short *)(s+8),id);}}
