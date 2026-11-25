// FUN_overlay_14__02120ee0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_14__02120ee0 @ 0x02120ee0 (code 0x8e, thumb)
// check: vers=2.0/sp2p3 target=0x8e candidate=0x8e words=0 exact_bytes=0 bad_relocs=0
extern void *FUN_02086e3c(void);
extern void FUN_02086e48(void *, int);
extern void *FUN_020870c4(void *);
extern void FUN_020c4434(void *);
extern void FUN_overlay_14__02120764(void *, void *);
extern void *FUN_overlay_14__02120078(void);
extern void FUN_overlay_14__021204ec(void *, int, void *);

int FUN_overlay_14__02120ee0(int *self, short *out_cmd)
{
    unsigned char slot_data[0x3c];
    int idx = self[1];

    if (idx >= 0 && idx < 3) {
        void *hdr;
        int flag;
        FUN_02086e48(FUN_02086e3c(), idx);
        hdr = FUN_020870c4(FUN_02086e3c());
        FUN_020c4434(slot_data + 8);
        FUN_020c4434(slot_data + 0x18);
        FUN_overlay_14__02120764(slot_data, hdr);
        flag = !slot_data[3];
        if (flag == 0) {
            void *p;
            out_cmd[0] = 4;
            out_cmd[1] = 2;
            p = FUN_overlay_14__02120078();
            if (p != 0) {
                FUN_overlay_14__021204ec(p, idx, slot_data);
            }
        } else {
            out_cmd[0] = 0xb;
            out_cmd[1] = 9;
        }
    } else if (idx == 3) {
        out_cmd[0] = 0xb;
        out_cmd[1] = 0xa;
    } else if (idx == 4) {
        out_cmd[0] = 0xb;
        out_cmd[1] = 2;
    }
    return 1;
}
