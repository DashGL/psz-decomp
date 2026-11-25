// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
unsigned short FUN_overlay_15__0212079c(unsigned short);
void FUN_overlay_15__021206c0(void *, const void *, int);

void FUN_overlay_15__021201cc(unsigned short *pkt, int a, int b, int c, signed char d, signed char e, const void *payload) {
    pkt[0] = FUN_overlay_15__0212079c(1);
    pkt[1] = 0;
    pkt[2] = 0;
    pkt[3] = FUN_overlay_15__0212079c((unsigned short)a);
    pkt[4] = 0;
    pkt[5] = FUN_overlay_15__0212079c((unsigned short)b);
    pkt[6] = FUN_overlay_15__0212079c((unsigned short)c);
    ((signed char *)pkt)[14] = d;
    ((signed char *)pkt)[15] = e;
    FUN_overlay_15__021206c0(pkt + 8, payload, 8);
}
