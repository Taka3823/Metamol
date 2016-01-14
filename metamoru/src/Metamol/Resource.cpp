#include "Resource.h"
#include "ResourceManager.h"

Resources::Resources()
{}

Resources::~Resources()
{}

void Resources::LoadCharaSource(Type ty_,GrowDegree gd_)
{
    switch (ty_)
    {
        case EGG_TYPE:

            ResourcesManager::AddTextureSource(TypeAndGrowDegree::EGG, Texture("res/Character/Egg/CharaNone.png"));

            break;

        case FOR_BIRTH_TYPE:

            ResourcesManager::AddTextureSource(TypeAndGrowDegree::FOR_BIRTH, Texture("res/Character/Egg/CharaNone_2nd.png"));

            break;

        case SPIRIT:

            if (gd_ == GrowDegree::LITTLE)
            {
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_SPIRIT,       Texture("res/Character/Spirit/SpiritLittle/HotLittle1.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_SPIRIT_CLOSE, Texture("res/Character/Spirit/SpiritLittle/HotLittle2.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_SPIRIT_SMILE, Texture("res/Character/Spirit/SpiritLittle/HotLittle3.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_SPIRIT_CRY,   Texture("res/Character/Spirit/SpiritLittle/HotLittle4.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_SPIRIT_ANGRY, Texture("res/Character/Spirit/SpiritLittle/HotLittle5.png"));
            }
            /**
            else if (gd_ == GrowDegree::NORMAL)
            {
                //ñ{óàÇÕSPIRITÅQNORMALÇ‡ì¸ÇÈÇ™ÅAâÊëúÇ™ë∂ç›ÇµÇ»Ç¢ÇΩÇﬂÇ»Çµ
                //ResourcesManager::AddTextureSource(TypeAndGrowDegree::NORMAL_SPIRIT, new Texture
            }
            /**/
            else if (gd_ == GrowDegree::ADULT)
            {
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_SPIRIT,       Texture("res/Character/Spirit/SpiritFemale/HotAdult1.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_SPIRIT_CLOSE, Texture("res/Character/Spirit/SpiritFemale/HotAdult2.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_SPIRIT_SMILE, Texture("res/Character/Spirit/SpiritFemale/HotAdult3.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_SPIRIT_CRY,   Texture("res/Character/Spirit/SpiritFemale/HotAdult4.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_SPIRIT_ANGRY, Texture("res/Character/Spirit/SpiritFemale/HotAdult5.png"));
            }

            break;

        case CALM:

            if (gd_ == GrowDegree::LITTLE)
            {
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_CALM,       Texture("res/Character/Cool/CoolLittle/CoolLittle1.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_CALM_CLOSE, Texture("res/Character/Cool/CoolLittle/CoolLittle2.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_CALM_SMILE, Texture("res/Character/Cool/CoolLittle/CoolLittle3.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_CALM_CRY,   Texture("res/Character/Cool/CoolLittle/CoolLittle4.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::LITTLE_CALM_ANGRY, Texture("res/Character/Cool/CoolLittle/CoolLittle5.png"));

            }
            else if (gd_ == GrowDegree::NORMAL)
            {
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::NORMAL_CALM,       Texture("res/Character/Cool/CoolGirl/CoolNormal1.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::NORMAL_CALM_CLOSE, Texture("res/Character/Cool/CoolGirl/CoolNormal2.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::NORMAL_CALM_SMILE, Texture("res/Character/Cool/CoolGirl/CoolNormal3.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::NORMAL_CALM_CRY,   Texture("res/Character/Cool/CoolGirl/CoolNormal4.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::NORMAL_CALM_ANGRY, Texture("res/Character/Cool/CoolGirl/CoolNormal5.png"));
            }
            else if (gd_ == GrowDegree::ADULT)
            {
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_CALM,       Texture("res/Character/Cool/CoolFemale/CoolAdult1.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_CALM_CLOSE, Texture("res/Character/Cool/CoolFemale/CoolAdult2.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_CALM_SMILE, Texture("res/Character/Cool/CoolFemale/CoolAdult3.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_CALM_CRY,   Texture("res/Character/Cool/CoolFemale/CoolAdult4.png"));
                ResourcesManager::AddTextureSource(TypeAndGrowDegree::ADULT_CALM_ANGRY, Texture("res/Character/Cool/CoolFemale/CoolAdult5.png"));
            }

            break;

        case NONE_TYPE:
            assert(0);
            break;

        default:
            assert(0);
            break;
    }
}

void Resources::LoadIconSource()
{
    ResourcesManager::AddIconSource(Icon::JOY,  Texture("res/Icon/Icon_1.png"));
    ResourcesManager::AddIconSource(Icon::LEAN, Texture("res/Icon/Icon_2.png"));
    ResourcesManager::AddIconSource(Icon::REST, Texture("res/Icon/Icon_3.png"));
    ResourcesManager::AddIconSource(Icon::LOVE, Texture("res/Icon/Icon_4.png"));
    
    //ñ≥éö
    ResourcesManager::AddIconSource(Icon::NONE_I, Texture("res/Icon/Icon_5.png"));
    ResourcesManager::AddIconSource(Icon::YELLOW, Texture("res/Icon/Icon_6.png"));
    
    //G
    ResourcesManager::AddIconSource(Icon::G, Texture("res/Icon/Icon_7.png"));
}

void Resources::LoadBackGroundSource()
{
    ResourcesManager::AddBackGroundSource(BackGround::TITLE_BG, Texture("res/BackGround/TitleBg.png"));
}

/*
void Resource::Setup()
{
    backGround[0] = Texture("res/BackGround/TitleBg.png");
    bgm[0] = Media("res/Sound/BGM.wav");

    int i;
    for (i = 0; i < MAX_ICON;++i)
    {
        icon[i] = Texture("res/Icon/Icon_" + std::to_string(i) + ".png");
    }
}


Texture Resource::GetWantTexture(const int num_, GrowDegree gd_)
{
    if (gd_ == GrowDegree::EGG)
    {
        return egg;
    }
    else if (gd_ == GrowDegree::FOR_BIRTH)
    {
        return forBirth;
    }
    else if (gd_ == GrowDegree::LITTLE)
    {
        return littleGirl[num_];
    }
    else if (gd_ == GrowDegree::NORMAL)
    {
        return girl[num_];
    }
    else if (gd_ == GrowDegree::ADULT)
    {
        return female[num_];
    }
    
        assert(0);
        return egg;
}

/**/