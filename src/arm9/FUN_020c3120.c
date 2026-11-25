#pragma opt_dead_assignments off
#pragma thumb off
extern void FUN_02014318(void *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0201424c(void *);
extern void FUN_02014308(void *, void *);
#pragma thumb on
extern void FUN_020c33f8(void);
extern void FUN_020c3420(void);
extern void FUN_020c3440(void);
extern void FUN_020c340c(void);
extern void FUN_020c3430(void);
typedef struct { unsigned int x, y; } Vec2;
extern const Vec2 DAT_020f5c10;
void FUN_020c3120(void *renderer, unsigned int *main_ctx, unsigned int *sub_ctx) {
    Vec2 v1;
    Vec2 v0;
    FUN_02014318(main_ctx);
    FUN_02014318(sub_ctx);
    FUN_0200c938(&v1, 8);
    main_ctx[0] = v1.x;
    main_ctx[1] = v1.y;
    main_ctx[2] = 0x100000;
    main_ctx[3] = 0xc0000;
    main_ctx[10] = (unsigned int)FUN_020c33f8;
    main_ctx[11] = (unsigned int)FUN_020c3420;
    main_ctx[13] = (unsigned int)FUN_020c3440;
    main_ctx[5] = 1;
    v0 = DAT_020f5c10;
    *(Vec2 *)sub_ctx = v0;
    sub_ctx[2] = 0x100000;
    sub_ctx[3] = 0xc0000;
    sub_ctx[10] = (unsigned int)FUN_020c340c;
    sub_ctx[11] = (unsigned int)FUN_020c3430;
    sub_ctx[13] = (unsigned int)FUN_020c3440;
    sub_ctx[5] = 2;
    FUN_0201424c(renderer);
    FUN_02014308(renderer, main_ctx);
    FUN_02014308(renderer, sub_ctx);
}
