// flags: -O4,p
// Advance the peer acknowledgement handshake and resend timed-out requests.
// check: 2.0/sp2p3 target=0x2c8 candidate=0x2cc words=999 exact_bytes=999 bad_relocs=3
// near: ndiff=999/178 size=0x2c8 vers=2.0/sp2p3 next="64-bit timer temporaries and repeated peer-loop/global-getter register lifetimes"
typedef unsigned int u32;
typedef unsigned long long u64;
struct Handshake { unsigned char active, expected, attempts, pad; u32 delay, ack, desired; u64 started, sent; };
extern struct Handshake *DAT_0211de64;
extern unsigned char *FUN_020e961c(void);
extern u64 FUN_02067e0c(void);
extern u32 FUN_020e852c(int);
extern void FUN_020e72d0(int), FUN_020e9628(u32), FUN_020e859c(int), FUN_020e7c40(void), FUN_020e7a8c(int);
extern int FUN_020e6cf4(int,int,int);
extern int FUN_020e59d8(int,u32,u32,u32,const void *,int);
extern int FUN_020e6b74(int), FUN_020e6fc4(u32);
void FUN_020e85dc(void)
{
    struct Handshake *h;
    unsigned char *a,*b,*c;
    u32 bits,attempts,id;
    int i,status;
    if(!DAT_0211de64||!DAT_0211de64->active||FUN_020e961c()[0x15]==2||FUN_020e961c()[0x15]==3)return;
    if(*(u32 *)(FUN_020e961c()+0x1a0)==19) {
        bits=FUN_020e852c(0);h=DAT_0211de64;
        if(h->ack==bits) {
            if(h->desired==bits) {
                a=FUN_020e961c();a[0x16]=FUN_020e961c()[0xd];
                a=FUN_020e961c();a[0x1a4]=FUN_020e961c()[0xd]-1;
                FUN_020e72d0(0);return;
            }
            h->sent=FUN_02067e0c();h->ack=0;
            if(!FUN_020e961c()[0x15]) {
                FUN_020e9628(3);*(u32 *)(FUN_020e961c()+0xe8)=2;
                a=FUN_020e961c();*(u64 *)(a+0xec)=FUN_02067e0c();
            } else {FUN_020e9628(4);FUN_020e6cf4(1,0,0);}
            return;
        }
        attempts=h->attempts;
        if(((FUN_02067e0c()-h->sent)<<6)/33514u >= (long long)((int)attempts*6000)) {
            if(attempts>5){FUN_020e859c(1);FUN_020e7c40();FUN_020e7a8c(1);return;}
            for(i=1;i<=FUN_020e961c()[0xd];i++) {
                if(!((1u << FUN_020e961c()[0x2d0+i]) & DAT_0211de64->ack)) {
                    a=FUN_020e961c();b=FUN_020e961c();c=FUN_020e961c();
                    status=FUN_020e59d8(17,*(u32 *)(a+0xf4+4*i),*(u32 *)(b+0x24+4*i),*(unsigned short *)(c+0xa4+2*i),0,0);
                    if(FUN_020e6b74(status))return;
                }
            }
            ++DAT_0211de64->attempts;
        }
    } else if(*(u32 *)(FUN_020e961c()+0x1a0)==4||*(u32 *)(FUN_020e961c()+0x1a0)==3) {
        h=DAT_0211de64;
        if((int)FUN_020e961c()[0xd]<(int)h->expected-1)return;
        if(!h->attempts) {
            h=DAT_0211de64;
            if(((FUN_02067e0c()-h->started)<<6)/33514u >= h->delay)goto begin;
        }
        if(!h->attempts)return;
        h=DAT_0211de64;
        if(((FUN_02067e0c()-h->sent)<<6)/33514u < (h->delay>>2))return;
begin:
        if(*(u32 *)(FUN_020e961c()+0x204)) {
            status=FUN_020e6fc4(*(u32 *)(FUN_020e961c()+0x204));
            if(FUN_020e6b74(status))return;
        }
        FUN_020e9628(19);
        for(i=1;i<=FUN_020e961c()[0xd];i++) {
            a=FUN_020e961c();b=FUN_020e961c();c=FUN_020e961c();
            status=FUN_020e59d8(17,*(u32 *)(a+0xf4+4*i),*(u32 *)(b+0x24+4*i),*(unsigned short *)(c+0xa4+2*i),0,0);
            if(FUN_020e6b74(status))return;
        }
        h=DAT_0211de64;h->sent=FUN_02067e0c();h->attempts=1;
    }
}
