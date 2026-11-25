// FUN_overlay_14__02120084 @ 0x02120084 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120084 @ 0x02120084 (thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu display constructor with explicit embedded offsets and ARM mode. */
extern void FUN_020c2b50(void *),FUN_020c38f0(void *,int),FUN_overlay_14__0212049c(void *),FUN_overlay_14__02120138(void *);extern void *FUN_020c3564(void *),*FUN_overlay_14__021200f0(void *);
#pragma thumb off
extern void FUN_0200c938(void *,unsigned),FUN_0206557c(unsigned,void *,unsigned);extern void *FUN_0205e328(void);
#pragma thumb on
void *FUN_overlay_14__02120084(char *s){int i;FUN_020c2b50(s);FUN_020c3564(s+4);FUN_0200c938(s+64,12);*(int *)(s+76)=-2;*(int *)(s+80)=-1;FUN_overlay_14__021200f0(s+84);*(int *)(s+144)=0;*(int *)(s+148)=0;for(i=0;i<3;i++)((int *)(s+64))[i]=0;FUN_overlay_14__0212049c(s);FUN_overlay_14__02120138(s);FUN_0206557c(0,FUN_0205e328(),64);FUN_020c38f0(s+4,0);return s;}
