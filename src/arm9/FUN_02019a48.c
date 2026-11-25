// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
void FUN_02019a48(unsigned int *d,unsigned int *s,unsigned int scale,unsigned int flag){if(flag){d[0]+=scale;d[1]+=scale;d[2]+=scale;}else{d[0]+=(int)(scale*s[0])>>12;d[1]+=(int)(scale*s[1])>>12;d[2]+=(int)(scale*s[2])>>12;}}
