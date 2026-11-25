// FUN_overlay_12__02122b58 @ 0x02122b58 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// FUN_overlay_12__02122b58 @ 0x02122b58 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete UI initialization and concrete ABI reviewed. */
extern void FUN_020a45a4(int),FUN_overlay_12__02134a90(void *,int),FUN_overlay_12__02136278(void *);void FUN_overlay_12__02122b58(char *s){FUN_020a45a4(2);*(volatile unsigned short *)0x0400000a=(*(volatile unsigned short *)0x0400000a&67)|4;FUN_020a45a4(8);*(volatile unsigned short *)0x0400000e=(*(volatile unsigned short *)0x0400000e&67)|400;FUN_overlay_12__02134a90(s+4,4);FUN_overlay_12__02136278(*(void **)0x0213f2fc);}
