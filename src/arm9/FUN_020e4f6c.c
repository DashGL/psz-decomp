// FUN_020e4f6c @ 0x020e4f6c (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// USA connection state/count helpers; ABI and full extents in root batch246.
extern unsigned char *FUN_020e961c(void);void FUN_020e4f6c(void){int count=-1,i;for(i=0;i<32;i++){if(*(unsigned int *)(FUN_020e961c()+752)&(1u<<i))count++;}if(count==-1)FUN_020e961c()[14]=0;else FUN_020e961c()[14]=count;}
