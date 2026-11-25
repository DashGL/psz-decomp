// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_18__021209d4 @ 0x021209d4
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef void (*Callback)(const void *,unsigned,unsigned); extern Callback D_021237c0[];
void FUN_overlay_18__021209d4(void *unused,unsigned *record) { if(record[2])D_021237c0[record[0]]((const void *)record[2],record[1],record[3]); }
