// FUN_020e8574 @ 0x020e8574 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch56-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_020e961c(void);
extern unsigned long long FUN_02067e0c(void);
void FUN_020e8574(void){unsigned int state;unsigned long long tick;*(unsigned char *)(FUN_020e961c()+429)=0;state=FUN_020e961c();tick=FUN_02067e0c();*(unsigned int *)(state+504)=(unsigned int)tick;*(unsigned int *)(state+508)=(unsigned int)(tick>>32);}
