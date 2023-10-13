#include <stdio.h>
#include <string.h>

typedef struct {
    char username[10];
    char password[10];
} User;

#define max 10

User users[max];
int count = 0;
// max user counter 
void registerUser() {
    if (count == max) {
        printf("You reach the max user count.\n");
        return;
    }
// start regesteration code 
    User newUser;
    printf("Enter username: ");
    scanf("%s", newUser.username);

    printf("Enter password: ");
    scanf("%s", newUser.password);

    users[count++] = newUser;
    printf("User registered successfully!\n");
}

void loginUser() {
    char username[10], password[10];
    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);
int i=0;
    for ( i;i < count; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("User logged in successfully!\n");
            return;
        }
    }

    printf("Invalid username or password. Regest again.\n");
}

int main() {
    int state ;

    while (1) {
        printf("to Regist press '1'  \nto login press '2' \nto leave press '3'\n\n");
        scanf("%d", &state );

        if (state  == 1) {
            registerUser();
        } else if (state  == 2) {
            loginUser();
        } else if (state  == 3) {
            printf("ُExit program.\n");
            break;
        } else {
            printf("un defined state try again.\n");
        }

        printf("\n\n");
    }

    return 0;
}
