// FUN_overlay_19__02197f98 @ 0x02197f98 (0xa4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch48.json; original draft retained for referenced provenance.
// FUN_overlay_19__02197f98 @ 0x02197f98 (full extent 0xa4, thumb)
// check: vers=2.0/sp2p3 target=0xa4 candidate=0xa4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete owner initialization. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch588.md. */
typedef void (*Event)(void *,int);extern char *DAT_02108c84;extern void FUN_020352dc(void *,int,int);extern unsigned DAT_0219d10c;extern void FUN_0200c938(void *,unsigned);
char *FUN_overlay_19__02197f98(char *self,int id) { int i;char *component;FUN_020352dc(self,id,0x44);*(void **)self=&DAT_0219d10c;*(int *)(self+0xd4)=0;FUN_0200c938(self+0xd8,160);
 *(int *)(self+0x178)=0;*(int *)(self+0x17c)=0;*(int *)(self+0x180)=0;*(int *)(self+0x184)=0;*(int *)(self+0x188)=0;*(unsigned short *)(self+0x18c)=0;*(int *)(self+0x190)=0;*(int *)(self+0x194)=0;*(int *)(self+0x198)=0;*(int *)(self+0x19c)=0;*(int *)(self+0xb4)=30;
 for(i=0;i<40;i++)*(int *)(self+0xd8+4*i)=0;
 component=DAT_02108c84;if(component){component=*(char **)(component+0x5c);if(component)((Event)(*(unsigned **)component)[21])(component,9);}
 *(int *)(self+0x188)=4096;*(unsigned short *)(self+0x18c)=0x8000;return self; }
