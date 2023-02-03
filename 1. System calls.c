#include <stdio.h>
#include <unistd.h>

int main()
{
    int p_id, p_pid;
    fork();
    p_id = getpid(); /*process id*/
    p_pid = getppid(); /*parent process id*/

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return 0;
}
