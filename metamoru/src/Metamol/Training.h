#pragma once
#include "../tikuneLib/ヘッダー/Common.h"
#include "../tikuneLib/ヘッダー/SceneBase.h"

class Training : public SceneBase
{
private:
    bool canSceneChange = false;

public:

    void UpDate(){};
    void Draw(){};
    bool CanSceneChange()
    {
        return canSceneChange;
    }
};