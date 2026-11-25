// FUN_overlay_10__0211fe40 @ 0x0211fe40 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211fe40 @ 0x0211fe40 (code 0x72, pool extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy paired display components, release two handles, reset video resources, and destroy embedded base.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);extern void FUN_020c3588(void *);extern void *FUN_020c1fc8(void);extern void FUN_020c2624(void *,int *);extern void FUN_overlay_10__02120128(void *);extern void FUN_020c3578(void *);extern void FUN_020c2b68(void *);void *FUN_overlay_10__0211fe40(unsigned char *p) {int i;*(unsigned int *)p=0x02122b1c;FUN_020c38f0(p+8,0);FUN_020c3588(p+8);FUN_020c38f0(p+68,0);FUN_020c3588(p+68);for(i=0;i<2;i++)if(((int *)(p+128))[i]!=-1)FUN_020c2624(FUN_020c1fc8(),(int *)(p+128)+i);FUN_overlay_10__02120128(p);FUN_020c3578(p+68);FUN_020c3578(p+8);FUN_020c2b68(p+4);return p;}
