#include "ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340.h"
#include "ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45.h"

typedef union ffx_dof_blur_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_blur_pass_wave64_PermutationKey;

typedef struct ffx_dof_blur_pass_wave64_PermutationInfo {
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
} ffx_dof_blur_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_dof_blur_pass_wave64_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_dof_blur_pass_wave64_PermutationInfo g_ffx_dof_blur_pass_wave64_PermutationInfo[] = {
    { g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_size, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_data, 1, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_CBVResourceNames, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_CBVResourceSets, 2, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureSRVResourceSets, 2, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_BufferUAVResourceSets, 2, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_78d55439ac5b5a73d053a4cecc249340_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_size, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_data, 1, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_CBVResourceNames, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_CBVResourceSets, 2, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureSRVResourceSets, 2, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_BufferUAVResourceSets, 2, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_865e5cc2ca5ebd3c2ea67e01938f2b45_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

