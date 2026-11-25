// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// FUN_overlay_31__0219b520 @ 0x0219b520 (code 0x5a, pool extent 0x74, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Mark three board cells using the configured coordinate pairs.
 * Field identities remain provisional.
 */
extern char G_0219CF0C[]; extern char G_0219CF0D[]; extern char G_0219CF0E[]; extern char G_0219CF0F[]; extern char G_0219CF10[]; extern char G_0219CF11[];
extern int FUN_overlay_31__0219a914(void *,const signed char *,const signed char *);extern void FUN_overlay_31__0219a828(void *,signed char *);
void FUN_overlay_31__0219b520(unsigned char *self){signed char a,b,c;a=FUN_overlay_31__0219a914(self+216,(signed char *)G_0219CF11,(signed char *)G_0219CF0D);FUN_overlay_31__0219a828(self+216,&a);b=FUN_overlay_31__0219a914(self+216,(signed char *)G_0219CF0E,(signed char *)G_0219CF10);FUN_overlay_31__0219a828(self+216,&b);c=FUN_overlay_31__0219a914(self+216,(signed char *)G_0219CF0F,(signed char *)G_0219CF0C);FUN_overlay_31__0219a828(self+216,&c);}
