// FUN_overlay_10__02120d3c @ 0x02120d3c (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120d3c @ 0x02120d3c (thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full caller-owned event update, concrete helper ABI. */
typedef struct {short type,id;int data;} Event;extern void *FUN_overlay_10__0211ec64(void);extern int FUN_overlay_10__0211f0c4(void *);extern void FUN_overlay_10__02120f78(void),FUN_overlay_10__02120f68(void),FUN_020c193c(int,int,int,int,int);
int FUN_overlay_10__02120d3c(int *s,Event *e){if(!s[1]){s[4]=1;if(FUN_overlay_10__0211f0c4(FUN_overlay_10__0211ec64()))return 1;FUN_020c193c(0,5,0,0,-1);return 0;}e->type=5;if(s[2]==1){e->id=2;e->data=s[3];FUN_overlay_10__02120f78();}else{e->id=0;FUN_overlay_10__02120f68();}return 1;}
