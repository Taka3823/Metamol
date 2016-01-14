#include "ResourceManager.h"

std::map<TypeAndGrowDegree, Texture> ResourcesManager::textureSourceList;
std::map<Icon, Texture> ResourcesManager::iconSourceList;
std::map<BackGround, Texture> ResourcesManager::backGroundList;

std::map<Sound, Media*> ResourcesManager::soundList;
std::vector<Media*> ResourcesManager::playSoundSource;

void ResourcesManager::AllDerete()
{
    /**
    for(auto& res : textureSourceList)
    {
        delete res.second;
    }
   

    for (auto& iconRes : iconSourceList)
    {
        delete iconRes.second;
    }

    for (auto& bgRes : backGroundList)
    {
        delete bgRes.second;
    }

    for (auto& se : soundList)
    {
        delete se.second;
    }

    textureSourceList.clear();
    iconSourceList.clear();
    backGroundList.clear();
    soundList.clear();
    /**/
}

void ResourcesManager::AddTextureSource(const TypeAndGrowDegree tag_,Texture graph_)
{

    textureSourceList.insert(std::make_pair(tag_,graph_));
}

void ResourcesManager::AddIconSource(const Icon icon_, Texture graph_)
{
    iconSourceList.insert(std::make_pair(icon_,graph_));
}

void ResourcesManager::AddBackGroundSource(const BackGround bg_, Texture graph_)
{
    /**
    if (graph_ == nullptr)
    {
        return;
    }
    /**/
    backGroundList.insert(std::make_pair(bg_, graph_));
}

void ResourcesManager::AddSound(const Sound se_, Media* media_)
{
    if (media_ == nullptr)
    {
        return;
    }
    soundList.insert(std::make_pair(se_,media_));
}

void ResourcesManager::DeleteTextureSource(const TypeAndGrowDegree tag_)
{
    textureSourceList.erase(tag_);
}

void ResourcesManager::DeleteIconSource(const Icon icon_)
{
    iconSourceList.erase(icon_);
}

void ResourcesManager::DeleteBackGroundSource(const BackGround bg_)
{
    backGroundList.erase(bg_);
}

void ResourcesManager::DeleteMedia(const Sound se_)
{
    soundList.erase(se_);
}

Texture ResourcesManager::GetCharaGraph(const TypeAndGrowDegree tag_)
{
    auto item  = textureSourceList.find(tag_);
    auto graph = item->second;

    return graph;
}

Texture ResourcesManager::GetIconGraph(const Icon icon_)
{
    auto item = iconSourceList.find(icon_);
    auto graph = item->second;

    return graph;
}

Texture ResourcesManager::GetBackGroundGraph(const BackGround bg_)
{
    auto item = backGroundList.find(bg_);
    auto graph = item->second;


    return graph;
}

void ResourcesManager::Play(const Sound se_, const bool isLoop_)
{
    auto item  = soundList.find(se_);
    auto audio = item->second;
    if (audio == nullptr)
    {
        return;
    }

    audio->looping(isLoop_);
    audio->play();
    playSoundSource.push_back(audio);
}

void ResourcesManager::Stop(Media* media_)
{
    if (media_ == nullptr)
    {
        return;
    }
    
    media_->stop();

    auto deleteItem = std::remove(playSoundSource.begin(),playSoundSource.end(),media_);
    if (deleteItem._Ptr == nullptr)
    {
        return;
    }

    playSoundSource.erase(deleteItem,playSoundSource.end());
}

void ResourcesManager::UpDate()
{
    for (auto& se : playSoundSource)
    {
        if (!se->isPlaying())
        {
            Stop(se);
        }
    }
}