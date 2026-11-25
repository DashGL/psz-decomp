// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0201c920(void *, int);

void FUN_0201aa24(void *a0, int a1, void *a2) {
    int r6 = (*(void **)((char *)a0 + 0x20) != 0) ? *(unsigned char *)((char *)a0 + 0x91) : 0;
    int r0;
    if (r6 == 1) {
        *(int *)((char *)a0 + 8) &= ~0x40;
        (*(void (**)(void *))((char *)a0 + 0x20))(a0);
        r6 = (*(void **)((char *)a0 + 0x20) != 0) ? *(unsigned char *)((char *)a0 + 0x91) : 0;
        r0 = *(int *)((char *)a0 + 8) & 0x40;
    } else {
        r0 = 0;
    }
    if (r0 == 0 && (*(int *)((char *)a0 + 8) & 0x100) == 0) {
        FUN_0201c920((char *)a2 + *(int *)((char *)a2 + 8), *(int *)((char *)a2 + 0xc));
    }
    if (r6 == 2) {
        *(int *)((char *)a0 + 8) &= ~0x40;
        (*(void (**)(void *))((char *)a0 + 0x20))(a0);
        r6 = (*(void **)((char *)a0 + 0x20) != 0) ? *(unsigned char *)((char *)a0 + 0x91) : 0;
    }
    if (r6 == 3) {
        *(int *)((char *)a0 + 8) &= ~0x40;
        (*(void (**)(void *))((char *)a0 + 0x20))(a0);
    }
}
