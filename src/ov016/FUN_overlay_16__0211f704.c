// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// flags: -noThumb
// check: 2.0/sp2p3 full_extent=0x14 exact_bytes=0 bad_relocs=0
// Concrete stream table/receiver ABI: notes/sessions/matching-overlays-2026-11-12-corrected-arm-port.json
typedef void (*Callback)(void *);
void FUN_overlay_16__0211f704(void *stream){Callback *table=*(Callback **)stream;table[5](stream);}
