// FUN_overlay_12__021375f8 @ 0x021375f8 (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__021375f8 @ 0x021375f8 (thumb)
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full teardown including ARM getter/fill ABIs reviewed. */
extern void FUN_overlay_12__02135cbc(void),FUN_overlay_12__02135464(void),FUN_overlay_12__021376a0(void *),FUN_overlay_12__02135160(void),FUN_overlay_12__0212c84c(void),FUN_0206557c(int,void *,unsigned),FUN_020c2b68(void *);extern void *FUN_0205e260(void),*FUN_0205e464(void);void *FUN_overlay_12__021375f8(char *s){unsigned size;void *dest;FUN_overlay_12__02135cbc();FUN_overlay_12__02135464();FUN_overlay_12__021376a0(s);FUN_overlay_12__02135160();FUN_overlay_12__0212c84c();size=*(unsigned *)(*(char **)(s+4)+80);dest=FUN_0205e260();FUN_0206557c(0,dest,size);size=*(unsigned *)(*(char **)(s+4)+84);dest=FUN_0205e464();FUN_0206557c(0,dest,size);FUN_020c2b68(s+4);FUN_020c2b68(s);return s;}
