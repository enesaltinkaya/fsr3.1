// This file is part of the FidelityFX SDK.
//
// Copyright (C) 2024 Advanced Micro Devices, Inc.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include "rendermoduleregistry.h"
#include "render/rendermodule.h"

// All available render modules listed here so we can register their types for creation if needed

// Cauldron render modules
#include "gbuffer/gbufferrendermodule.h"
#if !defined(CAULDRON_NO_GPU_PARTICLE)  // FFX fork patch (brixgi cross-build): module needs the parallelsort component
#include "gpuparticle/gpuparticlerendermodule.h"
#endif
#include "lighting/lightingrendermodule.h"
#include "rastershadow/rastershadowrendermodule.h"
#include "skydome/skydomerendermodule.h"
#include "taa/taarendermodule.h"
#include "translucency/translucencyrendermodule.h"
#include "animatedtextures/animatedtexturesrendermodule.h"

using namespace cauldron;
namespace rendermodule
{
    // This will register all common render modules. When creating new render modules that are commonly used,
    // please add their registration here
    void RegisterAvailableRenderModules()
    {
        RenderModuleFactory::RegisterModule<SkyDomeRenderModule>("SkyDomeRenderModule");
        RenderModuleFactory::RegisterModule<GBufferRenderModule>("GBufferRenderModule");
#if !defined(CAULDRON_NO_GPU_PARTICLE)
        RenderModuleFactory::RegisterModule<GPUParticleRenderModule>("GPUParticleRenderModule");
#endif
        RenderModuleFactory::RegisterModule<LightingRenderModule>("LightingRenderModule");
        RenderModuleFactory::RegisterModule<RasterShadowRenderModule>("RasterShadowRenderModule");
        RenderModuleFactory::RegisterModule<TAARenderModule>("TAARenderModule");
        RenderModuleFactory::RegisterModule<TranslucencyRenderModule>("TranslucencyRenderModule");
        RenderModuleFactory::RegisterModule<AnimatedTexturesRenderModule>("AnimatedTexturesRenderModule");
    }

} // namespace rendermodule

