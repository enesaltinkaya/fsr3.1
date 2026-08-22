#include "ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7.h"
#include "ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99.h"

typedef union ffx_brixelizergi_downsample_16bit_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_downsample_16bit_PermutationKey;

typedef struct ffx_brixelizergi_downsample_16bit_PermutationInfo {
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
} ffx_brixelizergi_downsample_16bit_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_downsample_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_brixelizergi_downsample_16bit_PermutationInfo g_ffx_brixelizergi_downsample_16bit_PermutationInfo[] = {
    { g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_size, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_data, 1, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_CBVResourceNames, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_CBVResourceBindings, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_CBVResourceCounts, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_CBVResourceSets, 7, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureSRVResourceNames, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureSRVResourceBindings, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureSRVResourceCounts, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureSRVResourceSets, 7, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureUAVResourceNames, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureUAVResourceBindings, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureUAVResourceCounts, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_SamplerResourceNames, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_SamplerResourceBindings, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_SamplerResourceCounts, g_ffx_brixelizergi_downsample_16bit_b454b3edba2be751b483047fa7d2dba7_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_size, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_data, 1, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_CBVResourceNames, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_CBVResourceBindings, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_CBVResourceCounts, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_CBVResourceSets, 7, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureSRVResourceNames, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureSRVResourceBindings, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureSRVResourceCounts, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureSRVResourceSets, 7, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureUAVResourceNames, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureUAVResourceBindings, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureUAVResourceCounts, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_SamplerResourceNames, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_SamplerResourceBindings, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_SamplerResourceCounts, g_ffx_brixelizergi_downsample_16bit_72e6039bfef946d485d746935a4b2c99_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

