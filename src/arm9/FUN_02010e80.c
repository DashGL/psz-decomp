typedef enum { F0 = 0, F1 = 1 } Fmt;
// flags: -O4,p -noThumb
typedef unsigned long u32;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned char u8;
typedef signed char s8;

typedef struct {
    s16 yn;
    u8 index;
    u8 pad;
} AdpcmState;

struct StrmPlayer {
    u8 pad00[0xc0];
    u8 format;
    u8 loopFlag;
    u8 numChannels;
    u8 padc3;
    u16 sampleRate;
    u16 padc6;
    u32 loopStart;
    u32 loopEnd;
    u32 dataOffset;
    u32 numBlocks;
    u32 blockLen;
    u32 blockSamples;
    u32 lastBlockLen;
    u32 lastBlockSamples;
    u8 pade8[0x10];
    AdpcmState adpcm[6];
    int activeFlag : 1;
    int playFlag : 1;
    int startFlag : 1;
    int pauseFlag : 1;
    int prepareFlag : 1;
    int finishFlag : 1;
    int monoFlag : 1;
    volatile int finishCounter;
    int allocFlag;
    u8 pad11c[0x18];
    void (*strmCallback)(u32, int, void **, u32, int, void *);
    void *strmCallbackArg;
    void *nextCallback;
    u8 pad140[0x20];
    u32 curSample;
    u32 pad164;
    u32 pad168;
    u32 (*readFunc)(struct StrmPlayer *, void *, u32, u32);
};

struct StrmTask {
    u32 f00;
    u32 f04;
    struct StrmPlayer *player;
    u32 status;
    int numChannels;
    void *buffer[6];
    u32 bufLen;
};

struct StrmThread {
    u32 f00;
    u32 f04;
    u8 *adpcmBuf;
};

extern void FUN_020656b8(void *, int, u32);
extern void FUN_02065774(void *, void *, u32);
extern void FUN_0206719c(void *);
extern void FUN_02067220(void *);
extern void FUN_0206740c(void *, u32);
extern void FUN_02010d3c(struct StrmPlayer *);

extern const s8 DAT_020ebd38[];
extern const s16 DAT_020ebd48[];
extern u8 DAT_021028cc[];
extern struct StrmThread DAT_021028b4;

static inline s16 DecodeAdpcm(AdpcmState *state, int code) {
    int step, sample, index, delta;
    sample = state->yn;
    index = state->index;
    step = DAT_020ebd48[index];
    delta = step >> 3;
    if (code & 4) delta += step;
    if (code & 2) delta += step >> 1;
    if (code & 1) delta += step >> 2;
    if (code & 8) {
        sample -= delta;
        if (sample < -32768) sample = -32768;
    } else {
        sample += delta;
        if (sample > 32767) sample = 32767;
    }
    index += DAT_020ebd38[code];
    if (index < 0) index = 0;
    else if (index > 88) index = 88;
    state->yn = (s16)sample;
    state->index = (u8)index;
    return (s16)sample;
}

void FUN_02010e80(struct StrmTask *task) {
    struct StrmPlayer *player = task->player;
    int loop;
    u32 bufOffset, restSize, blockSize, blockOffset, fileOffset, samples, writeSize, readSize;
    int ch;

    if (player->finishFlag && player->finishCounter > 0) {
        player->finishCounter--;
    }

    restSize = task->bufLen;
    bufOffset = 0;

    while (restSize > 0) {
        if (player->finishFlag) {
            for (ch = 0; ch < task->numChannels; ch++) {
                FUN_020656b8((u8 *)task->buffer[ch] + bufOffset, 0, restSize);
            }
            break;
        }

        {
            u32 blockSamples = player->blockSamples;
            u32 blockNo = player->curSample / blockSamples;
            u32 available;
            u32 byteOffset;

            if (blockNo < player->numBlocks - 1) {
                blockSize = player->blockLen;
                available = blockSamples;
            } else {
                blockSize = player->lastBlockLen;
                available = player->lastBlockSamples;
            }

            blockOffset = player->curSample - blockNo * blockSamples;
            samples = restSize;
            if (player->format != 0) {
                samples >>= 1;
            }

            if (player->prepareFlag) {
                if (blockOffset == 0) {
                    player->prepareFlag = 0;
                } else {
                    samples = blockOffset;
                    blockOffset = 0;
                }
            }

            loop = 0;
            if (blockOffset + samples >= available) {
                samples = available - blockOffset;
                if (blockNo >= player->numBlocks - 1) {
                    if (player->loopFlag) {
                        loop = 1;
                    } else {
                        player->finishFlag = 1;
                    }
                }
            }

            byteOffset = blockOffset;
            writeSize = samples;
            switch (player->format) {
            case 0:
                readSize = samples;
                break;
            case 1:
                writeSize <<= 1;
                readSize = writeSize;
                byteOffset = blockOffset << 1;
                break;
            case 2:
                readSize = ((blockOffset + samples + 1) >> 1) - (blockOffset >> 1);
                byteOffset = blockOffset >> 1;
                if (blockOffset == 0) {
                    readSize += 4;
                } else {
                    byteOffset += 4;
                }
                writeSize <<= 1;
                break;
            }

            fileOffset = blockNo * player->blockLen * player->numChannels + byteOffset;
            fileOffset += player->dataOffset;

            for (ch = 0; ch < task->numChannels; ch++) {
                u8 *src = (u8 *)task->buffer[ch] + bufOffset;
                u8 *dst = src;
                if (ch < player->numChannels) {
                    if (player->format == 2) {
                        FUN_0206719c(DAT_021028cc);
                        src = DAT_021028b4.adpcmBuf;
                    }
                    {
                        u32 read = player->readFunc(player, src, readSize, fileOffset + (u32)ch * blockSize);
                        if (read != readSize) {
                            writeSize = 0;
                            player->finishFlag = 1;
                            samples = 0;
                            loop = 0;
                            if (player->format == 2) {
                                FUN_02067220(DAT_021028cc);
                            }
                            break;
                        }
                    }
                    if (player->format == 2) {
                        AdpcmState *hdr = (AdpcmState *)DAT_021028b4.adpcmBuf;
                        u8 *p = (u8 *)hdr;
                        s16 *out = (s16 *)dst;
                        u32 j;
                        u32 end = blockOffset + samples;
                        AdpcmState *adpcm = &player->adpcm[ch];

                        if (blockOffset == 0) {
                            p = (u8 *)(hdr + 1);
                            *adpcm = *hdr;
                        }
                        j = blockOffset;
                        if (blockOffset & 1) {
                            *out++ = DecodeAdpcm(adpcm, ((int)*p >> 4) & 0xf);
                            j++;
                            p++;
                        }
                        while (j < (end & ~1u)) {
                            *out++ = DecodeAdpcm(adpcm, *p & 0xf);
                            *out++ = DecodeAdpcm(adpcm, ((int)*p >> 4) & 0xf);
                            j += 2;
                            p++;
                        }
                        if (j < end) {
                            *out = DecodeAdpcm(adpcm, *p & 0xf);
                        }
                        FUN_02067220(DAT_021028cc);
                    }
                } else if (player->monoFlag) {
                    FUN_020656b8(src, 0, writeSize);
                } else {
                    FUN_02065774((u8 *)task->buffer[0] + bufOffset, src, writeSize);
                }
            }

            if (player->prepareFlag) {
                player->prepareFlag = 0;
            } else {
                if (loop) {
                    player->curSample = player->loopStart;
                } else {
                    player->curSample += samples;
                }
                bufOffset += writeSize;
                restSize -= writeSize;
                if (player->finishFlag && player->nextCallback) {
                    FUN_02010d3c(player);
                }
            }
        }
    }

    if (player->strmCallback) {
        player->strmCallback(task->status, task->numChannels, task->buffer, task->bufLen, player->format == 0 ? F0 : F1, player->strmCallbackArg);
    }

    for (ch = 0; ch < task->numChannels; ch++) {
        FUN_0206740c(task->buffer[ch], task->bufLen);
    }

    if (task->status == 0) {
        player->allocFlag = 1;
    }
}
