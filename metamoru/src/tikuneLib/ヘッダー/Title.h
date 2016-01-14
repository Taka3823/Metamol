#pragma once
#include "SceneBase.h"
#include "../../Metamol/ResourceManager.h"

//TODO
//フレーム数が異常なのでそのバグが修正されたものを使うこと
//現状EnterToStartが正常に点滅していないので、 
//上記を修正し次第調整して、トレーニングのプログラムを作る

//完成目処は1/17までとする

class Title : public SceneBase
{
private:
    
    Texture backGround = ResourcesManager::GetBackGroundGraph(BackGround::TITLE_BG);

    float logoAlfa = 1.0f;
    //TODO:正しい英語を調べておく
    Color guideLogo = Color(255,0,0,logoAlfa);

    int flashRimmit = 30;

    //エフェクト用変数
    int timeCount = 0;
    int tempCount = 0;
    //1秒を測るため60
    const int timeRimmit = 60;
    
    bool countSwicth = false;
    bool canSceneChange = false;

public:
	Title(){}

    void UpDate();
	void Draw();

    void ClickEfectTime();
    void LogoFlash();

    bool CanSceneChange()
    {
        return canSceneChange;
    }

};