// FUN_overlay_29__02199c48 @ 0x02199c48 (0xbc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_29__02199c48 @ 0x02199c48 (code 0xb8, full extent 0xbc, thumb)
// check: vers=2.0/sp2p3 target=0xbc candidate=0xbc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch479.md.
 */
typedef struct {int x,y,z;} Vec; typedef struct {Vec scaled,direction;} Frame; extern int FUN_020370b8(void *,int,void *);extern void FUN_0205c8cc(void *,void *);extern void FUN_overlay_29__02199438(void *,void *);extern int FUN_02041474(void *,int);extern void FUN_02037924(void *);extern int FUN_overlay_29__02199b94(void *);
void FUN_overlay_29__02199c48(int *self) { Frame f;void *owner=(void *)self[1];int speed;if(FUN_020370b8(owner,FUN_overlay_29__02199b94((void *)self[2]),&f.direction)==1){if(f.direction.x || f.direction.y || f.direction.z)FUN_0205c8cc(&f.direction,&f.direction);speed=*(int *)0x0219bda0;f.scaled.x=(int)(((long long)f.direction.x*speed+2048)>>12);f.scaled.y=(int)(((long long)f.direction.y*speed+2048)>>12);f.scaled.z=(int)(((long long)f.direction.z*speed+2048)>>12);FUN_overlay_29__02199438(owner,&f.scaled);}if(FUN_02041474(owner,0))FUN_02037924((void *)self[2]); }
