// Select a peer route, publish connection parameters, and begin connection setup.
// check: 2.0/sp2p3 target=0x250 candidate=0x250 words=54 exact_bytes=285 bad_relocs=2
// near: ndiff=54/148 size=0x250 vers=2.0/sp2p3 next="local/register lifetimes through repeated global getters and route branches"
typedef unsigned int u32;
extern unsigned char *FUN_020e961c(void);
extern int FUN_020d8264(void *);
extern u32 FUN_020d8244(void *), FUN_020d8248(void *), FUN_020d8278(void *), FUN_020d827c(void *);
extern u32 FUN_020d8b84(void *), FUN_020e0b68(u32);
#pragma thumb off
extern u32 FUN_02028360(void);
#pragma thumb on
extern u32 FUN_020d373c(void *), FUN_020d374c(void *);
extern int FUN_020e59d8(int,u32,u32,u32,const u32 *,int);
extern int FUN_020e5964(void *);
extern void FUN_020e92f8(int,u32,int,void *);
int FUN_020e5714(int supplied, u32 token, void *peer)
{
    unsigned int slot=FUN_020e961c()[0x14];
    int result=0, indirect;
    unsigned char *state, *first;
    u32 key, local, pair[2], remote, port;
    if (!supplied) {
        first=FUN_020e961c(); state=FUN_020e961c();
        token=(*(u32 *)(first+0x200)&0xffffu)|((u32)*(unsigned short *)(state+0x17e)<<16);
        if (FUN_020d8264(peer)) {
            key=FUN_020d8244(peer);
            if (key==FUN_020d8b84(*(void **)(FUN_020e961c()+0xe4))) {
                state=FUN_020e961c();*(u32 *)(state+0x210+slot*4)=FUN_020d8278(peer);
                state=FUN_020e961c();*(unsigned short *)(state+0x290+slot*2)=FUN_020d827c(peer);
                indirect=0;
            } else indirect=1;
        } else {
            local=(unsigned short)FUN_02028360();
            if((unsigned short)local==0xa8c0 || ((local&255)==0xac && (local&0xff00)>=0x1000 && (local&0xff00)<=0x1f00) || (local&255)==10)
                indirect=1;
            else {
                state=FUN_020e961c();*(u32 *)(state+0x210+slot*4)=FUN_020d8244(peer);
                state=FUN_020e961c();*(unsigned short *)(state+0x290+slot*2)=FUN_020d8248(peer);
                indirect=0;
            }
        }
        if(indirect) {
            state=FUN_020e961c();*(unsigned short *)(state+0x17e)=FUN_020e0b68(65536);
            *(u32 *)(FUN_020e961c()+0x19c)=token;
        } else {
            pair[0]=FUN_02028360();
            pair[1]=FUN_020d373c(**(void ***)(FUN_020e961c()+4));
            state=FUN_020e961c();remote=FUN_020d8244(peer);port=FUN_020d8248(peer);
            {
            int ret=FUN_020e59d8(6,*(u32 *)(state+0xf4+slot*4),remote,port,pair,2);
            FUN_020e961c()[0x3cd]=0;
            if(ret)return 2;
            }
            *(u32 *)(FUN_020e961c()+0x19c)=0;
        }
        FUN_020e961c()[0x194]=0;
        FUN_020e961c()[0x195]=0;
        state=FUN_020e961c();*(unsigned short *)(state+0x196)=FUN_020d8248(peer);
        state=FUN_020e961c();*(u32 *)(state+0x198)=FUN_020d8244(peer);
    } else {
        FUN_020e961c()[0x194]=1;
        FUN_020e961c()[0x195]=0;
        *(unsigned short *)(FUN_020e961c()+0x196)=0;
        *(u32 *)(FUN_020e961c()+0x198)=0;
        *(u32 *)(FUN_020e961c()+0x19c)=token;
        indirect=1;
    }
    if(indirect)result=FUN_020e5964(FUN_020e961c()+0x194);
    else {
        key=FUN_020d374c(**(void ***)(FUN_020e961c()+4));
        state=FUN_020e961c();FUN_020e92f8(0,key,0,state+0x194);
        state=FUN_020e961c();*(u32 *)(state+0x18c)=0;*(u32 *)(state+0x190)=0;
    }
    return result;
}
