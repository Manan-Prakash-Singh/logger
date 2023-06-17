#include "logger.h"
#include <unistd.h>
#include <string.h>

int main(){
    logger_t log_;
    if( init_logger(&log_,"log.txt") < 0 ){
        fprintf(stderr, "initialization failed.\n");
        return 1;
    }
    int count = 0;
    char message[512];
    memset(message,0,sizeof(message));
    
    while(count < 5){
        fgets(message,512,stdin);
        message[strlen(message)-1]='\0';
        log_message(&log_,message);
        count++;
    }
    
    sleep(2);
    return 0;
}