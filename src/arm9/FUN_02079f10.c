// FUN_02079f10 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02079f10 @ 0x02079f10 (0x18, Thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// Under flag4, query overlay4 singleton then request its menu-state transition.
extern void *FUN_overlay_4__0212bde0(void);extern void FUN_overlay_4__0212be48(void);
void FUN_02079f10(char *self){if(*(unsigned int *)(self+56)&4){if(FUN_overlay_4__0212bde0())FUN_overlay_4__0212be48();}}
