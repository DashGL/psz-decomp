//cpp
// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
struct Stream {
    virtual void v0();
    virtual void v1();
    virtual int seek(u32);
    virtual int read(void *, u32);
    u32 length, position;
    void *file;
    u8 pending;
};
struct AudioCh {
    u8 pad0[0x1cc];
    u32 f1cc;
    u8 pad1[0x8c0 - 0x1d0];
    u8 buf[0xc34];
    u32 f14f4;
};
struct Movie {
    Stream *stream;
    signed char magic[6];
    u16 version;
    u32 f0c;
    u32 width;
    u32 height;
    u32 f18;
    u16 audio_type;
    u16 audio_channels;
    u32 f20;
    u32 max_frame;
    u32 f28;
    u32 f2c;
    u32 f30;
    char *decoder;
    void *f38;
    u32 pad3c[3];
    u32 f48;
    u32 f4c;
    u32 f50;
    void *f54;
    AudioCh *audio;
    void **buf_y;
    void **buf_uv;
    void *f64;
    u32 pad68[2];
    void *pkt_buf[2];
    u32 f78;
    u32 f7c;
    u32 f80;
    u32 f84;
    u32 f88;
    u32 f8c;
    u32 f90;
    void *f94;
    u32 f98;
    u32 f9c;
    u32 fa0;
    u32 count;
    u32 ring[6];
    u32 fc0;
    u32 padc4[3];
    u32 start_pos;
};
extern "C" {
#pragma thumb on
extern void *FUN_overlay_16__021202f8(u32);
#pragma thumb off
extern void FUN_0206557c(u32,void *,u32),FUN_020656b8(void *,u32,u32);
extern void *FUN_overlay_16__0211fd38(void),*FUN_overlay_16__0211fdb4(void),*FUN_overlay_16__0211fe94(void),*FUN_overlay_16__0211fe24(void);

int FUN_overlay_16__0211e930(Movie *self,Stream *stream,u32 count)
{
    signed char tag[2];
    u16 length;
    u32 first;
    self->stream=stream;self->start_pos=stream->position;
    if(!self->stream->read(self->magic,48))return 0;
    if(self->magic[0]!='M'||self->magic[1]!='O'||self->magic[2]!='D'||self->magic[3]!='S'||self->magic[4]!='N'||
       (self->magic[5]!='2'&&self->magic[5]!='3')||self->version!=10)return 0;
    if(self->magic[4]=='N'&&self->magic[5]=='3') {
        do {
            if(!self->stream->read(tag,2))return 0;
            if(!self->stream->read(&length,2))return 0;
            if(!self->stream->seek(((u32)length<<2)+self->stream->position))return 0;
        }while(tag[0]!='H'||tag[1]!='E');
    }
    if(self->audio_type!=0&&self->audio_type!=1&&self->audio_type!=2)return 0;
    self->decoder=(char *)FUN_overlay_16__021202f8(0x454);
    FUN_0206557c(0,self->decoder,0x454);
    self->f38=FUN_overlay_16__0211fd38();
    *(void **)(self->decoder+60)=FUN_overlay_16__0211fdb4();
    *(u32 *)(self->decoder+64)=0x02122a88;
    *(char **)(self->decoder+68)=(char *)FUN_overlay_16__0211fe94()+64;
    self->f4c=self->width;self->f50=self->height;self->f54=FUN_overlay_16__0211fe24();
    *(u32 *)(self->decoder+4)=self->width;*(u32 *)(self->decoder+8)=self->height;
    if(self->width>256)return 0;
    if(count<6)return 0;
    self->count=count;self->buf_y=(void **)FUN_overlay_16__021202f8(count*4);if(!self->buf_y)return 0;
    self->buf_uv=(void **)FUN_overlay_16__021202f8(self->count*4);if(!self->buf_uv)return 0;
    for(u32 u=0;u<self->count;u++) {
        self->buf_y[u]=FUN_overlay_16__021202f8(self->height<<8);
        if(!self->buf_y[u])return 0;
        self->buf_uv[u]=FUN_overlay_16__021202f8((self->height>>1)<<8);
        if(!self->buf_uv[u])return 0;
        FUN_0206557c(0,self->buf_y[u],self->height<<8);
        FUN_020656b8(self->buf_uv[u],128,(self->height>>1)<<8);
    }
    self->f64=FUN_overlay_16__021202f8(self->count*4);if(!self->f64)return 0;
    self->f98=0;self->ring[0]=0;
    for(int i=1;i<6;i++)self->ring[i]=self->count-i;
    self->fc0=0;self->fa0=0;self->f9c=0;
    for(int i=0;i<2;i++) {self->pkt_buf[i]=FUN_overlay_16__021202f8(self->max_frame+1024);if(!self->pkt_buf[i])return 0;}
    if(self->audio_type!=0) {
        self->audio=(AudioCh *)FUN_overlay_16__021202f8((u32)self->audio_channels*0x14f8);if(!self->audio)return 0;
        FUN_0206557c(0,self->audio,(u32)self->audio_channels*0x14f8);
    }
    u32 position=self->stream->position;self->stream->seek(self->f2c+self->start_pos);
    self->f94=FUN_overlay_16__021202f8(self->f30*8);
    if(!self->stream->read(self->f94,self->f30*8))return 0;
    self->stream->seek(position);
    if(self->audio_type==1) {
        int i;
        u32 position2=self->stream->position;self->stream->seek(self->f28+self->start_pos);
        for(i=0;i<self->audio_channels;i++) {
            if(!self->stream->read(self->audio[i].buf,0xc34))return 0;
            self->audio[i].f14f4=2;
        }
        self->stream->seek(position2);
    }else if(self->audio_type==2) {
        for(int i=0;i<self->audio_channels;i++){self->audio[i].f1cc=2;}
    }
    self->stream->read(&first,4);self->f78=first>>14;self->f88=first&0x3fff;self->f80=0;
    self->stream->read(self->pkt_buf[0],self->f78+4);self->f90=1;
    return 1;
}
}
