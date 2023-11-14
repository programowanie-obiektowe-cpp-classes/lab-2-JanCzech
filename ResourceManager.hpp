#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager()
    {
        


        data = new Resource();
    }

    ResourceManager(const ResourceManager& other)
    {
        data  = new Resource();
        *data = *(other.data);
    }

    ResourceManager(ResourceManager&& other)
    {
        data       = (other.data);
        other.data = nullptr;
    }

    ResourceManager& operator=(const ResourceManager& other)
    {
        *data = *other.data;
        return *this;
    }



    ~ResourceManager() 
    {
        delete data; 
    }



    double get() 
    {
        return data->get(); 
    }

private:
    Resource* data;
};
