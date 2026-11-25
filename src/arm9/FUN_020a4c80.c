// FUN_020a4c80 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020a4c80 @ 0x020a4c80 (0x1c, Thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// Select record and invoke its zero-input callback unless deferred-to-release.
typedef void (*Callback)(void);
void FUN_020a4c80(void *unused,unsigned char *record,unsigned short *flags){*flags|=4;if(!(record[13]&64)){Callback f=*(Callback *)(record+16);if(f)f();}}
