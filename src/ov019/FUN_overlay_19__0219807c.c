// FUN_overlay_19__0219807c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_19__0219807c @ 0x0219807c (code 0x3a, full extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete owner destructor lifecycle.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch552.md.
 */
typedef void (*Clear)(void *,int);extern void FUN_overlay_19__021986f4(void *);extern void FUN_02051128(void *);extern void *FUN_02035518(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_19__0219807c(void *self) { int *manager;*(unsigned *)self=0x0219d10c;FUN_overlay_19__021986f4(self);FUN_02051128(*(void **)0x0210e24c);manager=*(int **)0x02108c84;if(manager){void *child=(void *)manager[23];if(child)((Clear)(*(unsigned **)child)[21])(child,0);}FUN_02035518(self);FUN_020ba8ac(self);return self; }
