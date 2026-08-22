#include "ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74.h"
#include "ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77.h"

typedef union ffx_sssr_classify_tiles_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_classify_tiles_pass_wave64_PermutationKey;

typedef struct ffx_sssr_classify_tiles_pass_wave64_PermutationInfo {
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
} ffx_sssr_classify_tiles_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_sssr_classify_tiles_pass_wave64_IndirectionTable[] = {
    0,
    1,
};

static const ffx_sssr_classify_tiles_pass_wave64_PermutationInfo g_ffx_sssr_classify_tiles_pass_wave64_PermutationInfo[] = {
    { g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_size, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_data, 1, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_CBVResourceSets, 5, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureSRVResourceSets, 2, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_TextureUAVResourceSets, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_BufferUAVResourceSets, 1, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_0be24f75cbef3a410d6e519d1fe61c74_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_size, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_data, 1, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_CBVResourceSets, 5, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureSRVResourceSets, 2, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_TextureUAVResourceSets, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_BufferUAVResourceSets, 1, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_wave64_94d06cf1f5882c238c9fb504408b0e77_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

