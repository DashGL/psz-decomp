// version: 2.0/sp1p5
// flags: -O4,p -noThumb -ipa file
int _b00, _b04, _b08, _b09;
int CPSNoIpReason;
int _b10, _b14, _b18;
int CPSNetMask;
int CPSDhcpIp;
int _b24, _b28;
int CPSGatewayIp;
int _b30, _b34, _b38, _b3c;
void (*CPSFree)(int);
int _b44, _b48, _b4c;
int CPSMyIp;
int _b54, _b58, _b5c;
int CPSDnsIp0;
int CPSDnsIp1;

extern void FUN_020656b8(void *, int, int);
extern void FUN_02066a94(int);
extern void FUN_0202b96c(void);
extern int DAT_021070d4[];
extern int DAT_021181a0[];
extern unsigned char DAT_0210737c[];

int *_bss_anchor[] = {
    &_b00, &_b04, &_b08, &_b09, &_b10, &_b14, &_b18, &_b24, &_b28,
    &_b30, &_b34, &_b38, &_b3c, &_b44, &_b48, &_b4c, &_b54, &_b58, &_b5c
};

void FUN_02020f6c(int arg0) {
    int flag;
    int i;
    unsigned char *cur;
    unsigned char *p;
    flag = CPSMyIp != 0;
    CPSNoIpReason = arg0;
    CPSMyIp = 0;
    CPSNetMask = 0;
    CPSGatewayIp = 0;
    CPSDnsIp0 = 0;
    CPSDnsIp1 = 0;
    CPSDhcpIp = 0;
    if (!flag) {
        return;
    }
    FUN_020656b8(DAT_021070d4, 0, 0x60);
    for (cur = (unsigned char *)DAT_021181a0[2]; cur != 0; cur = *(unsigned char **)(cur + 0x68)) {
        unsigned char *sub = *(unsigned char **)(cur + 0xa4);
        if (sub != 0 && *(int *)sub != 0) {
            if (sub[8] != 10 && sub[8] != 11) {
                sub[8] = 0;
            }
            if (*(int *)(sub + 4) != 0) {
                *(int *)(sub + 4) = 0;
                FUN_02066a94(*(int *)sub);
            }
        }
    }
    for (i = 0, p = DAT_0210737c; i < 8; i++, p += 0x38) {
        if (*(unsigned short *)(p + 4) != 0) {
            CPSFree(*(int *)(p + 0x34));
            *(unsigned short *)(p + 4) = 0;
        }
    }
    FUN_0202b96c();
}
