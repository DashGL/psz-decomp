// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// Typed fields at actual ROM literal-pool bases retain base-relative member
// accesses and avoid address folding or field-pointer hoisting.
extern struct { unsigned char pad_0[32]; unsigned int field_20; unsigned int field_24; } DAT_0211a180;
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// USA asynchronous command operations; stored callback words remain opaque.
extern unsigned int FUN_0206b2ac(void);
extern unsigned int FUN_0206b968(unsigned int);
unsigned int FUN_0206b570(unsigned int value,unsigned int callback,unsigned int argument){if(!FUN_0206b2ac())return 1;DAT_0211a180.field_20=callback;DAT_0211a180.field_24=argument;FUN_0206b968(0x02006300|((value>>16)&255));FUN_0206b968(0x01010000|(value&65535));return 0;}
