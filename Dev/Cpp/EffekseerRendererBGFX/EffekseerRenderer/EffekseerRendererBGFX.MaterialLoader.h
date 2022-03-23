
#ifndef __EFFEKSEERRENDERER_BGFX_MATERIALLOADER_H__
#define __EFFEKSEERRENDERER_BGFX_MATERIALLOADER_H__

#include "EffekseerRendererBGFX.DeviceObject.h"
#include "EffekseerRendererBGFX.RendererImplemented.h"
#include <memory>

namespace Effekseer
{
class Material;
class CompiledMaterialBinary;
} // namespace Effekseer

namespace EffekseerRendererBGFX
{

class MaterialLoader : public ::Effekseer::MaterialLoader
{
private:
	Effekseer::Backend::GraphicsDeviceRef graphicsDevice_;
	::Effekseer::FileInterfaceRef fileInterface_ = nullptr;

	::Effekseer::MaterialRef LoadAcutually(::Effekseer::MaterialFile& materialFile, ::Effekseer::CompiledMaterialBinary* binary);

public:
	MaterialLoader(Effekseer::Backend::GraphicsDeviceRef graphicsDevice, ::Effekseer::FileInterfaceRef fileInterface);
	virtual ~MaterialLoader();

	::Effekseer::MaterialRef Load(const char16_t* path) override;

	::Effekseer::MaterialRef Load(const void* data, int32_t size, Effekseer::MaterialFileType fileType) override;

	void Unload(::Effekseer::MaterialRef data) override;
};

} // namespace EffekseerRendererBGFX

#endif // __EFFEKSEERRENDERER_GL_MODELLOADER_H__
