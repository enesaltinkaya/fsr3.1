#include "ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04.h"
#include "ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf.h"

typedef union ffx_classifier_reflections_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_CLASSIFIER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_CLASSIFIER_OPTION_CLASSIFIER_MODE : 1;
    };
    uint32_t index;
} ffx_classifier_reflections_pass_16bit_PermutationKey;

typedef struct ffx_classifier_reflections_pass_16bit_PermutationInfo {
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
} ffx_classifier_reflections_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_classifier_reflections_pass_16bit_IndirectionTable[] = {
    0,
    1,
    0,
    1,
};

static const ffx_classifier_reflections_pass_16bit_PermutationInfo g_ffx_classifier_reflections_pass_16bit_PermutationInfo[] = {
    { g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_size, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_data, 1, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_CBVResourceNames, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_CBVResourceBindings, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_CBVResourceCounts, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_CBVResourceSets, 7, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureSRVResourceSets, 3, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_TextureUAVResourceSets, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_BufferUAVResourceSets, 2, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_SamplerResourceNames, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_SamplerResourceBindings, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_SamplerResourceCounts, g_ffx_classifier_reflections_pass_16bit_49b9377c7098d2cedd50a9d8b5d3bb04_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_size, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_data, 1, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_CBVResourceNames, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_CBVResourceBindings, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_CBVResourceCounts, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_CBVResourceSets, 7, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureSRVResourceSets, 3, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_TextureUAVResourceSets, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_BufferUAVResourceSets, 2, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_SamplerResourceNames, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_SamplerResourceBindings, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_SamplerResourceCounts, g_ffx_classifier_reflections_pass_16bit_68b61d5103afe52f26dce0c8fc327fbf_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

