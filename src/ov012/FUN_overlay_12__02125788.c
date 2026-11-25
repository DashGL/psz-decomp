// FUN_overlay_12__02125788 @ 0x02125788 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125788 @ 0x02125788 (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full game UI/inventory body and concrete ABI reviewed. */
typedef struct{unsigned short a,b,c,pad;int x,y;} R;extern int FUN_overlay_12__02125708(void *,int),FUN_overlay_12__021233ec(void *);extern void *FUN_overlay_12__021232b0(void);extern void FUN_020c32b4(void *,int);void FUN_overlay_12__02125788(char *s){R r;r.a=0;r.b=0;r.c=0;r.a=0;r.b=0;r.c=0;r.x=0;r.y=0;r.x=0;r.y=20480;r.a=12;FUN_020c32b4(&r,FUN_overlay_12__02125708(s+12,1));FUN_overlay_12__021233ec(FUN_overlay_12__021232b0());}
