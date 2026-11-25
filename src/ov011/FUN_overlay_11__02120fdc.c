// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_11__02120fdc @ 0x02120fdc, verified extent 0x20.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02123854[];
// FUN_overlay_11__02120fdc @ 0x02120fdc (thumb)
// flags: -O4,s
typedef void (*Transfer)(void *,unsigned,unsigned);
typedef struct {unsigned kind,offset;void *source;unsigned size;} Request;
void FUN_overlay_11__02120fdc(unsigned unused,Request *request){
    if(request->source)((Transfer *)((unsigned int)DAT_02123854 + 0u))[request->kind](request->source,request->offset,request->size);
}
