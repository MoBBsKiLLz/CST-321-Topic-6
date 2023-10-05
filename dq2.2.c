#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>

int main(void){
    chdir("..");
    struct dirent *files;
    struct stat file_stat;
    DIR *dir = opendir(".");
    if (dir == NULL){
        printf("Directory cannot be opened!");
        return 0;
    }
    while ((files = readdir(dir)) != NULL){
        stat(files->d_name, &file_stat);
        int links = file_stat.st_nlink;
        if(links >= 2) {
            printf("Name: %s, Inode: %lu, Links: %i\n", files->d_name, files->d_ino, links);
        }
    }
    closedir(dir);
    return 0;
}