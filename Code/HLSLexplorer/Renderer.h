#pragma once

#include "IRenderer.h"

class CRenderer : public IRenderer
{
public:
	CRenderer() {}
	virtual ~CRenderer() { }

	virtual void Update();

	// constant buffer
	struct SConstantBuffer
	{
		SConstantBuffer()
		{
			elapsedTime = 0.0f;
			numFrames = 0;
		}

		float elapsedTime;
		unsigned int numFrames;
		float pad[2];

		float viewportX;
		float viewportY;
		float viewportInvX;
		float viewportInvY;
	};

protected:
	SConstantBuffer m_PSConstantBufferData;

};