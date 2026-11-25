// FUN_overlay_31__0219abcc @ 0x0219abcc (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219abcc @ 0x0219abcc (code 0x6a, full extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete group state notification and traversal.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch562.md.
 */
typedef void (*Event)(void *,int);extern int FUN_02072a70(void *,unsigned);extern unsigned *FUN_02072a40(void *,unsigned,int);extern void FUN_02044570(void *,int,int),FUN_02040c0c(void *,int,int,int,int),FUN_020439ac(unsigned);
void FUN_overlay_31__0219abcc(void **self) { void *owner=self[1];void **manager;void *group;int count,i;FUN_02044570(owner,0,0);FUN_02040c0c(owner,0,5,4096,0);manager=*(void ***)0x02108c84;if(manager&&manager[22]){void *child=manager[22];((Event)(*(unsigned **)child)[22])(child,9);}group=*(char **)0x0210e24c+0x74;count=FUN_02072a70(group,1);for(i=0;i<count;i++){unsigned *record=FUN_02072a40(group,1,i);if(record)FUN_020439ac(record[0]);}self[3]=0; }
