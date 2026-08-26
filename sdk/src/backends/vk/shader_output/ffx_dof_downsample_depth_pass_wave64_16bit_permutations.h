#include "ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4.h"
#include "ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0.h"

typedef union ffx_dof_downsample_depth_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_downsample_depth_pass_wave64_16bit_PermutationKey;

typedef struct ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo {
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
} ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_downsample_depth_pass_wave64_16bit_IndirectionTable[] = {
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
};

static const ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo g_ffx_dof_downsample_depth_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_size, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_data, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_CBVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_CBVResourceSets, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureSRVResourceSets, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_BufferUAVResourceSets, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_73c25396405d32ae892a078e9d88acd4_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_size, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_data, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_CBVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_CBVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_CBVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_CBVResourceSets, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureSRVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureSRVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureSRVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureSRVResourceSets, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_BufferUAVResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_BufferUAVResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_BufferUAVResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_BufferUAVResourceSets, 1, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_SamplerResourceNames, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_SamplerResourceBindings, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_SamplerResourceCounts, g_ffx_dof_downsample_depth_pass_wave64_16bit_a4b26d573ac19c436aefc70e5013e0c0_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

