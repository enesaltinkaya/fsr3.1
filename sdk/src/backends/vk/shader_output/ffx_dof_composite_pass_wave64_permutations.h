#include "ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98.h"
#include "ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09.h"

typedef union ffx_dof_composite_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_composite_pass_wave64_PermutationKey;

typedef struct ffx_dof_composite_pass_wave64_PermutationInfo {
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
} ffx_dof_composite_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_dof_composite_pass_wave64_IndirectionTable[] = {
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
};

static const ffx_dof_composite_pass_wave64_PermutationInfo g_ffx_dof_composite_pass_wave64_PermutationInfo[] = {
    { g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_size, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_data, 1, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_CBVResourceNames, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_CBVResourceBindings, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_CBVResourceCounts, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_CBVResourceSets, 2, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureSRVResourceNames, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureSRVResourceBindings, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureSRVResourceCounts, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureSRVResourceSets, 3, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureUAVResourceNames, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureUAVResourceBindings, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureUAVResourceCounts, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_SamplerResourceNames, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_SamplerResourceBindings, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_SamplerResourceCounts, g_ffx_dof_composite_pass_wave64_f88e082f3b3f19819fbd7e8f8c00ab98_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_size, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_data, 1, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_CBVResourceNames, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_CBVResourceBindings, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_CBVResourceCounts, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_CBVResourceSets, 3, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureSRVResourceNames, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureSRVResourceBindings, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureSRVResourceCounts, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureSRVResourceSets, 3, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureUAVResourceNames, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureUAVResourceBindings, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureUAVResourceCounts, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_SamplerResourceNames, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_SamplerResourceBindings, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_SamplerResourceCounts, g_ffx_dof_composite_pass_wave64_04a0c3ec24ece333f5b80f6e0b4e6b09_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

