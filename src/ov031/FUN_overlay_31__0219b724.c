// FUN_overlay_31__0219b724 @ 0x0219b724 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219b724 @ 0x0219b724 (code 0x60, pool extent 0x68, thumb)
// check: vers=2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Collect eligible registry entities into their three indexed output slots.
 * Field identities remain provisional.
 */
extern int FUN_02072a70(void *,int);extern int *FUN_02072a40(void *,int,int);extern int FUN_02078198(int);extern void *FUN_020352a4(void *,int);extern unsigned char *FUN_020352c0(void *);
void FUN_overlay_31__0219b724(void *unused,unsigned char **out){int i,count;unsigned char *registry;for(i=0;i<3;i++)out[i]=0;registry=*(unsigned char **)0x0210e24c+116;count=FUN_02072a70(registry,1);for(i=0;i<count;i++){int *record=FUN_02072a40(registry,1,i);if(record){int id=record[0];if(FUN_02078198(id)){unsigned char *entity=FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,id));out[*(int *)(entity+216)]=entity;}}}}
