// FUN_overlay_31__0219af64 @ 0x0219af64 (0x90, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219af64 @ 0x0219af64 (full extent 0x90, thumb)
// check: vers=2.0/sp2p3 target=0x90 candidate=0x90 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete owner initialization. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch588.md. */
typedef void (*Event)(void *,int);extern char *DAT_02108c84;extern void FUN_020352dc(void *,int,int);extern unsigned DAT_0219cfb0;extern void FUN_overlay_31__0219a750(void *);extern void FUN_02044570(void *,int,int);
char *FUN_overlay_31__0219af64(char *self,int id,int resource) { char *component;FUN_020352dc(self,id,resource);*(void **)self=&DAT_0219cfb0;*(int *)(self+0xd4)=0;FUN_overlay_31__0219a750(self+0xd8);*(int *)(self+0x13c)=6;*(int *)(self+0x140)=-1;
 FUN_02044570(self,0,0);FUN_02044570(self,1,0);FUN_02044570(self,2,0);FUN_02044570(self,3,0);FUN_02044570(self,4,0);FUN_02044570(self,5,0);*(int *)(self+0xb4)=128;
 component=DAT_02108c84;if(component){component=*(char **)(component+0x5c);if(component)((Event)(*(unsigned **)component)[21])(component,7);}return self; }
