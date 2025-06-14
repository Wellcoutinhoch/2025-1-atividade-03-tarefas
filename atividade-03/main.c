#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Processo filho (PID: %d)\n", getpid());
    } else {
        printf("Processo pai (PID: %d)\n", getpid());
    }
    return 0;
}