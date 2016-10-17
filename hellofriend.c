#include <stdio.h>
#include <string.h>
#include <unistd.h>

int parse_request(char *req, int n) {
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
