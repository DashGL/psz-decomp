// FUN_020c1190 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020c1190 @ 0x020c1190
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const unsigned char D_0211b444[];
extern unsigned char D_0211b744[];
/* USA ROM reconstruction, 2026-11-04.
 * Search nonzero ID among64 valid paired records, optionally requiring secondary predicate.
 * Evidence: scratch/coverage-root/batch14/020c1190.txt.
 */
extern int FUN_020dd6c4(const void *),FUN_020dd250(const void *);
void *FUN_020c1190(unsigned int id,int filtered){int i;if(id){for(i=0;i<64;++i){const void *key=D_0211b444+12*i;if(FUN_020dd6c4(key)!=1)continue;if(filtered && FUN_020dd250(key)!=1)continue;{unsigned char *record=D_0211b744+52*i;if(*(unsigned short *)(record+6)==id)return record;}}}return 0;}
