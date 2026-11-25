// FUN_0205fe18 @ 0x0205fe18 (0x3c, arm) - ported from FUN_02012fa8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0205fe18 — CRC-256 table update (ARM, dsi/1.1, 0x3c). Continuing
 * CRC from *crcP over `count` bytes of `data` via table[256]; writes the
 * new CRC back through crcP.
 * KEY: the source is a BARE while loop — no outer if(count) guard. CW4
 * peels the loop pre-test and it carries the loop's unsigned compare
 * (cmp r3,#0; bls door + blo back edge). Every guard-wrapped spelling
 * (if count!=0/ >0/ <=0, do-while, early returns, 21-compile family
 * sweep) folds the door to beq/ble — the peeled-loop LS door is ONLY
 * produced by the guardless loop form. (Lever: [PEELED-LOOP-DOOR].)
 */
typedef unsigned int u32;

void FUN_0205fe18(u32 *table, u32 *crcP, const unsigned char *data, u32 count)
{
    u32 crc = *crcP;
    u32 i = 0;
    while (i < count) {
        unsigned char byte = *data++;
        i++;
        crc = table[(crc ^ byte) & 0xff] ^ (crc >> 8);
    }
    *crcP = crc;
}
