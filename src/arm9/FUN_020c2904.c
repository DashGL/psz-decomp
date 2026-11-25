// FUN_020c2904 @ 0x020c2904 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c2904 @ 0x020c2904
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Complete resource channel2; primary failure releases but continues to secondary parsing, matching original.
 * Evidence: scratch/coverage-root/batch18/020c2904.txt.
 */
extern int FUN_02012aa4(void *,void *),FUN_02012ae0(void *,void *),FUN_020c2d1c(void *);
extern void FUN_020ba8c4(void *),FUN_020c2cdc(void *);
void FUN_020c2904(unsigned char *self){if(self){if(!*(unsigned int *)(*(unsigned char **)0x0211c860+0x50)){*(unsigned int *)(self+0x38)=0;*(unsigned int *)(self+8)=1;if(*(void **)(self+12)){if(!FUN_02012aa4(*(void **)(self+12),self+24)){if(*(void **)(self+12)){FUN_020ba8c4(*(void **)(self+12));*(void **)(self+12)=0;}}}if(!FUN_02012ae0(*(void **)(self+12),self+40))*(void **)(self+40)=0;if(FUN_020c2d1c(self))FUN_020c2cdc(self);}else if(*(void **)(self+12)){FUN_020ba8c4(*(void **)(self+12));*(void **)(self+12)=0;}}}
