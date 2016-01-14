#pragma once

//*************************************//
//汎用的なenumや、関数を宣言しておくヘッダー //
//************************************//

#include "../../lib/framework.hpp"

//１秒のフレーム数
const int ONE_SECOND = 60;

//Windowのサイズ
//プロジェクトによって変更可
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

//四角と四角の当たり判定
bool RectToRect(Vec2f myPos_,  Vec2f otherPos_,
                Vec2f mySize_, Vec2f otherSize_);

//CenterDrawに合わせた当たり判定
//※実際に使うかは不明

//円と円の当たり判定
bool CircleToCircle(Vec2f my_pos_,  Vec2f other_pos_,
                    float my_size_, float other_size_);
//四角と点の当たり判定
bool RectToPoint(Vec2f myPos_, Vec2f otherPos_, Vec2f otherSize_);

//描画画面の描画位置を中心にする
//※画像の切り出し位置は(0,0)であること。
//異なる場合はケースバイケースでその都度自作すること。
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
//以下　めたもるふぉーぜ用
//*************************

/**/
//進化段階
enum GrowDegree
{
    EGG_GD = 0,
    FOR_BIRTH_GD,
    LITTLE,
    NORMAL,
    ADULT,

    NONE_GROW = -1
};

//キャラのタイプ
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



//キャラの表情
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
    //知能（知性）
    int intelli;
    //元気
    int energy;
    //なつき度
    int friendly;
    //疲労度
    int fatigue;

    TypeAndGrowDegree tag;
    
    //進化段階
    GrowDegree grow;
    //キャラのタイプ
    Type       type;
    
    //キャラの表情
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

//現状は背景が一枚なので一つしか準備していない
enum BackGround
{
    TITLE_BG = 1


};

enum Sound
{
    BGM = 0

};

void DrawBackGround(Texture graph_, Vec2f graphSize_);