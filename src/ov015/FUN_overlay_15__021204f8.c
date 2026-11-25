// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7a, exact bytes and relocation targets.
void *FUN_overlay_15__0211e640(int);
void FUN_overlay_15__0211e650(void *);
void FUN_overlay_15__02120574(int, void *, int, const void *, int);
void FUN_overlay_15__021205a8(void *, void *, int);
void FUN_overlay_15__021205cc(void *, int, void *);

int FUN_overlay_15__021204f8(void *data, int len, const void *key, int key_len) {
    int i;
    void *buf2;
    void *buf1 = FUN_overlay_15__0211e640(len / 2);

    if (buf1 == 0) {
        return -1;
    }
    buf2 = FUN_overlay_15__0211e640(len);
    if (buf2 == 0) {
        FUN_overlay_15__0211e650(buf1);
        return -1;
    }
    for (i = 0; i < 2; i++) {
        FUN_overlay_15__02120574(i, buf1, len, key, key_len);
        FUN_overlay_15__021205a8(buf1, data, len);
        FUN_overlay_15__021205cc(data, len, buf2);
    }
    FUN_overlay_15__0211e650(buf1);
    FUN_overlay_15__0211e650(buf2);
    return 0;
}
