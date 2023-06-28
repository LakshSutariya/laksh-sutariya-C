#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100


struct User 
{
    int id;
    char name[50];
};

struct UFD 
{
    struct User users[MAX_USERS];
    int count;
};

void initializeUFD(struct UFD *ufd) 
{
    ufd->count = 0;
}

void createUser(struct UFD *ufd) 
{
    if (ufd->count >= MAX_USERS) 
	{
        printf("UFD is full. Cannot create more users.\n");
        return;
    }

    struct User newUser;

    printf("Enter User ID: ");
    scanf("%d", &newUser.id);

    printf("Enter User Name: ");
    scanf(" %[^\n]s", newUser.name);

    ufd->users[ufd->count++] = newUser;
    printf("User created successfully.\n");
}

void readUser(const struct UFD *ufd) 
{
    int id, i;

    printf("Enter User ID: ");
    scanf("%d", &id);

    for (i = 0; i < ufd->count; i++) 
	{
        if (ufd->users[i].id == id) 
		{
            printf("User ID: %d\n", ufd->users[i].id);
            printf("User Name: %s\n", ufd->users[i].name);
            return;
        }
    }

    printf("User not found.\n");
}

void updateUser(struct UFD *ufd) 
{
    int id, i;

    printf("Enter User ID: ");
    scanf("%d", &id);

    for (i = 0; i < ufd->count; i++) 
	{
        if (ufd->users[i].id == id) 
		{
            printf("Enter New User Name: ");
            scanf(" %[^\n]s", ufd->users[i].name);
            printf("User updated successfully.\n");
            return;
        }
    }

    printf("User not found.\n");
}

void deleteUser(struct UFD *ufd) 
{
    int id, i, j;

    printf("Enter User ID: ");
    scanf("%d", &id);

    for (i = 0; i < ufd->count; i++) 
	{
        if (ufd->users[i].id == id) 
		{
            for (j = i; j < ufd->count - 1; j++) 
			{
                ufd->users[j] = ufd->users[j + 1];
            }

            ufd->count--;
            printf("User deleted successfully.\n");
            return;
        }
    }

    printf("User not found.\n");
}

int main()
{
    struct UFD ufd;
    initializeUFD(&ufd);

    int choice;

    do 
	{
        printf("CRUD Operations\n");
        printf("1. Create User\n");
        printf("2. Read User\n");
        printf("3. Update User\n");
        printf("4. Delete User\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
		{
            case 1:
                createUser(&ufd);
                break;
            case 2:
                readUser(&ufd);
                break;
            case 3:
                updateUser(&ufd);
                break;
            case 4:
                deleteUser(&ufd);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice");
		}
	}
	while(choice!=5);
}

