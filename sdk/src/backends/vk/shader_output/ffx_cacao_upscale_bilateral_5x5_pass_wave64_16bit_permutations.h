#include "ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953.h"
#include "ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3.h"

typedef union ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_CACAO_OPTION_APPLY_SMART : 1;
    };
    uint32_t index;
} ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_PermutationKey;

typedef struct ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_PermutationInfo {
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
} ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_IndirectionTable[] = {
    1,
    0,
};

static const ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_PermutationInfo g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_size, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_data, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_CBVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_CBVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_CBVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_CBVResourceSets, 3, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureSRVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureSRVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureSRVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureSRVResourceSets, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureUAVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureUAVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureUAVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_SamplerResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_SamplerResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_SamplerResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_202004a3267d1067adff7a959847d953_SamplerResourceSets, 0, 0, 0, 0, 0, },
    { g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_size, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_data, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_CBVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_CBVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_CBVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_CBVResourceSets, 3, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureSRVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureSRVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureSRVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureSRVResourceSets, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureUAVResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureUAVResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureUAVResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_TextureUAVResourceSets, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_SamplerResourceNames, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_SamplerResourceBindings, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_SamplerResourceCounts, g_ffx_cacao_upscale_bilateral_5x5_pass_wave64_16bit_66b8820713330c33f4eee43606440dd3_SamplerResourceSets, 0, 0, 0, 0, 0, },
};

