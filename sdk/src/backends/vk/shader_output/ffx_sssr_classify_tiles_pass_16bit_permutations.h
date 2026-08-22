#include "ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498.h"
#include "ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd.h"

typedef union ffx_sssr_classify_tiles_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_classify_tiles_pass_16bit_PermutationKey;

typedef struct ffx_sssr_classify_tiles_pass_16bit_PermutationInfo {
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
} ffx_sssr_classify_tiles_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_sssr_classify_tiles_pass_16bit_IndirectionTable[] = {
    0,
    1,
};

static const ffx_sssr_classify_tiles_pass_16bit_PermutationInfo g_ffx_sssr_classify_tiles_pass_16bit_PermutationInfo[] = {
    { g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_size, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_data, 1, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_CBVResourceSets, 5, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureSRVResourceSets, 2, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_TextureUAVResourceSets, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_BufferUAVResourceSets, 1, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_89923ec7ce708646f7412ea1f8925498_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_size, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_data, 1, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_CBVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_CBVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_CBVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_CBVResourceSets, 5, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureSRVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureSRVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureSRVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureSRVResourceSets, 2, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_TextureUAVResourceSets, 0, 0, 0, 0, 0, 3, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_BufferUAVResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_BufferUAVResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_BufferUAVResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_BufferUAVResourceSets, 1, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_SamplerResourceNames, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_SamplerResourceBindings, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_SamplerResourceCounts, g_ffx_sssr_classify_tiles_pass_16bit_8e9409d3ae2330bfb38a9a44170f10fd_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

