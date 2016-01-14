
#include "../ヘッダー/Title.h"
#include "../ヘッダー/MakeScreen.h"

void Title::Draw()
{
    DrawBackGround(backGround, graphSize);
    CFont::FontGet().size(60);
    //影
    CFont::FontGet().draw("めたもる",
        Vec2f(-280, 140), Color::black);
    CFont::FontGet().draw("ふぉーぜ！",
        Vec2f(0, 140), Color::black);

    CFont::FontGet().draw("めたもる",
        Vec2f(-285, 140), Color::white);
    CFont::FontGet().draw("ふぉーぜ！",
        Vec2f(-5, 140), Color::white);

    CFont::FontGet().size(50);
    CFont::FontGet().draw("Enter to Start!!",
        Vec2f(-220, 0),
        guideLogo);
}

void Title::UpDate()
{
    ClickEfectTime();

    if (!canSceneChange)
    {
        LogoFlash();
    }
}

void Title::ClickEfectTime()
{
    if (MakeScreen::Get().isPushKey(GLFW_KEY_ENTER))
    {
        countSwicth = true;
    }

    if (countSwicth)
    {
        tempCount += 1;

        if (tempCount >= timeRimmit)
        {
            timeCount += 1;
            tempCount = 0;
        }
    }

    if (timeCount >= 2)
    {
        logoAlfa = 1.0f;
        canSceneChange = true;
    }
}

void Title::LogoFlash()
{
    if (logoAlfa >= 1.0f)
    {
        flashRimmit *= -1;
    }
    else if (logoAlfa <= 0.0f)
    {
        flashRimmit *=  -1;
    }

    logoAlfa += 1.0f / flashRimmit;

}