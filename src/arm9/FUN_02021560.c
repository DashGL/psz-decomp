// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02107054[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA graphics/list setup adapters; full ABI/extent evidence in root batch252.
extern int FUN_020214fc(unsigned);int FUN_02021560(unsigned ip){unsigned mask;int result=0;if(FUN_020214fc(ip)){mask=~*(unsigned *)((unsigned int)DAT_02107054 + 28u);if((ip&mask)==mask)result=1;}return result;}
