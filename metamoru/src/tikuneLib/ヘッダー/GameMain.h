#pragma once
#include "SceneBase.h"
#include "../../Metamol/SaveData.h"
#include "../../Metamol/ResourceManager.h"

//����̓z�[����ʂ��Q�[�����C���ɂȂ�
//

//TODO:
//����̗]�T������΁A�Z���t�܂ō��
//
class GameMain : public SceneBase
{
private:
    Texture icon = ResourcesManager::GetIconGraph(Icon::G);
    Texture backGround = ResourcesManager::GetBackGroundGraph(BackGround::TITLE_BG);

    bool    isPlay = false;
    bool canSceneChange = false;
   
public:
    GameMain();

    void UpDate();
    void Draw();

    // void LoopingPlayMedia();

    void SetIcon(Texture icon_){ icon = icon_; }

    bool CanSceneChange()
    {
        return canSceneChange;
    }
};

