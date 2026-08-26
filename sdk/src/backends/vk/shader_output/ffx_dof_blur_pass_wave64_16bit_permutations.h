#include "ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7.h"
#include "ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2.h"

typedef union ffx_dof_blur_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_DOF_OPTION_MAX_RING_MERGE_LOG : 1;
        uint32_t FFX_DOF_OPTION_COMBINE_IN_PLACE : 1;
        uint32_t FFX_DOF_OPTION_REVERSE_DEPTH : 1;
    };
    uint32_t index;
} ffx_dof_blur_pass_wave64_16bit_PermutationKey;

typedef struct ffx_dof_blur_pass_wave64_16bit_PermutationInfo {
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
} ffx_dof_blur_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_dof_blur_pass_wave64_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_dof_blur_pass_wave64_16bit_PermutationInfo g_ffx_dof_blur_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_size, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_data, 1, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_CBVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_CBVResourceSets, 2, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureSRVResourceSets, 2, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_BufferUAVResourceSets, 2, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_250aa51ed2a67279beef33b2f83ff9a7_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_size, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_data, 1, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_CBVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_CBVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_CBVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_CBVResourceSets, 2, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureSRVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureSRVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureSRVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureSRVResourceSets, 2, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_TextureUAVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_BufferUAVResourceNames, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_BufferUAVResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_BufferUAVResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_BufferUAVResourceSets, 2, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_SamplerResourceNames, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_SamplerResourceBindings, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_SamplerResourceCounts, g_ffx_dof_blur_pass_wave64_16bit_1dc9d40ab40a731c264d0f5a6dba46b2_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

