//
//  Direct3DSinWaveTextureGpuProgramWrapper.h
//  ggj17
//
//  Created by Stephen Gowen on 1/21/17.
//  Copyright © 2017 Noctis Games. All rights reserved.
//

#ifndef __noctisgames__Direct3DSinWaveTextureGpuProgramWrapper__
#define __noctisgames__Direct3DSinWaveTextureGpuProgramWrapper__

#include "SinWaveTextureGpuProgramWrapper.h"

#include "pch.h"

class Direct3DSinWaveTextureGpuProgramWrapper : public SinWaveTextureGpuProgramWrapper
{
public:
	Direct3DSinWaveTextureGpuProgramWrapper();

	virtual void bind();

	virtual void unbind();

	virtual void cleanUp();

private:
	Microsoft::WRL::ComPtr<ID3D11Buffer> m_offsetConstantBuffer;
	Microsoft::WRL::ComPtr<ID3D11VertexShader> m_vertexShader;
	Microsoft::WRL::ComPtr<ID3D11InputLayout> m_inputLayout;
	Microsoft::WRL::ComPtr<ID3D11PixelShader> m_pixelShader;

	void createConstantBuffer();
};

#endif /* defined(__noctisgames__Direct3DSinWaveTextureGpuProgramWrapper__) */
