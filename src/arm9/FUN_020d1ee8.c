// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x22, exact bytes and relocation targets.
// flags: -O4,p
// USA instruction-derived runtime/container leaf.
signed char *FUN_020d1ee8(signed char *p){signed char *start=p;while(*p){if(*p==92)*p=47;p++;}return start;}
