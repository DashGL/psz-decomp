// FUN_02058164 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x1b8 candidate=0x1b8 words=0 exact_bytes=0 bad_relocs=0
// FUN_02058164 @ 0x02058164 (0x1b8, ARM)
// flags: -noThumb
// Keyed inner/outer hash construction through the supplied hash descriptor.
// Descriptor callbacks are initialize(context), update(context,bytes,length), finalize(context,out).
// Three64-byte work areas preserve the original descriptor/block-size invariants.
typedef unsigned char u8;
typedef struct {
 int digest_size,block_size;void *context;void *digest;
 void (*initialize)(void *);void (*update)(void *,const void *,int);void (*finalize)(void *,void *);
} Hash;
void FUN_02058164(void *out,const void *message,int message_size,const u8 *key,int key_size,Hash *hash){
 u8 hashed_key[64],inner[64],outer[64];int i;
 if(!out||!message||!message_size||!key||!key_size||!hash)return;
 if(key_size>hash->block_size){hash->initialize(hash->context);hash->update(hash->context,key,key_size);hash->finalize(hash->context,hashed_key);key_size=hash->digest_size;key=hashed_key;}
 for(i=0;i<key_size;i++)inner[i]=key[i]^0x36;
 for(;i<hash->block_size;i++)inner[i]=0x36;
 hash->initialize(hash->context);hash->update(hash->context,inner,hash->block_size);hash->update(hash->context,message,message_size);hash->finalize(hash->context,hash->digest);
 for(i=0;i<key_size;i++)outer[i]=key[i]^0x5c;
 for(;i<hash->block_size;i++)outer[i]=0x5c;
 hash->initialize(hash->context);hash->update(hash->context,outer,hash->block_size);hash->update(hash->context,hash->digest,hash->digest_size);hash->finalize(hash->context,out);
}
