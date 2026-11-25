// FUN_020e99e4 @ 0x020e99e4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern void FUN_020656b8(unsigned int,unsigned int,unsigned int);
extern void FUN_020e9638(void);
void FUN_020e99e4(unsigned int storage){*(unsigned int *)0x0211e5e4=storage;FUN_020656b8(storage,0,0x614);*(unsigned short *)(*(unsigned int *)0x0211e5e4+0x610)=0x5b9;FUN_020e9638();}
