// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int DAT_0211e5e8[];
// flags: -O4,s
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_020ea514(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020e9ffc(unsigned int output){if(!FUN_020ea514(32,32,output))return 0;DAT_0211e5e8[2]=((unsigned int)*(unsigned short *)output<<3)-1024;return 1;}
