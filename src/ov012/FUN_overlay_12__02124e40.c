// FUN_overlay_12__02124e40 @ 0x02124e40 (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02124e40 @ 0x02124e40 (thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Configure menu background planes and lazily create its child. */
extern void FUN_020a45a4(int);extern void *FUN_020ba894(unsigned),*FUN_overlay_12__02125110(void *);
#define H(a) (*(volatile unsigned short *)(a))
#define W(a) (*(volatile unsigned *)(a))
void FUN_overlay_12__02124e40(void **self){unsigned mask;void *child;FUN_020a45a4(2);H(0x0400000a)=(H(0x0400000a)&0x43)|4;FUN_020a45a4(8);H(0x0400000e)=(H(0x0400000e)&0x43)|0x190;mask=(W(0x04001000)&0x1f00)>>8;W(0x04001000)=(W(0x04001000)&0xffffe0ff)|((mask|8)<<8);H(0x0400100e)=(H(0x0400100e)&0x43)|0x190;if(!self[1]){child=FUN_020ba894(76);if(child)child=FUN_overlay_12__02125110(child);self[1]=child;}}
