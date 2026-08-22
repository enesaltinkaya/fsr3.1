#include "ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015.h"
#include "ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4.h"

typedef union ffx_brixelizergi_specular_pre_trace_wave64_PermutationKey {
    struct {
        uint32_t FFX_BRIXELIZER_GI_OPTION_DEPTH_INVERTED : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_SPECULAR : 1;
        uint32_t FFX_BRIXELIZER_GI_OPTION_DISABLE_DENOISER : 1;
    };
    uint32_t index;
} ffx_brixelizergi_specular_pre_trace_wave64_PermutationKey;

typedef struct ffx_brixelizergi_specular_pre_trace_wave64_PermutationInfo {
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
} ffx_brixelizergi_specular_pre_trace_wave64_PermutationInfo;

static const uint32_t g_ffx_brixelizergi_specular_pre_trace_wave64_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_brixelizergi_specular_pre_trace_wave64_PermutationInfo g_ffx_brixelizergi_specular_pre_trace_wave64_PermutationInfo[] = {
    { g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_size, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_data, 2, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_CBVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_CBVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_CBVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_CBVResourceSets, 5, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureSRVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureSRVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureSRVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureSRVResourceSets, 1, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureUAVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureUAVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureUAVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_TextureUAVResourceSets, 3, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_BufferSRVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_BufferSRVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_BufferSRVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_BufferSRVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_SamplerResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_SamplerResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_SamplerResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_e1f9910120c1264763ec537f9869b015_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_size, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_data, 2, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_CBVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_CBVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_CBVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_CBVResourceSets, 5, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureSRVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureSRVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureSRVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureSRVResourceSets, 1, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureUAVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureUAVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureUAVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_TextureUAVResourceSets, 3, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_BufferSRVResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_BufferSRVResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_BufferSRVResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_BufferSRVResourceSets, 0, 0, 0, 0, 0, 1, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_SamplerResourceNames, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_SamplerResourceBindings, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_SamplerResourceCounts, g_ffx_brixelizergi_specular_pre_trace_wave64_8ad623d544bcfc7c3a563d93a711dfc4_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

