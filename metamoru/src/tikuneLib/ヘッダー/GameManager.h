
#pragma once 
#include <memory>
#include "TikuneInclueder.h"
#include "../../Metamol/MetamolIncluder.h"

class GameManager : public SceneBase
{
private:
    std::shared_ptr <SceneBase> sceneSituation = std::make_shared<Title>();
    
    SceneNum sceneNum = SceneNum::TITLE;

    struct CharacterData
    {
        Status  status;
        Texture graph;
    };

    CharacterData charaData;
    SaveData saveData;

    Texture backGround = ResourcesManager::GetBackGroundGraph(BackGround::TITLE_BG);
    Vec2f graphSize = Vec2f(2000, 2048);

    //bool canSceneChange = false;

public:

    GameManager();

    void UpDate();

    void Draw();

    void SceneShift();

    void TagDicision();

    //bool CanSceneChange(){};
};