#ifndef  _TAG_BLOCK_ASSERT_H_
#define _TAG_BLOCK_ASSET_H_

#define TAG_BLOCK_SIZE_ASSERT(tagblock,size)\
static_assert (sizeof(tagblock) == (size),"Invalid Size for TagBlock <" #tagblock ">")

#endif // ! _TAG_BLOCK_ASSERT_H_
