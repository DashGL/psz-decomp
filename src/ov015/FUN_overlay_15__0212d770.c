// flags: -O4,p
typedef struct {
    unsigned char pad0[64];
    unsigned char ssid[128];
    unsigned char ip[4];
    unsigned char gw[4];
    unsigned char dns1[4];
    unsigned char dns2[4];
    unsigned char pad208[22];
    unsigned char sec_type : 2;
    unsigned char sec_mode : 6;
    unsigned char pad231[9];
    unsigned char subnet[4];
    unsigned char pad244;
    unsigned char auto_ip;
    unsigned char auto_dns;
} Settings;

extern Settings *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__0212da74(const unsigned char *, int), FUN_overlay_15__0212db3c(const unsigned char *, int);
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
extern void *FUN_02001540(void *, int, unsigned int);
#pragma thumb on

void FUN_overlay_15__0212d770(unsigned int item, int row)
{
    Settings *settings = FUN_overlay_15__021318ac();
    unsigned char text[33];
    int length;
    switch (item) {
    case 0:
        FUN_overlay_15__0212da74(settings->ssid, row);
        return;
    case 1:
        switch (settings->sec_type) {
        case 0: return;
        case 1: length = 10; break;
        case 2: length = 26; break;
        case 3: length = 32; break;
        }
        if (settings->sec_mode == 1) length /= 2;
        FUN_020656b8(text, 0, 33);
        FUN_02001540(text, '*', length);
        FUN_overlay_15__0212da74(text, row);
        return;
    case 3: if (!settings->auto_ip) FUN_overlay_15__0212db3c(settings->ip, row); return;
    case 4: if (!settings->auto_ip) FUN_overlay_15__0212db3c(settings->subnet, row); return;
    case 5: if (!settings->auto_ip) FUN_overlay_15__0212db3c(settings->gw, row); return;
    case 7: if (!settings->auto_dns) FUN_overlay_15__0212db3c(settings->dns1, row); return;
    case 8: if (!settings->auto_dns) FUN_overlay_15__0212db3c(settings->dns2, row); return;
    default: return;
    }
}
