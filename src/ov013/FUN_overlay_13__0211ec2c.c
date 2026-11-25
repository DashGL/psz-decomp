// FUN_overlay_13__0211ec2c @ 0x0211ec2c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211ec2c @ 0x0211ec2c (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete game UI/protocol function and concrete ABI reviewed. */
extern void FUN_020c38f0(void *,int),FUN_020c3588(void *),FUN_020a5130(void),FUN_020a4ba8(void),FUN_020b3074(void *),FUN_020ba8ac(void *),FUN_020c3578(void *);void *FUN_overlay_13__0211ec2c(char *s){void *p;*(unsigned *)s=0x0211faa8;FUN_020c38f0(s+16,0);FUN_020c3588(s+16);FUN_020a5130();FUN_020a4ba8();p=*(void **)(s+76);if(p){if(p){FUN_020b3074(p);FUN_020ba8ac(p);}*(void **)(s+76)=0;}FUN_020c3578(s+16);return s;}
