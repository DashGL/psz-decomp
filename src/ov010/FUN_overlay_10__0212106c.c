// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0xc exact_bytes=0 bad_relocs=0
// Actual ROM ABI: notes/sessions/matching-overlays-2026-11-12-twin-abi.json
// flags: -O4,s
typedef struct {unsigned prefix[11];unsigned long long value;} State_0212106c;
extern State_0212106c DAT_02122da4;
unsigned long long FUN_overlay_10__0212106c(void){return DAT_02122da4.value;}
