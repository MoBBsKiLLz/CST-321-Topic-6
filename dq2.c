#include <stdio.h>
#include <dirent.h>
#include <unistd.h>

int main(void){
    chdir("..");
    struct dirent *files;
    DIR *dir = opendir(".");
    if (dir == NULL){
        printf("Directory cannot be opened!");
        return 0;
    }
    while ((files = readdir(dir)) != NULL){
        printf("%s\n", files->d_name);
    }
    closedir(dir);
    return 0;
}