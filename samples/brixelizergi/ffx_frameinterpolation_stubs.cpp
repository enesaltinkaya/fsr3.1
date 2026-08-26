// [clang compat] The Brixelizer-GI FFX static library build does not include
// the FSR 3.1 frame-generation (frame interpolation) component, but the
// Cauldron VK backend (SUPPORT_RUNTIME_SHADER_RECOMPILE=0) references the
// frame-interpolation entry points at static-init time. The Brixelizer GI
// sample never enables frame generation, so link these as stubs that fail
// loudly if anything ever tries to use them.
#include <FidelityFX/host/backends/vk/ffx_vk.h>
#include <cstdio>

extern "C"
{
    FfxErrorCode ffxReplaceSwapchainForFrameinterpolationVK(FfxCommandQueue gameQueue,
        FfxSwapchain& gameSwapChain, const VkSwapchainCreateInfoKHR* swapchainCreateInfo,
        const VkFrameInterpolationInfoFFX* frameInterpolationInfo)
    {
        (void)gameQueue; (void)gameSwapChain; (void)swapchainCreateInfo; (void)frameInterpolationInfo;
        std::fprintf(stderr, "[FFX stub] frame interpolation not available in this build\n");
        return FFX_ERROR_BACKEND_API_ERROR;
    }

    FfxErrorCode ffxRegisterFrameinterpolationUiResourceVK(FfxSwapchain gameSwapChain, FfxResource uiResource, uint32_t flags)
    {
        (void)gameSwapChain; (void)uiResource; (void)flags;
        std::fprintf(stderr, "[FFX stub] frame interpolation not available in this build\n");
        return FFX_ERROR_BACKEND_API_ERROR;
    }

    FfxErrorCode ffxGetFrameinterpolationCommandlistVK(FfxSwapchain gameSwapChain, FfxCommandList& gameCommandlist)
    {
        (void)gameSwapChain; (void)gameCommandlist;
        std::fprintf(stderr, "[FFX stub] frame interpolation not available in this build\n");
        return FFX_ERROR_BACKEND_API_ERROR;
    }

    FfxResource ffxGetFrameinterpolationTextureVK(FfxSwapchain gameSwapChain)
    {
        (void)gameSwapChain;
        std::fprintf(stderr, "[FFX stub] frame interpolation not available in this build\n");
        return FfxResource{};
    }

    FfxErrorCode ffxGetSwapchainReplacementFunctionsVK(FfxDevice device, FfxSwapchainReplacementFunctions* functions)
    {
        (void)device; (void)functions;
        std::fprintf(stderr, "[FFX stub] frame interpolation not available in this build\n");
        return FFX_ERROR_BACKEND_API_ERROR;
    }
}