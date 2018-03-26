//
// Created by 小春子 on 2018/3/26.
//

#include <iostream>

class CServiceBase
{
public:
    virtual void doSomething()
    {
        std::cout << "I am BaseService " << std::endl;
    }
};

class ManagerService : public CServiceBase
{
public:
    virtual void doSomething()
    {
        std::cout << "I am ManagerService " << std::endl;
    }
};

class ServiceManager
{
public:
    template <typename T>
    void registerService(int i, std::string name)
    {
        T* tmp = new T();
        servicemap_.insert(std::pair<std::string, CServiceBase*>(name, tmp));
    }

private:
    std::map<int, std::string> servicemap_;
};

int main()
{

    return 0;
}