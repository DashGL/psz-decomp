// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef void (*Callback)(void *);

typedef struct {
    u8 pad0[4];
    void *status;          // +0x04
    u8 pad8[8];
    void *fifo7to9;        // +0x10
    u16 pad14;
    u16 pwrMgtMode;        // +0x16
    Callback callbackTable[44]; // +0x18 .. +0xc7
    Callback indCallback;  // +0xc8
    Callback portCallback[16];  // +0xcc .. +0x10b
    void *portCallbackArg[16];  // +0x10c .. +0x14b
    u32 connectedAidBitmap;// +0x14c
    u16 myAid;             // +0x150
} WMState;

extern u8 UNK_02110b00[];
extern u8 UNK_02110b50[];
extern u8 UNK_02110b64[];
extern u8 UNK_02110b74[];

extern void FUN_020673d4(void *, int);
extern void FUN_020673f0(void *, int);
extern void FUN_02068728(void);
extern void FUN_02052d74(void);
extern void FUN_02053424(void);
extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(void *, void *, int);
extern void FUN_020654dc(void *, void *, int);
extern void FUN_020654b4(int, void *, int);

#define W(a, o) (*(u32 *)((u8 *)(a) + (o)))
#define H(a, o) (*(u16 *)((u8 *)(a) + (o)))

void FUN_02053078(void *unused, u8 *message, int error) {
    WMState *state = (WMState *)W(UNK_02110b00, 4);
    u16 type;

    if (error != 0) {
        return;
    }

    FUN_020673d4(state->fifo7to9, 0x100);
    if (state->pwrMgtMode == 0) {
        FUN_020673d4(state->status, 0x800);
    }
    if (message != (u8 *)state->fifo7to9) {
        FUN_020673d4(message, 0x100);
    }

    type = H(message, 0);
    if (type >= 44) {
        if (type == 128) {
            if (H(message, 2) == 19) {
                FUN_02068728();
            }
            if (state->indCallback != 0) {
                state->indCallback(message);
            }
        } else if (type == 130) {
            u16 port = H(message, 6);
            if (state->portCallback[port] != 0) {
                W(message, 0x1c) = (u32)state->portCallbackArg[port];
                H(message, 0x22) = (u16)state->connectedAidBitmap;
                FUN_020673d4((void *)W(message, 8), H(state->status, 0x72));
                state->portCallback[H(message, 6)](message);
            }
        } else if (type == 129) {
            H(message, 0) = 15;
            if (W(message, 0x1c) != 0) {
                ((Callback)W(message, 0x1c))(message);
            }
        }
    } else {
        Callback callback;
        if (type == 14 && (H(message, 4) == 11 || H(message, 4) == 12) && H(message, 2) == 0) {
            FUN_020673d4((void *)W(message, 8), H(state->status, 0x72));
        }

        type = H(message, 0);
        if (type == 2 && H(message, 2) == 0) {
            callback = state->callbackTable[type];
            FUN_02052d74();
            if (callback != 0) {
                callback(message);
            }
            return;
        }

        if (state->callbackTable[type] != 0) {
            state->callbackTable[type](message);
            if (H(UNK_02110b00, 0) == 0) {
                return;
            }
        }

        type = H(message, 0);
        if (type == 8 || type == 12) {
            u16 event, peer, role, extra; u8 *address; u8 *payload; u16 first, second;

            if (type == 8) {
                address = message + 10;
                event = H(message, 8);
                peer = H(message, 16);
                extra = H(message, 18);
                payload = message + 20;
                role = 0;
                first = H(message, 44);
                second = H(message, 46);
            } else if (type == 12) {
                event = H(message, 8);
                role = H(message, 10);
                extra = H(message, 12);
                peer = 0;
                payload = 0;
                address = message + 16;
                first = H(message, 22);
                second = H(message, 24);
            }

            if (event == 7 || event == 9 || event == 26) {
                u16 i;
                if (event == 7) {
                    state->connectedAidBitmap |= (1 << peer);
                } else {
                    state->connectedAidBitmap &= ~(1 << peer);
                }
                state->myAid = role;

                FUN_020656b8(UNK_02110b50, 0, 68);
                H(UNK_02110b00, 0x50) = 130;
                H(UNK_02110b00, 0x52) = 0;
                H(UNK_02110b00, 0x54) = event;
                W(UNK_02110b00, 0x58) = 0;
                W(UNK_02110b00, 0x5c) = 0;
                H(UNK_02110b00, 0x60) = 0;
                H(UNK_02110b00, 0x62) = peer;
                H(UNK_02110b00, 0x70) = role;
                H(UNK_02110b00, 0x72) = (u16)state->connectedAidBitmap;
                H(UNK_02110b00, 0x6a) = 0xffff;
                H(UNK_02110b00, 0x8c) = extra;
                FUN_02065774(address, UNK_02110b64, 6);
                if (payload != 0) {
                    FUN_020654dc(payload, UNK_02110b74, 24);
                } else {
                    FUN_020654b4(0, UNK_02110b74, 24);
                }
                H(UNK_02110b00, 0x90) = (role == 0) ? first : second;
                H(UNK_02110b00, 0x92) = (role == 0) ? second : first;

                for (i = 0; i < 16; i++) {
                    H(UNK_02110b00, 0x56) = i;
                    if (state->portCallback[i] != 0) {
                        W(UNK_02110b00, 0x6c) = (u32)state->portCallbackArg[i];
                        state->portCallback[i](UNK_02110b50);
                    }
                }
            }
        }
    }

    FUN_020673d4(state->fifo7to9, 0x100);
    FUN_02053424();
    if (message != (u8 *)state->fifo7to9) {
        H(message, 0) |= 0x8000;
        FUN_020673f0(message, 0x100);
    }
}
