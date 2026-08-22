#include "ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0.h"
#include "ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22.h"

typedef union ffx_sssr_intersect_pass_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_intersect_pass_PermutationKey;

typedef struct ffx_sssr_intersect_pass_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_sssr_intersect_pass_PermutationInfo;

static const uint32_t g_ffx_sssr_intersect_pass_IndirectionTable[] = {
    1,
    0,
};

static const ffx_sssr_intersect_pass_PermutationInfo g_ffx_sssr_intersect_pass_PermutationInfo[] = {
    { g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_size, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_data, 1, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_CBVResourceNames, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_CBVResourceBindings, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_CBVResourceCounts, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_CBVResourceSets, 6, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureSRVResourceNames, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureSRVResourceBindings, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureSRVResourceCounts, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureSRVResourceSets, 1, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureUAVResourceNames, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureUAVResourceBindings, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureUAVResourceCounts, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_TextureUAVResourceSets, 0, 0, 0, 0, 0, 2, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_BufferUAVResourceNames, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_BufferUAVResourceBindings, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_BufferUAVResourceCounts, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_BufferUAVResourceSets, 1, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_SamplerResourceNames, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_SamplerResourceBindings, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_SamplerResourceCounts, g_ffx_sssr_intersect_pass_1be5fa8a10fb6865f327650c1805e4c0_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_size, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_data, 1, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_CBVResourceNames, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_CBVResourceBindings, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_CBVResourceCounts, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_CBVResourceSets, 6, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureSRVResourceNames, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureSRVResourceBindings, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureSRVResourceCounts, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureSRVResourceSets, 1, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureUAVResourceNames, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureUAVResourceBindings, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureUAVResourceCounts, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_TextureUAVResourceSets, 0, 0, 0, 0, 0, 2, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_BufferUAVResourceNames, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_BufferUAVResourceBindings, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_BufferUAVResourceCounts, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_BufferUAVResourceSets, 1, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_SamplerResourceNames, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_SamplerResourceBindings, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_SamplerResourceCounts, g_ffx_sssr_intersect_pass_369ef0c0ddcebaa8becd40f98b3edc22_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

