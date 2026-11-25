// FUN_overlay_22__021a07c0 @ 0x021a07c0 (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a07c0 @ 0x021a07c0 (full extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete component state setup. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch590.md. */
typedef struct Vec{int x,y,z;}Vec;typedef void (*Event)(void *,int);extern char *DAT_02108c84;extern Vec DAT_020fc958;extern void FUN_02044060(void *);extern void FUN_overlay_22__0219aa30(void *,const Vec *,unsigned short,unsigned short,unsigned short);extern void FUN_overlay_22__0219a05c(void *,int);extern void FUN_overlay_22__0219a070(void *,int);extern void FUN_overlay_22__0219a0f4(void *,int);
void FUN_overlay_22__021a07c0(void *unused,void *actor,void **owner){char *component=DAT_02108c84;if(component){component=*(char **)(component+0x58);if(component)((Event)(*(unsigned **)component)[22])(component,6);}FUN_02044060(actor);FUN_overlay_22__0219aa30(owner[14],&DAT_020fc958,0,0,0);FUN_overlay_22__0219a05c(owner[14],1);FUN_overlay_22__0219a070(owner[14],0);FUN_overlay_22__0219a0f4(owner[14],8);FUN_overlay_22__0219aa30(owner[13],&DAT_020fc958,0,0,0);FUN_overlay_22__0219a05c(owner[13],1);FUN_overlay_22__0219a070(owner[13],0);FUN_overlay_22__0219a0f4(owner[13],9);FUN_overlay_22__0219a05c(owner[12],0);FUN_overlay_22__0219a070(owner[12],0);}
