// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0 full_extent=0x44
// Actual24-byte ROM table record: notes/sessions/matching-overlays-2026-11-12-continue-strides.json
typedef struct {int field[6];} Record_0212c5c4;
// flags: -O4,s
extern const Record_0212c5c4 data_0213bf74[];
extern void FUN_overlay_12__02131f88(void *);
int FUN_overlay_12__0212c5c4(int *self)
{
    void (*callback)(void);
    if(data_0213bf74[self[20]].field[0]){
        callback=(void (*)(void))self[23];if(callback)callback();
        FUN_overlay_12__02131f88(self);return 1;
    }
    if(self[20]==0){
        callback=(void (*)(void))self[23];
        if(callback){callback();FUN_overlay_12__02131f88(self);return 1;}
    }
    return 0;
}
