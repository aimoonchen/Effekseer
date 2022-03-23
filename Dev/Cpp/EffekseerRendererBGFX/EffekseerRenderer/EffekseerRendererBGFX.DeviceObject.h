
#ifndef __EFFEKSEERRENDERER_BGFX_DEVICEOBJECT_H__
#define __EFFEKSEERRENDERER_BGFX_DEVICEOBJECT_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerRendererBGFX.RendererImplemented.h"

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
namespace EffekseerRendererBGFX
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------

class DeviceObject
{
private:
	RendererImplemented* m_renderer;

	//! whether does this instance inc and dec the reference count of renderer
	bool hasRefCount_ = false;

public:
	DeviceObject(RendererImplemented* renderer, bool hasRefCount);
	virtual ~DeviceObject();

public:
	virtual void OnLostDevice() = 0;
	virtual void OnResetDevice() = 0;
	RendererImplemented* GetRenderer() const;
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
} // namespace EffekseerRendererBGFX
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif // __EFFEKSEERRENDERER_BGFX_DEVICEOBJECT_H__