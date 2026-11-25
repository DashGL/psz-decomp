// flags: -O4,s
#pragma thumb off
extern float FUN_02009d14(float, float);
#pragma thumb on
extern int FUN_02084684(int, void *, void *);
extern int FUN_0203a9d4(void *);
extern signed char *FUN_02084798(int, int);
extern void FUN_02052668(int, int, int, int);

void FUN_02094ee0(signed char *param_1) {
    unsigned char local[0x18];
    if (*(int *)(param_1 + 0x250) != 0) {
        switch (param_1[0x2bc]) {
        case 1:
        case 2:
            break;
        default:
            return;
        }
        if (FUN_02084684(*(int *)(param_1 + 0xfc), param_1 + 0x180, local) != 0) {
            if (param_1[0x2bc] != 1 || param_1[0x2bd] != 4) {
                FUN_02052668(*(int *)(param_1 + 0x250), (int)local[8] << 9, *(unsigned short *)(local + 0x12), local[9]);
            } else {
                unsigned char a = (unsigned char)param_1[0x181];
                int b = FUN_0203a9d4(param_1);
                signed char *r4 = FUN_02084798(a, b);
                unsigned short ang = (unsigned short)((unsigned int)((int)FUN_02009d14(182.04443359375f, (float)((int)(unsigned char)r4[6] << 12))) >> 12);
                FUN_02052668(*(int *)(param_1 + 0x250), (int)(unsigned char)r4[5] << 9, ang, (int)local[9] + r4[3]);
            }
        }
    }
}
