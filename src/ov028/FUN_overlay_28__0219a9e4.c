// FUN_overlay_28__0219a9e4 @ 0x0219a9e4 (0xb8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a9e4 @ 0x0219a9e4 (code 0xb4, full extent 0xb8, thumb)
// check: vers=2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch476.md.
 */
typedef struct {int x,y,z;} Vec; typedef struct {Vec scaled,direction;} Frame; extern int FUN_020370b8(void *,int,void *);extern void FUN_0205c8cc(void *,void *);extern void FUN_overlay_28__0219ad24(void *,void *);extern int FUN_02040d44(void *,int);extern void FUN_02037924(void *);
void FUN_overlay_28__0219a9e4(int *self) { Frame f;void *owner=(void *)self[1];int speed;if(FUN_020370b8(owner,((int *)self[2])[20],&f.direction)==1){if(f.direction.x || f.direction.y || f.direction.z)FUN_0205c8cc(&f.direction,&f.direction);speed=*(int *)0x0219c2e8;f.scaled.x=(int)(((long long)f.direction.x*speed+2048)>>12);f.scaled.y=(int)(((long long)f.direction.y*speed+2048)>>12);f.scaled.z=(int)(((long long)f.direction.z*speed+2048)>>12);FUN_overlay_28__0219ad24(owner,&f.scaled);}if(FUN_02040d44(owner,0))FUN_02037924((void *)self[2]); }
