// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned char u8;

struct FSFile {
    u32 pad0[2];
    const signed char *arc_name; // +0x08
    u32 pad1[6];
    u32 top;              // +0x24
    u32 pad2;             // +0x28
    u32 pos;              // +0x2c
    u32 pad3[6];          // +0x30..0x48
};

struct S617a4 {
    u32 base;
    int dst;
    int src;
    u32 size;
};

struct RomHeader {
    u32 pad0[8];
    u32 main_rom_offset;  // +0x20
    u32 main_entry;       // +0x24
    u32 main_ram_address; // +0x28
    u32 main_size;        // +0x2c
    u32 sub_rom_offset;   // +0x30
    u32 sub_entry;        // +0x34
    u32 sub_ram_address;  // +0x38
    u32 sub_size;         // +0x3c
    u32 pad1[8];
    u32 flags_60;         // +0x60
    u32 pad2[7];
    u32 rom_size;         // +0x80
};

struct SegInfo {
    u32 pad0[4];
    u8 name[4];           // +0x10
    int name_len;         // +0x14
    const signed char *arc; // +0x18
    u32 pad1[11];
    u32 buf_48;           // +0x48
};

extern u8 DAT_020f96f0[];
extern const u32 *DAT_020f96ec;
extern u8 DAT_02000aac[];

extern int FUN_0205a150(struct FSFile *, void *, u32);
extern int FUN_0205a160(struct FSFile *, u32, int);
extern void FUN_02059cd4(struct FSFile *);
extern void *FUN_020596a4(const void *, int);
extern int FUN_02059efc(struct FSFile *, void *, u32, u32, u32);
extern int FUN_02059ffc(struct FSFile *);
extern void FUN_02065774(const void *, void *, u32);
extern void FUN_02064594(void *);
extern void FUN_020645a8(void *, u32, u32, void *, int);
extern void FUN_020617a4(struct S617a4 *, u32, u32, int);
extern void FUN_0206740c(void *, u32);

int FUN_0206132c(struct FSFile *file, void *buf, u32 len) {
    int ret = 0;
    if (len >= 0x164) {
        u32 rest = len;
        u8 *dst = (u8 *)buf;
        int is_own = 0;
        struct SegInfo *seg = 0;
        u32 *tbl = 0;
        u32 base_pos;
        u32 rom_size;
        struct FSFile tmp_file;
        struct RomHeader *hdr = (struct RomHeader *)buf;

        dst += 0x160;
        rest -= 0x160;

        if (file != 0) {
            base_pos = file->pos - file->top;
            if (FUN_0205a150(file, buf, 0x160) < 0x160) {
                rest = 0;
            }
            rom_size = hdr->rom_size;
            if (rom_size == 0) {
                rom_size = 0x01000000;
            }
        } else {
            const struct RomHeader *own = (const struct RomHeader *)0x027ffe00;
            rom_size = own->rom_size;
            if (rom_size == 0) {
                rom_size = 0x01000000;
            }
            is_own = 1;
            FUN_02059cd4(&tmp_file);
            FUN_02059efc(&tmp_file, FUN_020596a4(DAT_020f96f0, 3), 0, rom_size + 0x88, 0xffffffff);
            file = &tmp_file;
            base_pos = tmp_file.pos - tmp_file.top;
            FUN_02065774(own, buf, 0x160);
            hdr->flags_60 |= 0x00406000;
        }

        if (rest < 0x88) {
            rest = 0;
        } else {
            FUN_0205a160(file, base_pos + rom_size, 0);
            FUN_0205a150(file, dst, 0x88);
            dst += 0x88;
            rest -= 0x88;
        }

        if (rest >= 0x70) {
            int i;
            const signed char *arc_name;
            seg = (struct SegInfo *)dst;
            FUN_02064594(dst);
            dst += 0x70;
            rest -= 0x70;
            FUN_020645a8(seg, 0, 0x160, buf, 3);
            arc_name = file->arc_name;
            for (i = 0; i < 3 && arc_name[i] != 0; i++) {}
            FUN_02065774(arc_name, seg->name, (u32)i);
            seg->name_len = i;
            seg->arc = arc_name;
        } else {
            rest = 0;
        }

        if (rest < 0x10) {
            rest = 0;
        } else {
            tbl = (u32 *)dst;
            tbl[0] = 0;
            tbl[1] = hdr->main_rom_offset + (base_pos + file->top);
            tbl[2] = hdr->sub_rom_offset + (base_pos + file->top);
            dst += 0x10;
            rest -= 0x10;
        }

        if (rest >= hdr->main_size + hdr->sub_size) {
            u32 sz9;
            u32 top = file->top;
            FUN_0205a160(file, tbl[1] - top, 0);
            FUN_0205a150(file, dst, hdr->main_size);
            FUN_020645a8(seg, tbl[1], hdr->main_size, dst, 3);
            sz9 = hdr->main_size;
            FUN_0205a160(file, tbl[2] - top, 0);
            FUN_0205a150(file, dst + sz9, hdr->sub_size);
            FUN_020645a8(seg, tbl[2], hdr->sub_size, dst + sz9, 3);
            ret = 1;
        } else if (rest >= 0xcc00) {
            u32 off;
            u32 top = file->top;
            off = tbl[1];
            FUN_0205a160(file, off - top, 0);
            FUN_0205a150(file, dst, 0x4400);
            FUN_020645a8(seg, off, 0x4400, dst, 3);

            FUN_0205a160(file, (off + 0x4400) - top, 0);
            FUN_0205a150(file, dst + 0x4400, 0x4400);
            FUN_020645a8(seg, off + 0x4400, 0x4400, dst + 0x4400, 2);

            FUN_0205a160(file, (off + 0x8800) - top, 0);
            FUN_0205a150(file, dst + 0x8800, 0x4400);
            FUN_020645a8(seg, off + 0x8800, 0x4400, dst + 0x8800, 2);

            ret = 1;
        }

        FUN_0205a160(file, base_pos, 0);
        if (is_own) {
            FUN_02059ffc(&tmp_file);
            if (ret) {
                struct S617a4 info;
                const u32 *p = DAT_020f96ec;
                info.base = hdr->main_rom_offset;
                info.dst = (int)(hdr->main_ram_address - hdr->main_rom_offset);
                info.src = (int)(seg->buf_48 - hdr->main_rom_offset);
                info.size = len;
                FUN_020617a4(&info, 0x4000, 0x8000, 1);
                while (p[1] != 0) {
                    FUN_020617a4(&info, p[0], p[0] + p[1], 0);
                    p += 2;
                }
                {
                    u8 *d = (u8 *)seg->buf_48;
                    d += (u32)DAT_02000aac - hdr->main_ram_address;
                    *(u32 *)d = 0xe12fff1e;
                }
            }
        }
        if (ret) {
            FUN_0206740c(buf, len);
        }
    }
    return ret;
}
