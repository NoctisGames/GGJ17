//
//  Player.h
//  ggj17
//
//  Created by Stephen Gowen on 1/21/17.
//  Copyright © 2017 Noctis Games. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include "PopcornKernel.h"

#define PLAYER_STATE_NONE 0
#define PLAYER_STATE_DASHING 1
#define PLAYER_STATE_STORING_HEAT 2
#define PLAYER_STATE_RELEASING_HEAT 3

class Player : public PopcornKernel
{
    RTTI_DECL;
    
public:
    Player(int index, float x, float y, float width, float height);
    
    virtual void update(float deltaTime);
    
    void storeHeat(float intensity);
    
    void releaseHeat(float intensity);
    
    void dash();
    
    void noAction();
    
    int getIndex() { return m_iIndex; }
    
    void playDashSound();
    
    virtual void playHurtSound();
    
    void playStoreHeatSound();
    
    void playVictorySound();
    
    void playKnockOutSound();
    
private:
    int m_iIndex;
    int m_iState;
    float m_fHeatManipIntensity;
    
    void handleHeatRelease();
};

#endif /* Player_hpp */
