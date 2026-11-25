// FUN_0200c210 @ 0x0200c210 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// Static constructor table: 37 concrete zero-input entries, then null; root batch267.
typedef void (*Initializer)(void);
extern Initializer UNK_020f6058[];
void FUN_0200c210(void){Initializer *p=UNK_020f6058;while(p && *p){(*p)();++p;}}
