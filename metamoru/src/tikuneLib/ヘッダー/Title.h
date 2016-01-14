#pragma once
#include "SceneBase.h"
#include "../../Metamol/ResourceManager.h"

//TODO
//�t���[�������ُ�Ȃ̂ł��̃o�O���C�����ꂽ���̂��g������
//����EnterToStart������ɓ_�ł��Ă��Ȃ��̂ŁA 
//��L���C�������撲�����āA�g���[�j���O�̃v���O���������

//�����ڏ���1/17�܂łƂ���

class Title : public SceneBase
{
private:
    
    Texture backGround = ResourcesManager::GetBackGroundGraph(BackGround::TITLE_BG);

    float logoAlfa = 1.0f;
    //TODO:�������p��𒲂ׂĂ���
    Color guideLogo = Color(255,0,0,logoAlfa);

    int flashRimmit = 30;

    //�G�t�F�N�g�p�ϐ�
    int timeCount = 0;
    int tempCount = 0;
    //1�b�𑪂邽��60
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