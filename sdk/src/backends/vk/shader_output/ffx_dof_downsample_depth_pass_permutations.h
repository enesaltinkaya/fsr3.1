#include "ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8.h"
#include "ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34.h"

typedef union ffx_dof_downsample_depth_pass_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_downsample_depth_pass_PermutationKey;

typedef struct ffx_dof_downsample_depth_pass_PermutationInfo {
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
} ffx_dof_downsample_depth_pass_PermutationInfo;

static const uint32_t g_ffx_dof_downsample_depth_pass_IndirectionTable[] = {
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
};

static const ffx_dof_downsample_depth_pass_PermutationInfo g_ffx_dof_downsample_depth_pass_PermutationInfo[] = {
    { g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_size, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_data, 1, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_CBVResourceNames, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_CBVResourceSets, 1, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureSRVResourceSets, 1, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_BufferUAVResourceSets, 1, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_bd3586170223deaa861869ac60f135b8_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_size, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_data, 1, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_CBVResourceNames, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_CBVResourceSets, 1, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureSRVResourceSets, 1, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_BufferUAVResourceSets, 1, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_efd90b044e68d3a158e0260c6c67cc34_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

