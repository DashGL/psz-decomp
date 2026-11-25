// FUN_overlay_21__0219b008 @ 0x0219b008 (0x14c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219b008.c
// check: vers=2.0/sp2p3 target=0x14c candidate=0x14c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_overlay_21__0219b154(char *self);

void FUN_overlay_21__0219b008(char *self) {
    void *sub;

    if (*(int *)(self + 0xc) == 0) {
        switch (*(int *)(self + 0x18)) {
        case 0:
            *(void **)(self + 0x88) = *(void **)(self + 0x8c);
            break;
        case 1:
            *(void **)(self + 0x88) = *(void **)(self + 0x90);
            break;
        case 2:
            *(void **)(self + 0x88) = *(void **)(self + 0x94);
            break;
        case 5:
            *(void **)(self + 0x88) = *(void **)(self + 0x98);
            break;
        case 6:
            *(void **)(self + 0x88) = *(void **)(self + 0x9c);
            break;
        case 7:
            *(void **)(self + 0x88) = *(void **)(self + 0xa0);
            break;
        case 8:
            *(void **)(self + 0x88) = *(void **)(self + 0xa4);
            break;
        case 9:
            *(void **)(self + 0x88) = *(void **)(self + 0xa8);
            break;
        case 10:
            *(void **)(self + 0x88) = *(void **)(self + 0xac);
            break;
        case 11:
            *(void **)(self + 0x88) = *(void **)(self + 0xb0);
            break;
        case 3:
            *(void **)(self + 0x88) = *(void **)(self + 0xb4);
            break;
        case 12:
            *(void **)(self + 0x88) = *(void **)(self + 0xb8);
            break;
        case 4:
        default:
            *(void **)(self + 0x88) = 0;
            break;
        }
        *(int *)(self + 0x14) = *(int *)(self + 0x18);
    }

    sub = *(void **)(self + 0x88);
    if (sub != 0 && *(int *)(self + 0x80) == 0) {
        if (*(int *)(self + 0xc) == 0) {
            ((void (*)(void *))(*(int *)(*(int *)sub + 8)))(sub);
            *(int *)(self + 0xc) = 1;
        }
        if (*(int *)(self + 0xc) == 1) {
            if (*(int *)(self + 0x18) != *(int *)(self + 0x14)) {
                *(int *)(self + 0xc) = 2;
            } else {
                sub = *(void **)(self + 0x88);
                ((void (*)(void *))(*(int *)(*(int *)sub + 0xc)))(sub);
            }
        }
        if (*(int *)(self + 0xc) == 2) {
            sub = *(void **)(self + 0x88);
            ((void (*)(void *))(*(int *)(*(int *)sub + 0x10)))(sub);
            *(int *)(self + 0xc) = 0;
        }
        FUN_overlay_21__0219b154(self);
    }
}
