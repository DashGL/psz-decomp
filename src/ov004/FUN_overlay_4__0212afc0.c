// FUN_overlay_4__0212afc0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__0212afc0 @ 0x0212afc0 (0x1a, Thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// Release owned pointer through virtual slot4; return receiver.
void *FUN_overlay_4__0212afc0(void **self){void *p=*self;if(p){if(p)((void (*)(void *))(*(void ***)p)[1])(p);*self=0;}return self;}
