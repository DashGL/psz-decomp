// FUN_020c1e64 @ 0x020c1e64 (0x2c, thumb) - ported from FUN_020a7e94 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c1e64 @ 0x020a7e94 (0x2c, Thumb) — MATCHED dsi/1.1.
 * Reset the application's three request-cache entries at manager+0xc4,
 * stride 12. Set each key to -1 and state to 0; pass the handle FIELD ADDRESS
 * at entry+8 and option 0 to 0200d74c. No handle store is performed here.
 * 0200d74c loads the handle and delegates to 020282b4, which guards the
 * handle's active byte and delegates zero-option handling to 02028468.
 * Backend bodies remain external; this unit is the application cache policy.
 * Scope hold from goal50 resolved by the now-banked 020a7dac request path:
 * it searches these exact three records by key/available handle, writes
 * key and state 3, and submits the selected request. Banked 020a7a4c invokes
 * this reset before a resource transition; 020a7ba4 also resets on release.
 * The new game-state dispatcher 020a1284 reaches this transition path with
 * game-specific resource selection. Admission relies on this concrete
 * application-state relationship, not the coarse census verdict alone.
 * Split base declaration and +=0xcc retain the target pointer creation
 * and sentinel derivation from initial counter 0. This is the previously
 * saved goal50 arg spelling; fresh full machine/relocation check confirms it.
 * Complete 44 bytes, one backend call relocation, no pool. Evidence in
 * scratch/goal80d, 2026-10-19. No emulator test; no SDK body reconstructed.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_0200d74c(void *p, u32 n);

void FUN_020c1e64(void *arg) {
    int i = 0;
    u32 neg = i - 1;
    u8 *base = (u8 *)arg;
    base += 0xcc;
    while (i < 3) {
        u32 rec = i * 12;
        *(u32 *)((u8 *)arg + rec + 0xc4) = neg;
        *(u32 *)((u8 *)arg + rec + 0xc8) = 0;
        FUN_0200d74c(base + rec, 0);
        i++;
    }
}
