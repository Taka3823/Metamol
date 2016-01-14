#pragma once
#include <fstream>
#include "../tikuneLib/ƒwƒbƒ_[/Common.h"

class SaveData
{
private:
    Status     status;
   
public:
    SaveData(){};
    ~SaveData(){};

    void DataSave(Status status_);
    void DataLoad();

    void GrowIdentification(std::string);
    void TypeIdentification(std::string);

    void SetStatus(Status status_)
    {
        status = status_;
    }

    Status GetStatus()
    {
        return status;
    }
};