// flags: -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct {
    unsigned char ds[4][512];
    u16 seqNum[4];
    u16 writeIndex;
    u16 sendIndex;
    u16 readIndex;
    u16 aidBitmap;
    u16 dataLength;
    u16 stationNumber;
    u16 dataSetLength;
    u16 port;
    u16 doubleMode;
    u16 currentSeqNum;
    u16 state;
} WMDataSharingInfo;

extern int FUN_02052fe4(int, ...);
extern int FUN_02054680(void (*)(void *), void *, void *, u32, u16, u16, u16);
extern u32 FUN_02053464(void);
extern u32 FUN_02053494(void);
extern void FUN_02054fdc(void *);
extern void FUN_020654dc(const void *, void *, u32);
extern void FUN_020553a0(void *, int);
extern void FUN_020552d4(void *, int, const void *);

int FUN_02054c94(WMDataSharingInfo *ring, const void *send, void *receive) {
    u32 mode, peers; int tmp; int received; int local; u32 slot; unsigned char *entry; int status;
    status = FUN_02052fe4(2, 9, 10);
    if (status) return status;
    if (!ring) return 6;
    if (!send) return 6;
    if (!receive) return 6;
    mode = FUN_02053464();
    if (!mode) peers = FUN_02053494();
    if (ring->state == 5) return 1;
    if (ring->state != 1 && ring->state != 4) return 3;
    status = 5;
    if (!mode) {
        received = 0;
        local = 0;
        if (ring->state == 4) {
            ring->state = 1;
            slot = (ring->writeIndex + 3) & 3;
            tmp = FUN_02054680(FUN_02054fdc, ring, ring->ds[slot], ring->dataSetLength, (u16)(ring->aidBitmap & peers), ring->port, 1);
            if (tmp == 7) {
                ring->seqNum[slot] = 65535;
                ring->sendIndex = (u16)((ring->sendIndex + 1) & 3);
            } else if (tmp != 0 && tmp != 2) {
                ring->state = 5;
                return 1;
            }
        }
        if (ring->readIndex != ring->sendIndex) {
            *(u16 *)ring->ds[ring->readIndex] |= 1;
            FUN_020654dc(ring->ds[ring->readIndex], receive, 512);
            received = 1;
            status = 0;
            ring->currentSeqNum = ring->seqNum[ring->readIndex];
            ring->readIndex = (u16)((ring->readIndex + 1) & 3);
            if (ring->doubleMode == 0 && peers != 0 && *(u16 *)ring->ds[ring->writeIndex] == 1) {
                local = 1;
            } else {
                local = 0;
            }
        }
        FUN_020553a0(ring, 0);
        if (received) {
            FUN_020552d4(ring, 0, send);
            if (ring->doubleMode == 0) {
                FUN_020553a0(ring, local);
            }
        }
    } else {
        received = 0;
        if (ring->state == 4) {
            ring->state = 1;
            received = 1;
        } else if (ring->readIndex != ring->writeIndex) {
            u16 *hdr = (u16 *)ring->ds[ring->readIndex];
            if (!(*hdr & 1)) {
                *hdr |= 1;
            } else {
                FUN_020654dc(ring->ds[ring->readIndex], receive, 512);
                received = 1;
                status = 0;
                ring->currentSeqNum = ring->seqNum[ring->readIndex];
                ring->readIndex = (u16)((ring->readIndex + 1) & 3);
            }
        }
        if (received) {
            entry = ring->ds[ring->sendIndex];
            FUN_020654dc(send, entry + 32, ring->dataLength);
            tmp = FUN_02054680(FUN_02054fdc, ring, entry + 32, ring->dataLength, ring->aidBitmap, ring->port, 1);
            ring->sendIndex = (u16)((ring->sendIndex + 1) & 3);
            if (tmp != 2 && tmp != 0) {
                ring->state = 5;
                status = 1;
            }
        }
    }
    return status;
}
