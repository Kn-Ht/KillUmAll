#ifndef ASSETS_C
#define ASSETS_C

#define ASSETS_MAX 64

#include "raywrapper.h"
#include <stdio.h>

enum
{
    TXT_SCRUMBUS = 0,
    TXT_STONE01,
    TXT_MAX,
};

static const char* paths[] = {
    [TXT_SCRUMBUS] = "assets/scrumbus.png",
    [TXT_STONE01] = "assets/stone01.png"
};

static Texture textures[TXT_MAX];

void load_assets() {
    i32 i;
    for (i = 0; i < TXT_MAX; i++) textures[i] = LoadTexture(paths[i]);
}

void unload_assets() {
    i32 i;
    for (i = 0; i < TXT_MAX; i++) UnloadTexture(textures[i]);
}

#endif // ASSETS_C