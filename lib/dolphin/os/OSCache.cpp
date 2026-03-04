#include <dolphin/os/OSCache.h>

void DCInvalidateRange(void* addr, u32 nBytes) {}
void DCFlushRange(void* addr, u32 nBytes) {}
void DCStoreRange(void* addr, u32 nBytes) {}
void DCFlushRangeNoSync(void* addr, u32 nBytes) {}
void DCStoreRangeNoSync(void* addr, u32 nBytes) {}
void DCZeroRange(void* addr, u32 nBytes) {}
void DCTouchRange(void* addr, u32 nBytes) {}
void ICInvalidateRange(void* addr, u32 nBytes) {}

void LCEnable(void) {}
void LCDisable(void) {}
void LCLoadBlocks(void* destTag, void* srcAddr, u32 numBlocks) {}
void LCStoreBlocks(void* destAddr, void* srcTag, u32 numBlocks) {}
u32 LCLoadData(void* destAddr, void* srcAddr, u32 nBytes) { return 0; }
u32 LCStoreData(void* destAddr, void* srcAddr, u32 nBytes) { return 0; }
u32 LCQueueLength(void) { return 0; }
void LCQueueWait(u32 len) {}
void LCFlushQueue(void) {}
void __OSCacheInit(void) {}
