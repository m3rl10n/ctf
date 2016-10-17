#include <stdio.h>
#include <string.h>
#include <unistd.h>

int parse_request(char *req, int n) {
    char file[500]; 
    char file_content[500]; 
    int file_len; 
    char *ptr = req; 
    FILE *fp;
    
    memset(file, 0, sizeof(file)); 

    ptr = (char *)ptr + 2;
    file_len = n - 2 - 5 - 2; 
    memcpy(file, ptr, file_len); 

    fp = fopen(file, "r"); 
    if (fp) {
        memset(file_content, 0, sizeof(file_content)); 
        fgets(file_content, sizeof(file_content), fp); 
        printf("%s", file_content); 
    }
    return 0; 
}

int main(int argc, char *argv[]) {
    char buf[2000];
    int n; 

    setbuf(stdout, 0); 

    memset(buf, 0, sizeof(buf)); 
    n = read(0, buf, sizeof(buf)); 
    parse_request(buf, n);

    return 0; 
}
