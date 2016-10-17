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

    if (req_type == 0x01) {
        /* todo */
    }
    if (req_type == 0x2) {
        /* todo */
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
