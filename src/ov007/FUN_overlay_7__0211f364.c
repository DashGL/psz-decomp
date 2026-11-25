// FUN_overlay_7__0211f364 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_7__0211f364 @ 0x0211f364 (0x18, Thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// Both concrete callback table entries point to receiver-free0211f014; original upper-only index bound retained.
extern void (*data_0211fd3c[])(void);
void FUN_overlay_7__0211f364(int index){if(index<2){void (*fn)(void)=data_0211fd3c[index];if(fn)fn();}}
