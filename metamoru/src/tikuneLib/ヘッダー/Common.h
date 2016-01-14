#pragma once

//*************************************//
//�ėp�I��enum��A�֐���錾���Ă����w�b�_�[ //
//************************************//

#include "../../lib/framework.hpp"

//�P�b�̃t���[����
const int ONE_SECOND = 60;

//Window�̃T�C�Y
//�v���W�F�N�g�ɂ���ĕύX��
enum Window
{
    WIDTH = 600,
    HEIGHT = 900
};

enum SceneNum
{
    TITLE = 0,
    MAIN,
    TRAINING,
    RESULT,

    NONE = -1
};

//�l�p�Ǝl�p�̓����蔻��
bool RectToRect(Vec2f myPos_,  Vec2f otherPos_,
                Vec2f mySize_, Vec2f otherSize_);

//CenterDraw�ɍ��킹�������蔻��
//�����ۂɎg�����͕s��

//�~�Ɖ~�̓����蔻��
bool CircleToCircle(Vec2f my_pos_,  Vec2f other_pos_,
                    float my_size_, float other_size_);
//�l�p�Ɠ_�̓����蔻��
bool RectToPoint(Vec2f myPos_, Vec2f otherPos_, Vec2f otherSize_);

//�`���ʂ̕`��ʒu�𒆐S�ɂ���
//���摜�̐؂�o���ʒu��(0,0)�ł��邱�ƁB
//�قȂ�ꍇ�̓P�[�X�o�C�P�[�X�ł��̓s�x���삷�邱�ƁB
void CenterDraw(Vec2f drawPos_,   Vec2f drawSize_,
                Vec2f graphSize_, Texture graph_);

class CFont
{
private:
    CFont(){}

public:
    static Font& FontGet()
    {
        static Font font("res/uzura.ttf");
        return font;
    }
};

//*************************
//�ȉ��@�߂�����ӂ��[���p
//*************************

/**/
//�i���i�K
enum GrowDegree
{
    EGG_GD = 0,
    FOR_BIRTH_GD,
    LITTLE,
    NORMAL,
    ADULT,

    NONE_GROW = -1
};

//�L�����̃^�C�v
enum Type
{
    EGG_TYPE = 0,
    FOR_BIRTH_TYPE,
    SPIRIT,
    CALM,

    NONE_TYPE = -1
};
/**/

enum TypeAndGrowDegree
{
    EGG = 0,
    FOR_BIRTH,

    LITTLE_SPIRIT,
    LITTLE_SPIRIT_CLOSE,
    LITTLE_SPIRIT_SMILE,
    LITTLE_SPIRIT_CRY,
    LITTLE_SPIRIT_ANGRY,

    NORMAL_SPIRIT,
    NORMAL_SPIRIT_CLOSE,
    NORMAL_SPIRIT_SMILE, 
    NORMAL_SPIRIT_CRY,
    NORMAL_SPIRIT_ANGRY,
    
    ADULT_SPIRIT,
    ADULT_SPIRIT_CLOSE,
    ADULT_SPIRIT_SMILE,
    ADULT_SPIRIT_CRY,
    ADULT_SPIRIT_ANGRY,

    LITTLE_CALM,
    LITTLE_CALM_CLOSE,
    LITTLE_CALM_SMILE,
    LITTLE_CALM_CRY,
    LITTLE_CALM_ANGRY,
    
    NORMAL_CALM,
    NORMAL_CALM_CLOSE,
    NORMAL_CALM_SMILE,
    NORMAL_CALM_CRY,
    NORMAL_CALM_ANGRY,

    ADULT_CALM,
    ADULT_CALM_CLOSE,
    ADULT_CALM_SMILE,
    ADULT_CALM_CRY,
    ADULT_CALM_ANGRY,

    NONE_TAG = -1
};



//�L�����̕\��
enum Aspect
{
    NORMAL_AS = 0,
    CLOSE,
    SMILE,
    CRY,
    ANGRY
};


struct Status
{
    //�m�\�i�m���j
    int intelli;
    //���C
    int energy;
    //�Ȃ��x
    int friendly;
    //��J�x
    int fatigue;

    TypeAndGrowDegree tag;
    
    //�i���i�K
    GrowDegree grow;
    //�L�����̃^�C�v
    Type       type;
    
    //�L�����̕\��
    Aspect     aspect;
};

enum Icon
{
    JOY = 0,
    LEAN,
    REST,
    LOVE,

    NONE_I,
    YELLOW,
    G
};

//����͔w�i���ꖇ�Ȃ̂ň�����������Ă��Ȃ�
enum BackGround
{
    TITLE_BG = 1


};

enum Sound
{
    BGM = 0

};

void DrawBackGround(Texture graph_, Vec2f graphSize_);