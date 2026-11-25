// flags: -O4,s
extern int FUN_020c2e38(void),FUN_020bc288(void),FUN_020bc260(void),FUN_020bc26c(void *,void *),FUN_020c4848(void),FUN_020bc244(void *,void *),FUN_020bc204(void *,void *);
extern void FUN_020a4c9c(void *,void *,void *),FUN_020a4ef4(void *),FUN_020c193c(int,int,int,int,int),FUN_020a5330(void *,int);

void FUN_020a4ce4(char *s) {
    unsigned char *entry, *p;
    unsigned short *flags;
    unsigned short pos[2], start[2];
    int i, state, dx, dy;

    if (!*(int *)(s + 68) || FUN_020c2e38()) return;
    {
        if (*(int *)(s + 212) >= 0) {
            i = *(int *)(s + 212);
            entry = *(unsigned char **)(s + 76) + 20 * i;
            flags = (unsigned short *)(s + 84) + i;
            state = FUN_020bc288();
            if (*flags & 32) {
                state = FUN_020bc260();
            }
            if (!state) {
                if (*(int *)(s + 228) < 0) {
                    if (!(*flags & 8) && (signed char)entry[14] < 0) {
                        FUN_020a4c9c(s, entry, flags);
                    }
                    *(int *)(s + 212) = -1;
                } else if (*(int *)(s + 232) >= 0) {
                    *(int *)(s + 236) = 1;
                } else {
                    FUN_020a4ef4(s);
                }
            } else {
                pos[1] = 0;
                pos[0] = 0;
                if (FUN_020bc26c(&pos[1], &pos[0])) {
                    if (*(int *)(s + 228) >= 0) {
                        *(int *)(s + 232) = -1;
                        for (i = 0; i < *(int *)(s + 80); i++) {
                            p = *(unsigned char **)(s + 76) + 20 * i;
                            if ((p[13] & 128) && pos[1] >= p[0] && pos[1] <= p[0] + p[2] && pos[0] >= p[1] && pos[0] <= p[1] + p[3]) {
                                *(int *)(s + 232) = i;
                                break;
                            }
                        }
                    } else if (*(int *)(s + 240)) {
                        i = *(int *)(s + 212);
                        p = *(unsigned char **)(s + 76) + 20 * i;
                        if (p[13] & 64) {
                            dx = *(int *)(s + 220) - pos[1];
                            dy = *(int *)(s + 224) - pos[0];
                            if (dx < 0) dx = -dx;
                            if (dy < 0) dy = -dy;
                            if (dx > 8 || dy > 8) {
                                *(int *)(s + 228) = i;
                                FUN_020c193c(0, 12, 0, 0, -1);
                            }
                        }
                    }
                }
            }
        } else if (FUN_020c4848()) {
            for (i = 0; i < *(int *)(s + 80); i++) {
                entry = *(unsigned char **)(s + 76) + 20 * i;
                if (entry[13] & 16) continue;
                if (*(unsigned short *)(s + 84 + 2 * i) & 20) continue;
                start[1] = 0;
                start[0] = 0;
                if (entry[13] & 32) {
                    if (!FUN_020bc244(&start[1], &start[0])) continue;
                } else if (!FUN_020bc204(&start[1], &start[0])) {
                    continue;
                }
                if (start[1] < entry[0] || start[1] > entry[0] + entry[2] || start[0] < entry[1] || start[0] > entry[1] + entry[3]) continue;
                FUN_020a5330(s, i);
                if ((signed char)entry[15] >= 0) {
                    FUN_020c193c(0, (signed char)entry[15], 0, 0, -1);
                }
                *(int *)(s + 220) = start[1];
                *(int *)(s + 224) = start[0];
                break;
            }
        }
    }
}
