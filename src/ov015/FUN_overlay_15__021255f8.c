// FUN_overlay_15__021255f8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__021255f8 @ 0x021255f8 (code 0x34, pool extent 0x40, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load selected palette resource, copy it to shared palette, free and schedule update.
 * Field identities remain provisional.
 */
extern char * D_0213ab94[];
extern char *FUN_overlay_15__021252bc(const char *);
extern void *FUN_overlay_15__0213553c(const char *,int *,int);
extern void FUN_020655d8(const void *,void *,unsigned int);
extern void FUN_overlay_15__021355e0(void *);
extern void *FUN_overlay_15__021373d8(int,void *,void *,int);
void FUN_overlay_15__021255f8(int index) {void *p=FUN_overlay_15__0213553c(FUN_overlay_15__021252bc(D_0213ab94[index]),0,4);FUN_020655d8(p,*(void **)0x0213e7d4,192);FUN_overlay_15__021355e0(p);FUN_overlay_15__021373d8(1,(void *)0x02125661,0,120);}
