// FUN_overlay_9__0211feb4 @ 0x0211feb4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211feb4 @ 0x0211feb4 (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Concrete full body and call ABI reviewed. */
extern void FUN_020c38f0(void *,int),FUN_020c3588(void *),FUN_020a5130(void),FUN_020a4ba8(void),FUN_020b3074(void *),FUN_020c3578(void *),FUN_020ba8ac(void *);void *FUN_overlay_9__0211feb4(char *s){*(unsigned *)s=0x02121068;FUN_020c38f0(s+16,0);FUN_020c3588(s+16);FUN_020a5130();FUN_020a4ba8();FUN_020b3074(s+84);FUN_020c3578(s+16);FUN_020ba8ac(s);return s;}
