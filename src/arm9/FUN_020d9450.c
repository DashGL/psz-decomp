// FUN_020d9450 @ 0x020d9450 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived protocol/runtime leaf.
void FUN_020d9450(unsigned char **p,unsigned int value,unsigned int *count){unsigned char *d=*p,*s=(unsigned char *)&value;d[0]=s[0];d[1]=s[1];d[2]=s[2];d[3]=s[3];*count+=4;*p+=4;}
