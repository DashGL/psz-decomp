// FUN_overlay_19__0219cbbc @ 0x0219cbbc (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch38.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219cbbc @ 0x0219cbbc (code 0xa8, full extent 0xac, thumb)
// check: vers=2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch461.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {unsigned angle;Vec second,first;} Frame;extern int FUN_02084cc0(void *);extern int FUN_020866b4(int,void *);extern int FUN_overlay_19__02198418(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_19__02199018(void *,void *,unsigned,int);extern int FUN_overlay_19__02198438(void *,void *);
void FUN_overlay_19__0219cbbc(int *self) { Frame f;int *owner=(int *)self[1],*state=(int *)self[2];int primary,other,alternate;f.angle=*(unsigned short *)(owner+17);primary=FUN_02084cc0((void *)0x0211a51c);alternate=state[26];other=state[27];if(primary!=-1 && FUN_020866b4(primary,&f.first)==1 && FUN_overlay_19__02198418(owner)==1){void *p;f.first.y=0;p=FUN_020ba894(72);if(p)p=FUN_overlay_19__02199018(p,&f.first,f.angle,1);FUN_overlay_19__02198438(owner,p);}if(primary==other){if(primary==alternate)alternate=-1;other=alternate;}if(other!=-1 && FUN_020866b4(other,&f.second)==1 && FUN_overlay_19__02198418(owner)==1){void *p;f.second.y=0;p=FUN_020ba894(72);if(p)p=FUN_overlay_19__02199018(p,&f.second,f.angle,0);FUN_overlay_19__02198438(owner,p);} }
