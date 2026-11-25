// flags: -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef void *(*AllocDF70C)(const char *, int);
typedef void (*FreeDF70C)(const char *, void *, int);

extern int FUN_02003c70(const char *);
extern int FUN_02003d54(void *, const void *, int);
extern int FUN_02003e24(const char *, const char *);
extern int FUN_02005898(const char *);
extern int FUN_02066998(void *);
extern int FUN_02066c60(int);
extern void FUN_02066c68(int);

extern int FUN_020dd9c4(void *, void *);
extern void FUN_020ddb54(void);
extern void FUN_020ddb90(void);
extern int FUN_020ddbb0(void);
extern int FUN_020ddbe8(void *);
extern int FUN_020de300(void *);
extern int FUN_020de4e8(void *, void *, int);
extern int FUN_020de748(void *, void *);
extern int FUN_020de820(void *);
extern void FUN_020de888(void *, int);
extern void FUN_020decec(void *);
extern int FUN_020dee90(void *, const char *, const void *, int);
extern int FUN_020def48(void *, const char *);
extern int FUN_020df248(void *, int);
extern const char *FUN_020df414(void *, const char *);
extern int FUN_020df450(void *, const char *, void *, int);
extern void FUN_020e0104(int);
extern int FUN_020e9ebc(void *);

extern int DAT_0211dbfc[];
extern u8 DAT_0211dc14[];
extern u8 DAT_0211dc30[];
extern u8 DAT_0211dc5c[];
extern int DAT_021181a0[];
extern int DAT_02101db0;
extern const char *DAT_021006d0;
extern const char *DAT_02100214;

extern const char DAT_0210072c[];
extern const char DAT_02100748[];
extern const char DAT_0210077c[];
extern const char DAT_02100798[];
extern const char DAT_021007a4[];
extern const char DAT_021007b4[];
extern const char DAT_021007c4[];
extern const char DAT_021007e4[];
extern const char DAT_021007f0[];
extern const char DAT_02100810[];
extern const char DAT_02100818[];
extern const char DAT_02100820[];
extern const char DAT_02100830[];
extern const char DAT_02100838[];
extern const char DAT_02100840[];
extern const char DAT_0210084c[];
extern const char DAT_02100850[];
extern const char DAT_02100858[];
extern const char DAT_02100860[];
extern const char DAT_0210086c[];
extern const char DAT_02100878[];

typedef struct {
    u64 id;
    u32 rest[3];
} IdentityDF70C;

void FUN_020df70c(void *thread_argument) {
    int aiStack_1d8[113];
    u8 auStack_26c[148];
    IdentityDF70C identity;
    char auStack_284[4];
    const char *src1;
    char *ptr1;
    int len1;
    char *ptr2;
    int len2;
    char *ptr3;
    int sleep_ms;
    void *dst1;
    void *dst2;
    int *piVar1;
    AllocDF70C pcVar7;
    FreeDF70C pcVar8;
    int iVar2;
    int iVar3;
    int iVar6;

    (void)thread_argument;
    piVar1 = DAT_0211dbfc;
    pcVar7 = *(AllocDF70C *)(piVar1[0] + 0x1108);
    pcVar8 = *(FreeDF70C *)(piVar1[0] + 0x110c);
    ptr1 = 0;
    ptr2 = 0;
    ptr3 = 0;

    while (1) {
        piVar1[6] = (int)DAT_021006d0;
        piVar1[7] = 1;
        piVar1[8] = 0x1000;
        piVar1[9] = (int)pcVar7;
        piVar1[10] = (int)pcVar8;
        piVar1[12] = 0x4e20;
        *(int *)(piVar1[0] + 0x1004) = -2;
        if (FUN_020de748((void *)piVar1[5], DAT_0211dc14) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(1);
            break;
        }
        if (FUN_020de820((void *)piVar1[5]) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(1);
            break;
        }
        FUN_020de888((void *)piVar1[5], FUN_02066c60(DAT_021181a0[1]) - 1);
        if (*(int *)(piVar1[5] + 0x1ba4) != 0) {
            FUN_02066998((void *)(piVar1[5] + 0x1b38));
        }
        switch (*(int *)(piVar1[5] + 0x1020)) {
        case 2:
            *(int *)(DAT_0211dbfc[0] + 0x1004) = -1;
        default:
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(3);
            goto exit_cleanup;
        case 8:
            break;
        }
        if (FUN_020df248((void *)piVar1[5], 0) != 1) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(2);
            break;
        }
        iVar2 = FUN_02005898(FUN_020df414((void *)piVar1[5], DAT_021007e4));
        if (DAT_02101db0 == 0x22) {
            FUN_020e0104(2);
            break;
        }
        switch (iVar2) {
        case 200:
            piVar1[2] = *(int *)(piVar1[5] + 0x112c);
            break;
        case 0x12e:
            piVar1[1] = 1;
            if (*(int *)(piVar1[0] + 0x1118) != 0) {
                const char *url;
                *(int *)(piVar1[0] + 0x1004) = -6;
                FUN_020decec((void *)DAT_0211dbfc[5]);
                url = DAT_02100214;
                DAT_0211dbfc[6] = (int)url;
                DAT_0211dbfc[7] = 0;
                DAT_0211dbfc[8] = 0x200;
                DAT_0211dbfc[9] = (int)pcVar7;
                DAT_0211dbfc[10] = (int)pcVar8;
                DAT_0211dbfc[12] = 0x4e20;
                if (FUN_02003e24(url, DAT_021007f0) != 0) {
                    DAT_0211dbfc[11] = 1;
                }
                if (FUN_020de748((void *)DAT_0211dbfc[5], DAT_0211dc14) != 0) {
                    FUN_020decec((void *)DAT_0211dbfc[5]);
                    FUN_020e0104(1);
                    goto exit_cleanup;
                }
                if (FUN_020de300(auStack_26c) == 0 ||
                    FUN_020de4e8((void *)DAT_0211dbfc[5], auStack_26c, 1) == 0) {
                    FUN_020decec((void *)DAT_0211dbfc[5]);
                    FUN_020e0104(8);
                    goto exit_cleanup;
                }
                if (FUN_020dee90((void *)DAT_0211dbfc[5], DAT_02100810, DAT_02100818, 7) != 0) {
                    goto err_8_1;
                }
                {
                    const char *s = *(const char **)(DAT_0211dbfc[0] + 0x1118);
                    if (FUN_020dee90((void *)DAT_0211dbfc[5], DAT_02100820, s, FUN_02003c70(s)) != 0) {
                    err_8_1:
                        FUN_020decec((void *)DAT_0211dbfc[5]);
                        FUN_020e0104(8);
                        goto exit_cleanup;
                    }
                }
                pcVar8(DAT_02100748, *(void **)(DAT_0211dbfc[0] + 0x1118), 0);
                *(int *)(DAT_0211dbfc[0] + 0x1118) = 0;
                if (FUN_020de820((void *)DAT_0211dbfc[5]) != 0) {
                    FUN_020decec((void *)DAT_0211dbfc[5]);
                    FUN_020e0104(1);
                    goto exit_cleanup;
                }
                FUN_020de888((void *)DAT_0211dbfc[5], FUN_02066c60(DAT_021181a0[1]) - 1);
                if (*(int *)(DAT_0211dbfc[5] + 0x1ba4) != 0) {
                    FUN_02066998((void *)(DAT_0211dbfc[5] + 0x1b38));
                }
                switch (*(int *)(DAT_0211dbfc[5] + 0x1020)) {
                case 2:
                    *(int *)(DAT_0211dbfc[0] + 0x1004) = -1;
                default:
                    FUN_020decec((void *)((volatile int *)DAT_0211dbfc)[5]);
                    FUN_020e0104(3);
                    goto exit_cleanup;
                case 8:
                    FUN_020decec((void *)DAT_0211dbfc[5]);
                    FUN_020e0104(7);
                    goto exit_cleanup;
                }
            } else {
                src1 = *(const char **)(piVar1[5] + 0x1a08);
                if (src1 == 0) {
                    FUN_020decec((void *)piVar1[5]);
                    FUN_020e0104(2);
                    goto exit_cleanup;
                }
                *(void **)(piVar1[0] + 0x1114) = pcVar7(DAT_0210077c, FUN_02003c70(src1) + 1);
                dst1 = *(void **)(piVar1[0] + 0x1114);
                if (dst1 == 0) {
                    FUN_020decec((void *)DAT_0211dbfc[5]);
                    FUN_020e0104(4);
                    goto exit_cleanup;
                }
                FUN_02003d54(dst1, src1, FUN_02003c70(src1) + 1);
            }
            break;
        default:
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(10);
            goto exit_cleanup;
        }

        FUN_020decec((void *)piVar1[5]);
        FUN_020e9ebc(&identity);
        if (identity.id == 0) {
            char *base;
            *(int *)(piVar1[0] + 0x1004) = -3;
            *(u16 *)(piVar1 + 13) = 0;
            DAT_0211dc5c[8] = 0;
            base = (char *)piVar1[0];
            piVar1[0x1d] = *(int *)(base + 0x1108);
            piVar1[0x1e] = *(int *)(base + 0x110c);
            if (FUN_020dd9c4(DAT_0211dc30, (void *)piVar1[5]) != 0) {
                FUN_020e0104(5);
                break;
            }
            FUN_020ddb90();
            if (FUN_020ddbb0() != 0x15) {
                if (FUN_020ddbb0() == 9) {
                    *(int *)(DAT_0211dbfc[0] + 0x1004) = -1;
                } else {
                    FUN_020ddbe8(aiStack_1d8);
                    if (DAT_0211dbfc[3] == 1 && (aiStack_1d8[0] == (int)0xffffa4fa || FUN_020ddbb0() == 0xb)) {
                        *(int *)(DAT_0211dbfc[0] + 0x1004) = 0;
                        FUN_020ddb54();
                        FUN_020e0104(0xb);
                        break;
                    }
                    *(int *)(DAT_0211dbfc[0] + 0x1004) = aiStack_1d8[0];
                }
                FUN_020ddb54();
                FUN_020e0104(6);
                break;
            }
            FUN_020ddb54();
        }
        if (iVar2 == 200) {
            *(int *)(DAT_0211dbfc[0] + 0x1004) = 0;
            FUN_020e0104(0xb);
            break;
        }

        *(int *)(piVar1[0] + 0x1004) = -4;
        {
            const char *url = DAT_02100214;
            piVar1[6] = (int)url;
            piVar1[7] = 0;
            piVar1[8] = 0x1000;
            piVar1[9] = (int)pcVar7;
            piVar1[10] = (int)pcVar8;
            piVar1[12] = 0x9c40;
            if (FUN_02003e24(url, DAT_021007f0) != 0) {
                piVar1[11] = 1;
            }
        }
        if (FUN_020de748((void *)piVar1[5], DAT_0211dc14) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(1);
            break;
        }
        if (FUN_020de300(auStack_26c) == 0 ||
            FUN_020de4e8((void *)piVar1[5], auStack_26c, 1) == 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(8);
            break;
        }
        if (FUN_020dee90((void *)piVar1[5], DAT_02100810, DAT_02100830, 5) != 0) {
            goto err_8;
        }
        {
            const char *s = *(const char **)(piVar1[0] + 0x1114);
            if (FUN_020dee90((void *)piVar1[5], DAT_02100838, s, FUN_02003c70(s)) != 0) {
            err_8:
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(8);
                break;
            }
        }
        pcVar8(DAT_0210072c, *(void **)(piVar1[0] + 0x1114), 0);
        *(int *)(piVar1[0] + 0x1114) = 0;
        if (FUN_020de820((void *)piVar1[5]) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(1);
            break;
        }
        FUN_020de888((void *)piVar1[5], FUN_02066c60(DAT_021181a0[1]) - 1);
        if (*(int *)(piVar1[5] + 0x1ba4) != 0) {
            FUN_02066998((void *)(piVar1[5] + 0x1b38));
        }
        switch (*(int *)(piVar1[5] + 0x1020)) {
        case 3:
            FUN_020decec((void *)piVar1[5]);
            if (DAT_0211dbfc[3] == 1) {
                *(int *)(DAT_0211dbfc[0] + 0x1004) = 0;
                FUN_020e0104(0xb);
            } else {
                FUN_020e0104(3);
            }
            goto exit_cleanup;
        case 2:
            *(int *)(DAT_0211dbfc[0] + 0x1004) = -1;
        default:
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(3);
            goto exit_cleanup;
        case 8:
            break;
        }
        if (FUN_020df248((void *)piVar1[5], 0) != 1) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(2);
            break;
        }
        iVar2 = FUN_02005898(FUN_020df414((void *)piVar1[5], DAT_021007e4));
        if (DAT_02101db0 == 0x22) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(2);
            break;
        }
        if (iVar2 != 200) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            if (DAT_0211dbfc[3] == 1 && iVar2 == 0x12e) {
                *(int *)(DAT_0211dbfc[0] + 0x1004) = 0;
                FUN_020e0104(0xb);
            } else {
                FUN_020e0104(2);
            }
            break;
        }
        if (FUN_020df450((void *)piVar1[5], DAT_02100840, auStack_284, 4) <= 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(9);
            break;
        }
        iVar2 = FUN_02005898(auStack_284);
        if (DAT_02101db0 == 0x22) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(9);
            break;
        }
        if (piVar1[3] == 1 && iVar2 == 0x72) {
            *(int *)(DAT_0211dbfc[0] + 0x1004) = 0;
            FUN_020e0104(0xb);
            break;
        }
        if (iVar2 >= 100) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(6);
            break;
        }
        len1 = FUN_020df450((void *)piVar1[5], DAT_0210084c, 0, 0);
        if (len1 <= 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(9);
            break;
        }
        len2 = FUN_020df450((void *)piVar1[5], DAT_02100850, 0, 0);
        if (len2 <= 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(9);
            break;
        }
        iVar3 = FUN_020df450((void *)piVar1[5], DAT_02100858, 0, 0);
        ptr1 = (char *)pcVar7(DAT_02100798, len1 + 1);
        if (ptr1 == 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(4);
            break;
        }
        ptr2 = (char *)pcVar7(DAT_021007a4, len2 + 1);
        if (ptr2 == 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(4);
            break;
        }
        if (iVar3 > 0) {
            ptr3 = (char *)pcVar7(DAT_021007b4, iVar3 + 1);
            if (ptr3 == 0) {
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(4);
                break;
            }
        }
        {
            int n = FUN_020df450((void *)piVar1[5], DAT_0210084c, ptr1, len1 + 1);
            if (n < 0) {
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(9);
                break;
            }
            ptr1[n] = 0;
        }
        {
            int n = FUN_020df450((void *)piVar1[5], DAT_02100850, ptr2, len2 + 1);
            if (n < 0) {
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(9);
                break;
            }
            ptr2[n] = 0;
        }
        sleep_ms = 0;
        if (iVar3 > 0) {
            int n = FUN_020df450((void *)piVar1[5], DAT_02100858, ptr3, iVar3 + 1);
            if (n < 0) {
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(9);
                break;
            }
            ptr3[n] = 0;
            sleep_ms = FUN_02005898(ptr3);
            if (DAT_02101db0 == 0x22) {
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(9);
                break;
            }
            sleep_ms = sleep_ms * 1000;
            if (sleep_ms > 0x2bf20) {
                sleep_ms = 0x2bf20;
            }
        }
        FUN_020decec((void *)piVar1[5]);
        *(int *)(piVar1[0] + 0x1004) = -5;
        piVar1[6] = (int)ptr1;
        piVar1[7] = 0;
        piVar1[8] = 0x1000;
        piVar1[9] = (int)pcVar7;
        piVar1[10] = (int)pcVar8;
        piVar1[12] = 0x1d4c0;
        if (FUN_020de748((void *)piVar1[5], DAT_0211dc14) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(1);
            break;
        }
        if (FUN_020def48((void *)piVar1[5], ptr2) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(8);
            break;
        }
        if (FUN_020de820((void *)piVar1[5]) != 0) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(1);
            break;
        }
        FUN_020de888((void *)piVar1[5], FUN_02066c60(DAT_021181a0[1]) - 1);
        if (*(int *)(piVar1[5] + 0x1ba4) != 0) {
            FUN_02066998((void *)(piVar1[5] + 0x1b38));
        }
        switch (*(int *)(piVar1[5] + 0x1020)) {
        case 2:
            *(int *)(DAT_0211dbfc[0] + 0x1004) = -1;
        default:
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(3);
            goto exit_cleanup;
        case 8:
            break;
        }
        if (FUN_020df248((void *)piVar1[5], 1) != 1) {
            FUN_020decec((void *)DAT_0211dbfc[5]);
            FUN_020e0104(2);
            break;
        }
        {
            const char *src = *(const char **)(piVar1[5] + 0x1a08);
            if (src == 0) {
                FUN_020decec((void *)piVar1[5]);
                FUN_020e0104(2);
                break;
            }
            *(void **)(piVar1[0] + 0x1118) = pcVar7(DAT_021007c4, FUN_02003c70(src) + 1);
            dst2 = *(void **)(piVar1[0] + 0x1118);
            if (dst2 == 0) {
                FUN_020decec((void *)DAT_0211dbfc[5]);
                FUN_020e0104(4);
                break;
            }
            FUN_02003d54(dst2, src, FUN_02003c70(src) + 1);
        }
        FUN_020decec((void *)piVar1[5]);
        FUN_02066c68(sleep_ms);
    }

exit_cleanup:
    if (ptr1 != 0) {
        pcVar8(DAT_02100860, ptr1, 0);
    }
    if (ptr2 != 0) {
        pcVar8(DAT_0210086c, ptr2, 0);
    }
    if (ptr3 != 0) {
        pcVar8(DAT_02100878, ptr3, 0);
    }
}
