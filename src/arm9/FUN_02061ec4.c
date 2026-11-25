// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -O4,p -noThumb

extern const int DAT_020f19b0[];
extern int FUN_02061e18(int, unsigned int, unsigned int);

int FUN_02061ec4(int idx, unsigned int addr, unsigned int size) {
    switch (DAT_020f19b0[idx]) {
    case 0:
    case 2:
        return FUN_02061e18(idx, addr, size);
    case 1:
        if (addr >= 0x02000000u && addr < 0x023fe800u) {
            unsigned int end = addr + size;
            if (addr < 0x02300000u) {
                if (end > 0x02300000u) {
                    return 0;
                }
            }
            addr = end;
            if (addr <= 0x02300000u) {
                return 1;
            }
            if (addr < 0x023fe800u && size <= 0x40000u) {
                return 1;
            }
            return 0;
        }
        if (addr >= 0x037f8000u && addr < 0x0380f000u) {
            addr += size;
            return addr <= 0x0380f000u ? 1 : 0;
        }
        break;
    default:
        return 0;
    }
    return 0;
}
