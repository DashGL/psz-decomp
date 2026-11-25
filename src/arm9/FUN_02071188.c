// FUN_02071188 @ 0x02071188 (0x2c code + 8-byte pool = 0x34)
// MATCHED: byte-identical under every 2.0/* build (base..sp2p4);
// FAILS all dsi/* builds (kept pointer in r4 across the call instead of
// ldm r3,{r2,r3} + post-call pool reload) and all 1.2/* builds.
// This function is the compiler-pin discriminator for Phantasy Star Zero
// (C24E). See notes/compiler-identification.md.
//
// Live u64 accumulator (LCG RNG step): q[0] = q[2] + q[1] * q[0] via
// FUN_0200a380 (the runtime 64x64 multiply helper, 352 ARM9 callers), then
// returns (q[0] >> 32) * 0xfff >> 32. Pool words: pointer 0x0211c844,
// multiplier 0xfff.
typedef unsigned long long u64;
typedef unsigned int u32;
extern u64 data_0211c844[3];
extern u64 FUN_0200a380(u64 a, u64 b);

u32 FUN_02071188(void) {
    u64* q = data_0211c844;
    u64 acc = q[2] + FUN_0200a380(q[1], q[0]);
    q[0] = acc;
    return FUN_0200a380(acc >> 32, 0xfff) >> 32;
}
