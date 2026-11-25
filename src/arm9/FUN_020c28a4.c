// FUN_020c28a4 @ 0x020c28a4 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c28a4 @ 0x020c28a4
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Complete loaded resource when manager active; release invalid data or any data on manager error.
 * Evidence: scratch/coverage-root/batch14/020c28a4.txt.
 */
extern int FUN_02012b3c(void *,void *);
extern void FUN_020ba8c4(void *);
extern int FUN_020c2d1c(void *);
extern void FUN_020c2cdc(void *);
void FUN_020c28a4(unsigned char *self){if(self){if(!*(unsigned int *)(*(unsigned char **)0x0211c860+0x50)){*(unsigned int *)(self+0x40)=0;*(unsigned int *)(self+4)=1;if(*(void **)(self+0x14)){if(!FUN_02012b3c(*(void **)(self+0x14),self+0x20)){if(*(void **)(self+0x14)){FUN_020ba8c4(*(void **)(self+0x14));*(void **)(self+0x14)=0;}}}if(FUN_020c2d1c(self))FUN_020c2cdc(self);}else if(*(void **)(self+0x14)){FUN_020ba8c4(*(void **)(self+0x14));*(void **)(self+0x14)=0;}}}
