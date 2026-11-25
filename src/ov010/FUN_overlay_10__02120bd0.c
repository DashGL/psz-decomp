// FUN_overlay_10__02120bd0 @ 0x02120bd0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120bd0 @ 0x02120bd0 (thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG and concrete incoming/callee ABI reviewed. */
extern void FUN_020c38f0(void *,int),FUN_020c3864(void *,void *,int,int,int);void FUN_overlay_10__02120bd0(char *s){unsigned short text[2];int i;FUN_020c38f0(s+12,0);text[1]=0;for(i=0;i<12;i++){int value=((signed char *)s)[88+i];if(value!=-1){text[0]=value+0xff10;FUN_020c3864(s+12,text,15*i+8,0,2);}}}
