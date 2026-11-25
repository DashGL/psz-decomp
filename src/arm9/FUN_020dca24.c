// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived protocol/runtime leaf.
unsigned int FUN_020dca24(int value){if(value&2)return ((unsigned int)value<<22)>>24;return (unsigned char)((value>>2)+25);}
