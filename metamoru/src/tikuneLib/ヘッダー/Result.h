#pragma once
#include "SceneBase.h"

class Result : public SceneBase
{
private:


    bool canSceneChange = false;

public:
	Result()
    {
        CFont::FontGet().size(100);
    }

	void UpDate();
	void Draw();

    bool CanSceneChange()
    {
        return canSceneChange;
    }
};