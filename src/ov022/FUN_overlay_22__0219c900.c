// FUN_overlay_22__0219c900 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_22__0219c900 @ 0x0219c900
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22: initialize four-byte record as 0,-1,0,0; return self. */
void *FUN_overlay_22__0219c900(signed char *self) { self[0]=0; self[1]=-1; self[2]=0; self[3]=0; return self; }
