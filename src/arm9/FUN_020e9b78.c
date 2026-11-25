// FUN_020e9b78 @ 0x020e9b78 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA complete runtime state/error mapping.
void FUN_020e9b78(unsigned int index){unsigned int *g=(unsigned int *)0x0211e5e4,offset;if(!*g)return;offset=index*48;*(unsigned int *)(*g+offset+12)=0;*(unsigned int *)(*g+offset+16)=0;*(unsigned int *)(*g+offset+20)=0;*(unsigned int *)(*g+offset+24)=0;*(unsigned char *)(*g+offset+28)=0;*(unsigned int *)(*g+offset+4)=0;*(unsigned int *)(*g+offset+8)=0;*(unsigned char *)(*g+offset+29)=0;*(unsigned short *)(*g+offset+34)=0;}
