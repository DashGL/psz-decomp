// FUN_overlay_11__02120d28 @ 0x02120d28 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__02120d28 @ 0x02120d28 (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Five incoming parameters, seven-input recursive renderer, full do-while extent. */
typedef struct {unsigned short count,pad;int stride;void **nodes;void **data;} Record;extern char *FUN_overlay_11__021208e4(void *,char *,void *,void ***,int,int,int);char *FUN_overlay_11__02120d28(char *s,char *out,Record *record,int frame,int value){void **p=record->nodes,**end=p+record->count,**data;*(int *)(s+11172)=0;data=record->data+record->stride*frame;do{out=FUN_overlay_11__021208e4(s,out,((void **)*p)[1],&data,value,-1,0);p++;}while(p<end);return out;}
