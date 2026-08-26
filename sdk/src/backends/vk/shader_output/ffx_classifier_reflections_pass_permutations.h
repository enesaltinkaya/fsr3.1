#include "ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164.h"
#include "ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c.h"

typedef union ffx_classifier_reflections_pass_PermutationKey {
    struct {
        uint32_t FFX_CLASSIFIER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_CLASSIFIER_OPTION_CLASSIFIER_MODE : 1;
    };
    uint32_t index;
} ffx_classifier_reflections_pass_PermutationKey;

typedef struct ffx_classifier_reflections_pass_PermutationInfo {
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
} ffx_classifier_reflections_pass_PermutationInfo;

static const uint32_t g_ffx_classifier_reflections_pass_IndirectionTable[] = {
    0,
    1,
    0,
    1,
};

static const ffx_classifier_reflections_pass_PermutationInfo g_ffx_classifier_reflections_pass_PermutationInfo[] = {
    { g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_size, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_data, 1, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_CBVResourceNames, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_CBVResourceBindings, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_CBVResourceCounts, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_CBVResourceSets, 7, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureSRVResourceSets, 3, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_TextureUAVResourceSets, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_BufferUAVResourceSets, 2, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_SamplerResourceNames, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_SamplerResourceBindings, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_SamplerResourceCounts, g_ffx_classifier_reflections_pass_9365cab2b5ca5830f6b14ce636f4b164_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_size, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_data, 1, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_CBVResourceNames, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_CBVResourceBindings, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_CBVResourceCounts, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_CBVResourceSets, 7, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureSRVResourceNames, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureSRVResourceBindings, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureSRVResourceCounts, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureSRVResourceSets, 3, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureUAVResourceNames, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureUAVResourceBindings, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureUAVResourceCounts, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_TextureUAVResourceSets, 0, 0, 0, 0, 0, 4, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_BufferUAVResourceNames, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_BufferUAVResourceBindings, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_BufferUAVResourceCounts, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_BufferUAVResourceSets, 2, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_SamplerResourceNames, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_SamplerResourceBindings, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_SamplerResourceCounts, g_ffx_classifier_reflections_pass_0d2b5ee7ddb4a8bca94470dbe88b587c_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

