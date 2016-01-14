#pragma once 
#include "../tikuneLib/�w�b�_�[/Common.h"

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

    //��
    Texture egg;
    //���Q
    Texture forBirth;

    //�z��ԍ������ɁA
    //���ʁE�ڕ��E�Ί�E������E�{���
    Texture littleGirl[MAX_ASPECT];
    Texture girl[MAX_ASPECT];
    Texture female[MAX_ASPECT];
  

public:
    Resource(){}

    void TypeByGraphDicision(Type ty_);
    void Setup();

    //�~�����ꖇ����肷��Ƃ��Ɏg��
    //num�ɂ́uenum Aspect�v�̗~�����\�������B
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