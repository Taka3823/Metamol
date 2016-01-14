
#include "tikuneLib/ヘッダー/GameManager.h"

int main()
{
	MakeScreen::Get();

    Resources::GetInstance().LoadBackGroundSource();
    Resources::GetInstance().LoadIconSource();

    GameManager manager;

    //確認


	while (MakeScreen::Get().isOpen())
	{
		manager.UpDate();

		MakeScreen::Get().begin();

		manager.Draw();

		MakeScreen::Get().end();
	}
}
