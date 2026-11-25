// FUN_02090a28 @ 0x02090a28 (0x11a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x11a candidate=0x11a words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Submit flag-selected graphics descriptors within the render scope.
 * Evidence: scratch/coverage-high-game/inspect213.txt and 02090a28.txt. */
typedef struct{unsigned short id,a,b,pad;int x,y;} Desc;extern void FUN_020b3088(void *,int),FUN_020144f0(void),FUN_02014714(void),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,int);
void FUN_02090a28(char *s){Desc a,b,c,d,e;if(*(int *)(s+20)&128){if(*(void **)(s+24))FUN_020b3088(*(void **)(s+24),1);}else if(*(int *)(s+20)&64){if(*(void **)(s+24))FUN_020b3088(*(void **)(s+24),0);}FUN_020144f0();if(*(int *)(s+20)&4){FUN_02071d0c(&a);FUN_02090b44(&a);a.id=0;a.x=524288;a.y=847872;FUN_020c32b4(&a,*(int *)(s+8));}else if(*(int *)(s+20)&8){FUN_02071d0c(&b);FUN_02090b44(&b);b.id=1;b.x=524288;b.y=847872;FUN_020c32b4(&b,*(int *)(s+8));}else if(*(int *)(s+20)&16){FUN_02071d0c(&c);FUN_02090b44(&c);c.id=0;c.x=524288;c.y=847872;FUN_020c32b4(&c,*(int *)(s+12));}else if(*(int *)(s+20)&32){FUN_02071d0c(&d);FUN_02090b44(&d);d.id=1;d.x=524288;d.y=847872;FUN_020c32b4(&d,*(int *)(s+12));}if(*(int *)(s+20)&2){FUN_02071d0c(&e);FUN_02090b44(&e);e.id=12;e.x=524288;e.y=925696;FUN_020c32b4(&e,*(int *)(s+12));}FUN_02014714();}
