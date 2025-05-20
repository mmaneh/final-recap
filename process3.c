#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main() {
    pid_t proc1 = fork();

    if (proc1 < 0) {
        printf("Fork failed");
        return 0;
    }
    else if (proc1 == 0) {
        
        printf("Child process:\n");
        execlp("ls"," -l", NULL); 
       
        exit(1);
    }
    else {
 
        int status;
        wait(&status); 
        printf("Parent process: ");
  
    }

    return 0;
}

