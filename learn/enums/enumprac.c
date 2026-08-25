#include <stdio.h>

typedef enum {
    SUCCESS, FAILURE, PENDING
}Status;

void connectStatus(Status status);

int main() {
    Status status = SUCCESS;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status) {

    switch(status){
        case SUCCESS:
            printf("Connection was successful.\n");
            break;
        case FAILURE:
            printf("Could not connect.\n");
            break;
        case PENDING:
            printf("Connecting..");
            break;
    }

}
