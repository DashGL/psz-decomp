// flags: -O2,p
#pragma opt_propagation off
extern unsigned char data_0213d1a0[], data_0213d0c0[], data_0213d0e0[];
extern unsigned short G_0213d0e0[];
extern void FUN_020656b8(void *, int, unsigned);
extern void FUN_02065774(const void *, void *, unsigned);
extern void FUN_0202f8f4(void);
extern void FUN_02067fd8(void *);
extern void FUN_020681f0(void *);
extern int func_02120960(int);
extern void FUN_02068114(void *, long long, int (*)(int), int);
extern int FUN_02066fc8(void *, unsigned *, int);
extern int FUN_overlay_15__021211d0(const void *, const void *, int, unsigned);
extern int FUN_overlay_15__0212118c(void *, int);
extern int FUN_overlay_15__0212138c(const void *, const void *, unsigned);
extern void FUN_overlay_15__02120918(const void *, void *);
extern void FUN_overlay_15__0212093c(void *, const void *, unsigned);

int FUN_overlay_15__02120c80(unsigned *request, void *result)
{
    unsigned alarm[11], event, option;
    int running = 1, status = -1, phase = 0, retries, i;

    if (request[9] == 0)
        option = 0x80000;
    else if (request[9] == 1)
        option = 0xc0000;
    option |= 0x30000;
    FUN_020656b8(data_0213d1a0, 0, 96);
    if (request[10] == 5)
        data_0213d1a0[0] = 1;
    else if (request[10] == 13)
        data_0213d1a0[0] = 2;
    else if (request[10] == 16)
        data_0213d1a0[0] = 3;
    else
        return -1;
    data_0213d1a0[1] = phase;
    FUN_02065774(request + 11, &data_0213d1a0[phase * 20 + 2], request[10]);
    FUN_0202f8f4();
    if (FUN_overlay_15__021211d0(0, request + 1, request[0], 0x30bffe)) {
        retries = 0;
        FUN_02067fd8(alarm);
        FUN_02068114(alarm, 0x3fec42LL, func_02120960, 18);
        while (running) {
            FUN_02066fc8(data_0213d0c0, &event, 1);
            switch (event) {
            case 4:
            case 8:
                break;
            case 18:
                if (!phase)
                    running = 0;
                break;
            case 19:
                if (phase)
                    break;
                break;
            case 5:
                if (phase)
                    break;
                FUN_020681f0(alarm);
                if (FUN_overlay_15__0212118c(data_0213d0e0, 1) != 1) {
                    running = 0;
                    break;
                }
                FUN_overlay_15__02120918(request, data_0213d0e0);
                for (i = 0; i < G_0213d0e0[5]; i++) {
                }
                if (!FUN_overlay_15__0212138c(data_0213d0e0, data_0213d1a0, option)) {
                    running = 0;
                    break;
                }
                phase = 1;
                break;
            case 10:
                FUN_overlay_15__02120918(request, data_0213d0e0);
                if (!FUN_overlay_15__0212138c(data_0213d0e0, data_0213d1a0, option))
                    running = 0;
                break;
            case 12:
                running = 0;
                status = 0;
                break;
            case 13:
                if (++retries < 3) {
                    if (!FUN_overlay_15__0212138c(data_0213d0e0, data_0213d1a0, option))
                        running = 0;
                } else {
                    running = 0;
                }
                break;
            default:
                running = 0;
                break;
            }
        }
        FUN_020681f0(alarm);
        while (FUN_02066fc8(data_0213d0c0, &event, 0) == 1) {
        }
    }
    FUN_overlay_15__0212093c(result, data_0213d0e0, status == 0);
    return status;
}
