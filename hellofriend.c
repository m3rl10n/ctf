#include <stdio.h>
#include <string.h>
#include <unistd.h>

char to_write[500]; 

int parse_request(char *req, int n) {
    char data[500]; 
    char file[500]; 
    char file_content[500]; 
    int file_len; 
    int req_type; 
    char mode[10];
    char *ptr = req; 
    FILE *fp;
    
    memset(file, 0, sizeof(file)); 
    memset(mode, 0, sizeof(mode)); 

    memset(data, 0, sizeof(data)); 
    memset(to_write, 0, sizeof(to_write)); 

    ptr = (char *)ptr + 2; 
    file_len = strlen(ptr); 

    ptr = (char *)ptr + file_len + 1;
    ptr = (char *)ptr + 6;

    memcpy(to_write, ptr, 500); 
    memcpy(data, ptr, 2000); 

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
