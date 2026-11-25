// flags: -O4,s
extern const unsigned short data_020eba58[];
extern const int data_0212de80[];
extern void *FUN_0208f068(void);
extern signed char *FUN_0208efa8(void *, int, int, unsigned int);
extern int FUN_overlay_16__02120ae0(int);
extern void FUN_overlay_16__02120cd8(void *, const void *, int, int);
#pragma thumb off
extern double FUN_02005340(const void *);
extern unsigned int FUN_02003c70(const void *);
#pragma thumb on

#define ISDIGIT_MW(c) (((c) < 0 || (c) >= 0x80) ? 0 : (data_020eba58[(c)] & 8))

int FUN_overlay_16__02120b5c(unsigned int *self, void *text) {
    int line, row, type, i, c, x, scaled;
    signed char *message, *command;
    double value;
    unsigned long long ticks;
    if (self[0] == 0) {
        for (line = 0, row = 0; line < 32; line++, row++) {
            message = FUN_0208efa8(FUN_0208f068(), self[3], 0, self[2]);
            command = FUN_0208efa8(FUN_0208f068(), self[3], 1, self[2]);
            ++self[2];
            type = 0;
            if (command) {
                c = command[0];
                if (!(c == '0' && command[1] < 32) && ISDIGIT_MW(c)) {
                    if (FUN_02005340(command) > 0.0) {
                        value = 0.5 + 4096.0 * FUN_02005340(command);
                    } else {
                        value = 4096.0 * FUN_02005340(command) - 0.5;
                    }
                    scaled = (int)value;
                    ticks = (unsigned long long)((long long)scaled * 4096000) + 2048;
                    return ((int)(ticks >> 12)) >> 12;
                }
                type = FUN_overlay_16__02120ae0(c);
            }
            if (message) {
                if (!(message[0] == '0' && message[1] < 32)) {
                    for (i = 0; i < 64; i++) {
                        if (message[i] < 32) {
                            message[i] = 0;
                            break;
                        }
                    }
                    if (type >= 0 && type < 6) {
                        x = data_0212de80[type];
                        if (type == 2 || type == 4) {
                            x -= 6 * (FUN_02003c70(message) >> 1);
                        }
                        FUN_overlay_16__02120cd8(text, message, x, row * 15 + 16);
                    }
                }
                if (type == 5) {
                    self[0] = 1;
                    break;
                }
            }
        }
    } else {
        return -1;
    }
    return 0;
}
