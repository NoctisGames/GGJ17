//
//  MainRenderer.h
//  ggj17
//
//  Created by Stephen Gowen on 1/15/17.
//  Copyright (c) 2017 Noctis Games. All rights reserved.
//

#ifndef __ggj17__MainRenderer__
#define __ggj17__MainRenderer__

#include "Renderer.h"

struct TextureWrapper;

class MainRenderer : public Renderer
{
public:
    MainRenderer();
    
    virtual ~MainRenderer();
    
    void tempDraw(float stateTime);
    
private:
    TextureWrapper* m_demo;
};

#endif /* defined(__ggj17__MainRenderer__) */