#pragma once 
#include "../tikuneLib/ヘッダー/Common.h"

const int MAX_ASPECT = 5;
const int MAX_BACK_GROUND = 1;
const int MAX_ICON = 7;
const int MAX_BGM = 1;

class Resources
{
public:
    static Resources& GetInstance()
    {
        static Resources instance;
        return instance;
    }

    void LoadCharaSource(Type ty_,GrowDegree gd_);
    void LoadIconSource();
    void LoadBackGroundSource();


private:
    Resources();
    ~Resources();

};

/**
class Resource
{
private:
    Texture backGround[MAX_BACK_GROUND];
    Texture icon[MAX_ICON];
    Media   bgm[MAX_BGM];

    //卵
    Texture egg;
    //卵２
    Texture forBirth;

    //配列番号昇順に、
    //普通・目閉じ・笑顔・泣き顔・怒り顔
    Texture littleGirl[MAX_ASPECT];
    Texture girl[MAX_ASPECT];
    Texture female[MAX_ASPECT];
  

public:
    Resource(){}

    void TypeByGraphDicision(Type ty_);
    void Setup();

    //欲しい一枚を入手するときに使う
    //numには「enum Aspect」の欲しい表情を入れる。
    Texture GetWantTexture(const int num_, GrowDegree gd_);
    
    Texture GetIcon(const int num_)
    {
        return icon[num_];
    }

    Texture GetBackGround(const int num_)
    {
        return backGround[num_];
    }

    Media GetMedia(const int num_)
    {
        return bgm[num_];
    }
};
/**/