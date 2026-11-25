// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x34 exact_bytes=0 bad_relocs=0
// Fixed byte aggregate and signed selection proof: notes/sessions/matching-resume2-2026-11-12-mappings.md
// flags: -O4,s
typedef struct { signed char bytes[12]; } Mapping_0206d248;
extern const Mapping_0206d248 DAT_020f24b4;
int FUN_0206d248(signed char *out,int index){if(index>=0 && index<12){Mapping_0206d248 local=DAT_020f24b4;*out=local.bytes[index];return 1;}return 0;}
