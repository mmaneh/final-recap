#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t proc1 = fork(); 

    if (proc1 < 0) {
        printf("Fork failed\n");
        return 0;
    }
    else if (proc1 == 0) {
        
        printf("Child's pid is %d\n", getpid());
        exit(83);  
    }
    else {
       
        printf("Parent's pid is %d, Child's pid is  %d\n", getpid(), proc1);

        int status;
        wait(&status); 
	printf("Child's exit status is %d\n", WEXITSTATUS(status));
        
    }

    return 0;
}

