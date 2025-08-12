#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AntiLagContext_t* AntiLagContext;

typedef struct AntiLagCreateInfo {
    void* device;
    void* swapchain;
    void* queue;
    void* window;
} AntiLagCreateInfo;

typedef struct AntiLagFrameInfo {
    double deltaTime;
} AntiLagFrameInfo;

AntiLagContext antilagCreate(const AntiLagCreateInfo* info);
void antilagUpdate(AntiLagContext ctx, const AntiLagFrameInfo* frame);
void antilagDestroy(AntiLagContext ctx);

#ifdef __cplusplus
}
#endif

