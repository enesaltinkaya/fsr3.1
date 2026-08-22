#include "ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981.h"
#include "ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f.h"

typedef union ffx_sssr_depth_downsample_pass_PermutationKey {
    struct {
        uint32_t FFX_SSSR_OPTION_INVERTED_DEPTH : 1;
    };
    uint32_t index;
} ffx_sssr_depth_downsample_pass_PermutationKey;

typedef struct ffx_sssr_depth_downsample_pass_PermutationInfo {
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
} ffx_sssr_depth_downsample_pass_PermutationInfo;

static const uint32_t g_ffx_sssr_depth_downsample_pass_IndirectionTable[] = {
    1,
    0,
};

static const ffx_sssr_depth_downsample_pass_PermutationInfo g_ffx_sssr_depth_downsample_pass_PermutationInfo[] = {
    { g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_size, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_data, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureSRVResourceNames, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureSRVResourceBindings, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureSRVResourceCounts, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureSRVResourceSets, 1, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureUAVResourceNames, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_BufferUAVResourceNames, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_BufferUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_BufferUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_b519aebdb58acd053f811f7a2b565981_BufferUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_size, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_data, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureSRVResourceNames, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureSRVResourceBindings, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureSRVResourceCounts, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureSRVResourceSets, 1, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureUAVResourceNames, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_BufferUAVResourceNames, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_BufferUAVResourceBindings, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_BufferUAVResourceCounts, g_ffx_sssr_depth_downsample_pass_80275225e1b3a43554755ea1a4f3116f_BufferUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

