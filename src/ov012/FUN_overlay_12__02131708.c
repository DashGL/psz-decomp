//cpp
// flags: -O4,s
#pragma always_inline on
typedef unsigned int u32;
typedef unsigned char u8;

struct Key4 {
    u8 b[4];
    inline Key4() {
        b[0] = 0xff;
        b[1] = 0xff;
        b[2] = 0xff;
        b[3] = 0xff;
    }
    inline bool IsInvalid() const {
        bool res = false;
        u32 v = ((u32)b[0] << 24) | ((u32)b[1] << 16) | ((u32)b[2] << 8) | b[3];
        if (v == 0xffffffffu) res = true;
        return res;
    }
};

struct Item16 {
    Key4 id;
    u32 w[3];
    inline Item16() {
        for (int i = 0; i < 3; i++) w[i] = 0;
    }
};

struct Choice {
    Key4 id;
    signed char param;
};

struct SelfObj {
    u8 pad0[0x48];
    int slots[103];
    int cur;
    int pad1[2];
    int done;
};

struct Player {
    u8 pad0[12];
    short cap;
    short max_cap;
    u8 inv[1];
    inline void *GetInv() { return inv; }
};

extern "C" {
extern SelfObj *data_0213f2d4;
extern const u8 data_0213b9f4[3];
extern const char *FUN_overlay_12__0212cbfc(int *);
extern const char *FUN_overlay_12__0212d268(int, int);
extern const Choice *FUN_overlay_12__0212d2a8(const void *, int, int, int);
extern Player *FUN_02086e3c(void);
extern signed char *FUN_020870c4(void *);
extern char *FUN_020a0ce8(void);
extern void FUN_02084a1c(void *, int);
extern void FUN_overlay_12__021341d4(unsigned, unsigned);
extern void FUN_0209bf08(void *, int);
extern void FUN_overlay_12__021341f0(void);
extern void FUN_020a0d10(void);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_overlay_12__021319d8(void);
extern int FUN_020b028c(void *, const void *, int);
extern int FUN_0209ca8c(char *, const void *, int);
extern int FUN_02084900(const void *);
extern int FUN_020849d4(const void *);
extern int FUN_020b04d0(void *, int);
extern int FUN_overlay_12__0212d3fc(unsigned, void *);
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern unsigned FUN_020c3f00(char *, const char *, unsigned);
extern void FUN_overlay_12__02131668(void *, const char *, int, int, void (*)(void), void (*)(void));

static inline int check_key(const Item16 *item)
{
    Key4 key = item->id;
    return FUN_02084900(&key);
}

static inline void format_int(char *digits, int quantity)
{
    signed char reversed[8];
    int j = 0;
    int last = 0;
    while (quantity > 0 && j < 7) {
        last = j;
        reversed[j] = (signed char)((quantity % 10) + '0');
        quantity /= 10;
        j++;
    }
    int n = 0;
    while (last >= 0) {
        digits[n] = reversed[last];
        n++;
        last--;
    }
    digits[n] = 0;
}

void FUN_overlay_12__02131708(void)
{
    
    SelfObj *self = data_0213f2d4;
    if (!self) return;
    int selected = self->slots[self->cur];
    int count = 0;
    const char *table = FUN_overlay_12__0212cbfc(&count);
    if (selected < 0 || selected >= count) return;
        signed char *profile = FUN_020870c4(FUN_02086e3c());
        void *inventory = FUN_02086e3c()->GetInv();
        const Choice *choice = FUN_overlay_12__0212d2a8(table + 70 * selected, profile[33], profile[32], profile[34]);
        if (choice) {
            char message[256];
            message[0] = 0;
            int success = 1;
            int ok = !choice->id.IsInvalid();
            if (ok != 0) {
                Item16 item;
                item.id.b[0] = choice->id.b[0];
                item.id.b[1] = choice->id.b[1];
                item.id.b[2] = choice->id.b[2];
                item.id.b[3] = choice->id.b[3];
                FUN_02084a1c(&item, choice->param);
                FUN_overlay_12__021341d4(8, 1);
                FUN_0209bf08(&item, 0);
                FUN_overlay_12__021341f0();
                success = (FUN_020b028c(inventory, &item, 0) != -1);
                const char *format;
                if (success) {
                    format = FUN_overlay_12__0212d268(0, 14);
                } else {
                    format = FUN_overlay_12__0212d268(0, 13);
                }
                if (format) {
                    char detail[32];
                    detail[0] = 0;
                    char name[27];
                    if (FUN_0209ca8c(name, &item, 1)) {
                        if (check_key(&item)) {
                            const char *quantity_format = FUN_overlay_12__0212d268(0, 23);
                            int quantity = FUN_020849d4(&item);
                            char digits[8];
                            format_int(digits, quantity);
                            FUN_020c3f90(detail, 32, quantity_format, name, digits);
                        } else {
                            FUN_020c3f00(detail, name, 32);
                        }
                    }
                    FUN_020c3f90(message, 256, format, detail);
                }
            } else {
                int expanded = FUN_020b04d0(inventory, choice->param);
                Player *player = FUN_02086e3c();
                if ((short)expanded >= 0 && (short)expanded <= player->max_cap) {
                    player->cap = (short)expanded;
                }
                const char *format = FUN_overlay_12__0212d268(0, 15);
                if (format) {
                    signed char capacity[3];
                    capacity[0] = data_0213b9f4[0];
                    capacity[1] = data_0213b9f4[1];
                    capacity[2] = data_0213b9f4[2];
                    capacity[0] += expanded / 10;
                    capacity[1] += expanded % 10;
                    FUN_020c3f90(message, 256, format, capacity);
                }
            }
            FUN_overlay_12__02131668(self, message, 2, -1, FUN_overlay_12__021319d8, 0);
            if (success) {
                FUN_020c193c(6, 7, 0, 0, -1);
                FUN_overlay_12__0212d3fc(selected, FUN_020a0ce8() + 23);
                FUN_020a0d10();
                self->done = 1;
            }
        }
    
}
}
