// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x34 exact_bytes=0 bad_relocs=0
// Fixed byte aggregate and signed selection proof: notes/sessions/matching-resume2-2026-11-12-mappings.md
// flags: -O4,s
typedef struct { signed char bytes[7]; } Mapping_0206d27c;
extern const Mapping_0206d27c DAT_020f24ad;
int FUN_0206d27c(signed char *out,int index){if(index>=0 && index<7){Mapping_0206d27c local=DAT_020f24ad;*out=local.bytes[index];return 1;}return 0;}
