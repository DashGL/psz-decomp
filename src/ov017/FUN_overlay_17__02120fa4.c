// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0xac candidate=0xac exact_bytes=0 bad_relocs=0
// Record stride and table evidence: notes/sessions/matching-overlays-2026-11-12-continue-records.json
typedef struct {int field[12];} Record_02120fa4;
extern const char *DAT_021250bc[4];
// FUN_overlay_17__02120fa4 @ 0x02120fa4 (code 0xa8, full extent 0xac, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch512.md.
 */
typedef struct {int newSlot,size;unsigned char item[16];} Frame;extern void *FUN_020ba374(const char *,int *,unsigned);extern Record_02120fa4 *FUN_020ba440(void *);extern void *FUN_0203955c(void *);extern void FUN_02084a1c(void *,unsigned);extern char *FUN_02086e3c(void);extern int FUN_020b00e8(void *,void *,int,int *);extern int FUN_020b0494(void *);extern void FUN_020ba8c4(void *);
int FUN_overlay_17__02120fa4(void *unused,int category,int index) { Frame f;void *resource;Record_02120fa4 *record;char *inventory;int result;if(category<0 || category>=4)return 0;if(index<0)return 0;f.size=0;resource=FUN_020ba374(DAT_021250bc[category],&f.size,16);if(!resource)return 0;record=FUN_020ba440(resource)+index;FUN_0203955c(f.item);f.item[0]=record->field[0];f.item[3]=record->field[1];f.item[1]=record->field[2];f.item[2]=record->field[3];if(record->field[0]==3)FUN_02084a1c(f.item,record->field[4]);inventory=FUN_02086e3c()+16;f.newSlot=0;result=FUN_020b00e8(inventory,f.item,0,&f.newSlot);if(f.newSlot==1){int capacity=*(short *)(inventory+8);if(capacity-FUN_020b0494(inventory)<=0)result=0;}if(resource)FUN_020ba8c4(resource);return result; }
