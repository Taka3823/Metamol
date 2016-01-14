#pragma once
#include "SceneBase.h"
#include "../../Metamol/SaveData.h"
#include "../../Metamol/ResourceManager.h"

//今回はホーム画面がゲームメインになる
//

//TODO:
//製作の余裕があれば、セリフまで作る
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

