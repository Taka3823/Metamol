#include "SaveData.h"

void SaveData::DataLoad()
{
    //TODO:ステータスのセーブデータを一つにまとめる
    std::ifstream intelliFile("res/SaveData/Intelli.txt");
    std::ifstream energyFile("res/SaveData/Energy.txt");
    std::ifstream friendryFile("res/SaveData/Friendry.txt");
    std::ifstream fatigueFile("res/SaveData/Fatigue.txt");    
    std::ifstream growFile("res/SaveData/Grow.txt");
    std::ifstream typeFile("res/SaveData/Type.txt");

    assert(intelliFile);
    assert(energyFile);
    assert(friendryFile);
    assert(growFile);
    assert(typeFile);

    std::string str;
    char       readChar[2];

    intelliFile  >> status.intelli;
    energyFile   >> status.energy;
    friendryFile >> status.friendly;
    fatigueFile  >> status.fatigue;
 
    growFile >> readChar[0] >> readChar[1] >> str;
    if (readChar[0] == 'G' &&
        readChar[1] == ':')
    {
        GrowIdentification(str);
    }

    typeFile >> readChar[0] >> readChar[1] >> str;
    if (readChar[0] == 'T' &&
        readChar[1] == ':')
    {
        TypeIdentification(str);
    }

}

void SaveData::GrowIdentification(std::string data_)
{
    if (data_ == "0")
    {
        status.grow = GrowDegree::EGG_GD;
    }
    else if (data_ == "1")
    {
        status.grow = GrowDegree::FOR_BIRTH_GD;
    }
    else if (data_ == "2")
    {
        status.grow = GrowDegree::LITTLE;
    }
    else if (data_ == "3")
    {
        status.grow = GrowDegree::NORMAL;
    }
    else if (data_ == "4")
    {
        status.grow = GrowDegree::ADULT;
    }
    else
    {
        assert(0);
    }
}

void SaveData::TypeIdentification(std::string data_)
{
    if (data_ == "0")
    {
        status.type = Type::EGG_TYPE;
    }
    else if (data_ == "1")
    {
        status.type = Type::SPIRIT;
    }
    else if (data_ == "2")
    {
        status.type = Type::CALM;
    }
    else
    {
        assert(0);
    }
}

void SaveData::DataSave(Status status_)
{
    //TODO:こちらも同じく、セーブデータを一つにする
    std::ofstream intelliFile("res/SaveData/SIntelli.txt");
    std::ofstream energyFile("res/SaveData/Energy.txt");
    std::ofstream friendryFile("res/SaveData/Friendry.txt");
    std::ofstream fatigueFile("res/SaveData/Fatigue.txt");
    std::ofstream growFile("res/SaveData/Grow.txt");
    std::ofstream typeFile("res/SaveData/Type.txt");

    assert(intelliFile);
    assert(energyFile);
    assert(friendryFile);
    assert(fatigueFile);
    assert(growFile);
    assert(typeFile);

    intelliFile << status_.intelli;
    energyFile  << status_.energy;
    friendryFile << status_.friendly;
    fatigueFile << status_.fatigue;

    growFile << "G: " << status_.grow;
    typeFile << "T: " << status_.type;
}