// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x34 exact_bytes=0 bad_relocs=0
// Fixed byte aggregate and signed selection proof: notes/sessions/matching-resume2-2026-11-12-mappings.md
// flags: -O4,s
typedef struct { signed char bytes[5]; } Mapping_0206d2b0;
extern const Mapping_0206d2b0 DAT_020f24a8;
int FUN_0206d2b0(signed char *out,int index){if(index>=0 && index<5){Mapping_0206d2b0 local=DAT_020f24a8;*out=local.bytes[index];return 1;}return 0;}
