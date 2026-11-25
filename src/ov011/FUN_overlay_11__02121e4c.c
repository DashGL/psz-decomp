// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_overlay_11__02121e4c @ 0x02121e4c, verified extent 0x40.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020f4b04[];
extern unsigned char DAT_0212464c[];
// FUN_overlay_11__02121e4c @ 0x02121e4c (thumb)
// flags: -O4,s
extern void FUN_overlay_11__02122fc8(void *);
void FUN_overlay_11__02121e4c(unsigned *self,char *output){
    unsigned value=self[1];
    if(!self[9]){
        output[32]=(char)(*(unsigned **)((unsigned int)DAT_0212464c + 4u))[value];
        value=255;
    }else value+=((unsigned *)((unsigned int)DAT_020f4b04 + 0u))[(signed char)output[32]];
    output[36]=(char)value;
    FUN_overlay_11__02122fc8(output);
}
