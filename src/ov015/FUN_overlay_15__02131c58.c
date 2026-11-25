// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0xb0 exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies.json
typedef struct {unsigned char data[240];} Copy_overlay_15__02131c58_1_240;
// FUN_overlay_15__02131c58 @ 0x02131c58 (thumb)
// flags: -O4,s
extern unsigned FUN_020ea140(const void *);
extern void FUN_overlay_15__02131fbc(unsigned);
#pragma thumb off
extern void FUN_020656b8(void *,unsigned,unsigned),FUN_02065774(const void *,void *,unsigned);
#pragma thumb on
void FUN_overlay_15__02131c58(void){
    unsigned char *base=*(unsigned char **)0x0213e8c4;
    unsigned char *source=base+1024;
    unsigned offset=(unsigned)source[244]<<8;
    unsigned char *destination=base+offset;
    unsigned i;
    *(Copy_overlay_15__02131c58_1_240 *)(destination)=*(const Copy_overlay_15__02131c58_1_240 *)(source);
    if(source[245]){
        FUN_020656b8(destination+192,0,4);
        FUN_020656b8(destination+196,0,4);
        destination[208]=0;
    }else{
        FUN_02065774(source+192,destination+192,4);
        FUN_02065774(source+196,destination+196,4);
        destination[208]=(unsigned char)FUN_020ea140(source+240);
    }
    if(source[246])FUN_020656b8(destination+200,0,8);
    else FUN_02065774(source+200,destination+200,8);
    FUN_overlay_15__02131fbc(source[244]);
}
