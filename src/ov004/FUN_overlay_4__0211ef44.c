// FUN_overlay_4__0211ef44 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__0211ef44 @ 0x0211ef44 (0x20, Thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// Release optional singleton through virtual slot4 and clear its global.
extern void *data_02192cd0;
void FUN_overlay_4__0211ef44(void){void *p=data_02192cd0;if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);data_02192cd0=0;}}
