#include "antilag/antilag.h"
#include <stdlib.h>

struct AntiLagContext_t {
    int dummy;
};

AntiLagContext antilagCreate(const AntiLagCreateInfo* info)
{
    (void)info;
    return (AntiLagContext)malloc(sizeof(struct AntiLagContext_t));
}

void antilagUpdate(AntiLagContext ctx, const AntiLagFrameInfo* frame)
{
    (void)ctx;
    (void)frame;
}

void antilagDestroy(AntiLagContext ctx)
{
    free(ctx);
}

