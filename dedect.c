#include <stdio.h>
#include <stdlib.h>
int clearscreen(void) {
    system("clear");
}
int main()
{
    #ifdef _WIN32
        #ifdef _WIN64
            printf("gui hackers not supporting the windows");
        #else
            printf("gui hacks not supporting the windows");
        #endif
    #else
        printf("gui hacks not supporting the windows");
        return 0;
    #endif
    //apple platforms
    #if __APPLE__
        #include "TargetConditionals.h"
        #if TARGET_OS_IPHONE && TARGET_IPHONE_SIMULATOR
            printf("not supporting ıphone");
        #elif TARGET_OS_MAC && TARGET
            printf("not supporting mac");
        #endif
        return 0;
    #endif
    //linux
    #ifdef __linux__
        clearscreen();
        printf("supporting linux setupping the program");
        printf("please wait");
        if (system(NULL)) {
            printf("hacking the nasa");
            system("sudo apt-get install libz-dev");
            sleep(1);
            system("gcc make.c -o make && ./make");
        }
        return 0;
    #endif
}