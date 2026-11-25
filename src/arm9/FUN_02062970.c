// FUN_02062970 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// USA ARM callback reconstruction, 2026-11-05; full extents and ABI notes in root batch235.
typedef struct {int a,b;char *state,*work;} Globals;
extern Globals DAT_021180a0;
void FUN_02062970(void *value){void (*callback)(int,void *);*(unsigned char *)(DAT_021180a0.state+0x50d)=0;*(unsigned short *)(DAT_021180a0.work+0x1316)=0;callback=*(void (**)(int,void *))(DAT_021180a0.state+0x51c);if(callback)callback(17,value);}
