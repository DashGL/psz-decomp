// FUN_020a12a4 @ 0x020a12a4 (0x48, thumb)
// flags: -O4,s
extern int FUN_0203a820(const unsigned char *, int);
extern void FUN_020a1278(unsigned char *, const unsigned char *);
void FUN_020a12a4(unsigned char *ledger, const unsigned char *id)
{
    unsigned int category, bit;
    if (!FUN_0203a820(id, 0)) return;
    category = (unsigned int)id[1] - 1u;
    if (category < 16) FUN_020a1278(ledger + category * 12, id);
    else if (category == 16) {
        bit = id[3];
        if ((bit >> 3) < 8) (ledger + 192)[bit >> 3] |= (unsigned char)(1u << (bit & 7));
    }
}
