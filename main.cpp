#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char *argv[]) {

    uint32_t data1, data2;
    FILE* file1 = fopen(argv[1],"r");
    fread((void*)&data1,sizeof(uint32_t),1,file1);
    fclose(file1);

    FILE* file2 = fopen(argv[2],"r");
    fread((void*)&data2,sizeof(uint32_t),1,file2);
    fclose(file2);

    data1 = ntohl(data1);
    data2 = ntohl(data2);
    uint32_t result = data1 + data2;

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n",data1, data1, data2, data2, result, result);
    }
