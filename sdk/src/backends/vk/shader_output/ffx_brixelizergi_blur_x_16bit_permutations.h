#include "ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc.h"
#include "ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416.h"
#include "ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95.h"
#include "ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42.h"

typedef union ffx_brixelizergi_blur_x_16bit_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_blur_x_16bit_PermutationKey;

typedef struct ffx_brixelizergi_blur_x_16bit_PermutationInfo {
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
} ffx_brixelizergi_blur_x_16bit_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_blur_x_16bit_IndirectionTable[] = {
    3,
    1,
    2,
    0,
    3,
    1,
    2,
    0,
};

static const ffx_brixelizergi_blur_x_16bit_PermutationInfo g_ffx_brixelizergi_blur_x_16bit_PermutationInfo[] = {
    { g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_size, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_data, 1, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_CBVResourceSets, 4, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureSRVResourceSets, 2, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_a56e71fa4aef655c39134eae59413bdc_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_size, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_data, 1, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_CBVResourceSets, 4, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureSRVResourceSets, 2, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_204692b70c504c8aa7548ce8d06dd416_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_size, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_data, 1, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_CBVResourceSets, 4, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureSRVResourceSets, 2, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_3f7c6593e47fcaa3ab467bc264893f95_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_size, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_data, 1, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_CBVResourceNames, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_CBVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_CBVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_CBVResourceSets, 4, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureSRVResourceNames, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureSRVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureSRVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureSRVResourceSets, 2, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureUAVResourceNames, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureUAVResourceBindings, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureUAVResourceCounts, g_ffx_brixelizergi_blur_x_16bit_f00bf45cc013201d35bc338fe0ce6f42_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

