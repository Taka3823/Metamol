#pragma once
#include "Common.h"
#include "../../Metamol/ResourceManager.h"

class SceneBase
{
protected:
    Vec2f graphSize = Vec2f(2000, 2048);


public:

    SceneBase(){}
    virtual ~SceneBase(){}

    virtual void UpDate(){};
    virtual void Draw(){};
    virtual bool CanSceneChange()
    {
        bool   canSceneChange = false;
        return canSceneChange;
    };
};

