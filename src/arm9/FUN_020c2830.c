// FUN_020c2830 @ 0x020c2830 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c2830 @ 0x020c2830
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Complete resource channel0; failed primary parse releases and exits, secondary failure clears output.
 * Evidence: scratch/coverage-root/batch18/020c2830.txt.
 */
extern int FUN_02012a24(void *,void *),FUN_02012a60(void *,void *),FUN_020c2d1c(void *);
extern void FUN_020ba8c4(void *),FUN_020c2cdc(void *);
void FUN_020c2830(unsigned char *self){if(self){if(!*(unsigned int *)(*(unsigned char **)0x0211c860+0x50)){*(unsigned int *)(self+0x3c)=0;*(unsigned int *)self=1;if(*(void **)(self+16)){if(!FUN_02012a24(*(void **)(self+16),self+28)){if(*(void **)(self+16)){FUN_020ba8c4(*(void **)(self+16));*(void **)(self+16)=0;}return;}}if(!FUN_02012a60(*(void **)(self+16),self+36))*(void **)(self+36)=0;if(FUN_020c2d1c(self))FUN_020c2cdc(self);}else if(*(void **)(self+16)){FUN_020ba8c4(*(void **)(self+16));*(void **)(self+16)=0;}}}
