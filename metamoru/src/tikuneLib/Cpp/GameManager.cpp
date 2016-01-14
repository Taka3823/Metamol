#include "../ƒwƒbƒ_[/GameManager.h"

GameManager::GameManager()
{
    saveData.DataLoad();
    charaData.status = saveData.GetStatus();
    TagDicision();
    Resources::GetInstance().LoadCharaSource(charaData.status.type,charaData.status.grow);
    charaData.graph = ResourcesManager::GetCharaGraph(charaData.status.tag);
}

void GameManager::UpDate()
{
	SceneShift();
    sceneSituation->UpDate();
}

void GameManager::Draw()
{   
    sceneSituation->Draw();
}

void GameManager::SceneShift()
{
	switch (sceneNum)
	{
	case TITLE:
		if (sceneSituation->CanSceneChange())
		{
		   sceneNum = SceneNum::MAIN;
           sceneSituation = std::make_shared<GameMain>();
		}

		break;

	case MAIN:

		if (MakeScreen::Get().isPushKey(GLFW_KEY_ENTER))
		{
			sceneNum = SceneNum::TRAINING;
            sceneSituation = std::make_shared<Training>();
		}
		break;

    case TRAINING:

        if (MakeScreen::Get().isPushKey(GLFW_KEY_ENTER))
        {
            sceneNum = SceneNum::RESULT;
            sceneSituation = std::make_shared<Result>();
        }
        break;

	case RESULT:
		if (MakeScreen::Get().isPushKey(GLFW_KEY_ENTER))
		{
            saveData.DataSave(charaData.status);

			sceneNum = SceneNum::MAIN;
            sceneSituation = std::make_shared<GameMain>();
		}
		break;
		
	case NONE:
		assert(0);
		break;

	default:
		assert(0);
		break;
	}
}

void GameManager::TagDicision()
{
    Type ty_       = charaData.status.type;
    GrowDegree gd_ = charaData.status.grow;

    if (ty_ == Type::EGG_TYPE)
    {
        charaData.status.tag = TypeAndGrowDegree::EGG;
    }
    else if (ty_ == Type::FOR_BIRTH_TYPE)
    {
        charaData.status.tag = TypeAndGrowDegree::FOR_BIRTH;
    }
    else if (gd_ == GrowDegree::LITTLE)
    {
        if (ty_ == Type::SPIRIT)
        {
            charaData.status.tag = TypeAndGrowDegree::LITTLE_SPIRIT;
        }
        else if (ty_ == Type::CALM)
        {
            charaData.status.tag = TypeAndGrowDegree::LITTLE_CALM;
        }
    }
    else if (gd_ == GrowDegree::NORMAL)
    {
        if (ty_ == Type::SPIRIT)
        {
            charaData.status.tag = TypeAndGrowDegree::NORMAL_SPIRIT;
        }
        else if (ty_ == Type::CALM)
        {
            charaData.status.tag = TypeAndGrowDegree::NORMAL_CALM;
        }
    }
    else if (gd_ == GrowDegree::ADULT)
    {
        if (ty_ == Type::SPIRIT)
        {
            charaData.status.tag = TypeAndGrowDegree::ADULT_SPIRIT;
        }
        else if (ty_ == Type::CALM)
        {
            charaData.status.tag = TypeAndGrowDegree::ADULT_CALM;
        }
    }
    else
    {
        assert(0);
    }
}