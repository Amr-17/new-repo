#include <iostream>
#include <stdlib.h>
#include <cstdlib>

int main(int argc, char * argv[], char * envp[]) 

{

int setenv(const char *name, const char *value, int overwrite);
    for (char **env = envp; *env != 0; env++)
       
        std::cout << *env << std::endl;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Value: " << getenv("HOME") << std::endl;

    return 0;
}
