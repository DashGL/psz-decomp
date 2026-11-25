// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
void FUN_overlay_15__0212028c(void *, void *, int, int, void *, void *, int);
unsigned short FUN_overlay_15__0212079c(unsigned short);
void FUN_overlay_15__021206c0(void *, const void *, int);

void FUN_overlay_15__02120178(int mode, unsigned short *dst, void *src, short *len_io, unsigned short *flag_out, int extra) {
    if (mode == 1) {
        *flag_out = 1;
        FUN_overlay_15__0212028c(src, dst + 2, *len_io, extra, dst + 1, (void *)0x0213d020, 8);
        dst[0] = FUN_overlay_15__0212079c(*len_io);
        *len_io += 4;
    } else {
        FUN_overlay_15__021206c0(dst, src, *len_io);
    }
}
