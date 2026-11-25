// FUN_overlay_15__02122334 @ 0x02122334 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02122334 @ 0x02122334 (thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Address{unsigned char length,family;unsigned short port;unsigned ip;} Address;
typedef struct Local{unsigned ip;Address address;} Local;
#pragma thumb off
extern unsigned FUN_02027d48(void);
extern void FUN_02028730(unsigned,void *);
#pragma thumb on
extern int FUN_overlay_15__0212231c(void *,const Address *,unsigned,const void *,unsigned);
int FUN_overlay_15__02122334(void *socket,const void *data,unsigned size){
    Local local;
    local.address.length=8;local.address.family=2;local.address.ip=~0u;local.address.port=0x1e6;
    FUN_02028730(FUN_02027d48(),&local.ip);
    return FUN_overlay_15__0212231c(socket,&local.address,(unsigned)&local.ip,data,size);
}
