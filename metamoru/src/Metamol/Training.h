#pragma once
#include "../tikuneLib/�w�b�_�[/Common.h"
#include "../tikuneLib/�w�b�_�[/SceneBase.h"

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