#include "../ÉwÉbÉ_Å[/GameMain.h"

GameMain::GameMain()
{
    CFont::FontGet().size(100);

}

void GameMain::UpDate()
{
    //LoopingPlayMedia();
  
}

void GameMain::Draw()
{
    DrawBackGround(backGround,graphSize);
    drawTextureBox(
        450, 800,
        512, 512,
        0, 0,
        512, 512,
        icon);

    CFont::FontGet().size(150);
    CFont::FontGet().draw("àÁÇƒÇÈ",Vec2f(450, 1000), Color::black);
}
/**

void GameMain::LoopingPlayMedia()
{
    if (!isPlay)
    {
        bgm.play();
        bgm.looping(true);
        isPlay = true;
    }
}
/**/