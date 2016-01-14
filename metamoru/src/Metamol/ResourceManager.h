#pragma once
#include <map>
#include "../tikuneLib/�w�b�_�[/Common.h"
#include "Resource.h"

class ResourcesManager
{
private:
    static std::map<TypeAndGrowDegree, Texture> textureSourceList;
    static std::map<Icon, Texture> iconSourceList;
    static std::map<BackGround, Texture> backGroundList;
    
    static std::map<Sound, Media*> soundList; 
    static std::vector <Media*> playSoundSource;


public:
    static void AllDerete();

    //�摜��ǉ�
    static void AddTextureSource(const TypeAndGrowDegree tag_, Texture graph_);

    static void AddIconSource(const Icon icon_,Texture graph_);
    static void AddBackGroundSource(const BackGround bg_, Texture graph_);

    //������ǉ�
    static void AddSound(const Sound se_,Media* media_);

    //�摜�̍폜
    static void DeleteTextureSource(const TypeAndGrowDegree tag_);

    static void DeleteIconSource(const Icon icon_);
    static void DeleteBackGroundSource(const BackGround bg_);

    //�����̍폜
    static void DeleteMedia(const Sound se_);

    //�摜�̎g�p
    static Texture GetCharaGraph(const TypeAndGrowDegree tag_);

    static Texture GetIconGraph(const Icon icon_);
    static Texture GetBackGroundGraph(const BackGround bg_);

    //�����̍Đ�
    void Play(const Sound se_,const bool isLoop = false);
    //�����̒�~
    void Stop(Media* media_);

    void UpDate();

};

