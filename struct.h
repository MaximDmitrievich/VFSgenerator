#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <memory>
#include <ctime>

class VFSgenerator
{
private:
    std::vector<std::string> who;
    std::vector<std::string> goes;
    std::vector<std::string> says;
    std::vector<std::string> but;
    std::vector<std::string> something;
    std::vector<std::string> end;

public:
    VFSgenerator();
    ~VFSgenerator();

    std::string Generate();
};

#endif
