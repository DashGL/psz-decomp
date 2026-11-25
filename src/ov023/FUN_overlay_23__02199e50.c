// FUN_overlay_23__02199e50 @ 0x02199e50 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199e50 @ 0x02199e50 (code and checked extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23, 2026-11-04: write packet type four, clear next byte,
 * store signed amount divided by four (truncation toward zero), and byte value.
 * Every instruction admitted by the full exact decoded operand sequence.
 * Field identities remain provisional.
 */
void *FUN_overlay_23__02199e50(unsigned char *packet,unsigned char value,int amount) {
    packet[2]=4;
    packet[3]=0;
    packet[0]=amount/4;
    packet[8]=value;
    return packet;
}
