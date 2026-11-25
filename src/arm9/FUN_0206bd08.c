// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_0206bd08 @ 0x0206bd08
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern unsigned int data_0211a180[];
extern unsigned int FUN_0206b2ac(void);
extern unsigned int FUN_0206b968(unsigned int);
unsigned int FUN_0206bd08(unsigned int command,unsigned int callback,unsigned int argument){if(!FUN_0206b2ac())return 1;*(data_0211a180+8)=callback;*(data_0211a180+9)=argument;FUN_0206b968(0x03006600|(command&255));return 0;}
