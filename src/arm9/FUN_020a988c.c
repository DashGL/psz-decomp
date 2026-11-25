// FUN_020a988c @ 0x020a988c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020a988c @ 0x020a988c (0x18, Thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// Overlay12 singleton gate; adapter consumes packet in r1 and ignores receiver.
extern void *UNK_0211a9a4;extern void FUN_overlay_12__0212a3a8(void *,void *);
void FUN_020a988c(void *packet){void *p=UNK_0211a9a4;if(p)FUN_overlay_12__0212a3a8(p,packet);}
