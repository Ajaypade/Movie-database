//5. Movie Database: Create a program that uses structures to manage a movie
//database with details like title, director, release year, and genre. Allow users
//to add, search for, and update movie records.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct movie 
{
    char title[50];
    char director[30];
    int year;
    char genre[50];
}movie;

void add(movie*, int);
void search(movie*, int);
void update(movie*, int);
void display(movie*, int);

void main() 
{
    int size;
    printf("Enter the number of movies you want to add : ");
    scanf("%d", &size);

    struct movie* arr = (movie*)malloc(size * sizeof(movie));

    int ch;
    printf("\nEnter your choice ('1: add', '2: search', '3: update', '4: display'): ");
    scanf("%d", &ch);

    if(ch==1) 
	{
        add(arr, size);
    } 
	else if(ch==2) 
	{
        search(arr, size);
    } 
	else if(ch==3) 
	{
        update(arr, size);
    } 
	else if(ch==4) 
	{
        display(arr, size);
    } 
	else 
	{
        printf("\nInvalid input!\n");
    }
}

void add(movie* arr, int size) 
{
    printf("Enter the number of movies you want to add : ");
    scanf("%d", &size);
    int i;
    printf("\n================= Add Movie ===================\n");
    for(i=0;i<size;i++) 
	{
        getchar();
        printf("\nEnter details for movie %d:\n", i + 1);
        printf("Title: ");
        scanf(" %s", arr[i].title);
        printf("Director: ");
        scanf(" %s", arr[i].director);
        printf("Year: ");
        scanf("%d", &arr[i].year);
        getchar();
        printf("Genre: ");
        scanf(" %s", arr[i].genre);
    }
    int ch;
    printf("\nEnter your choice ('1: add', '2: search', '3: update', '4: display','5:exit'): ");
    scanf("%d", &ch);

    if(ch==1) 
	{
        add(arr, size);
    } 
	else if(ch==2) 
	{
        search(arr, size);
    } 
	else if(ch==3) 
	{
        update(arr, size);
    } 
	else if(ch==4) 
	{
        display(arr, size);
    } 
    else if(ch==5)
    {
    	exit;
	}
	else 
	{
        printf("Invalid input!\n");
    }
}

void display(movie* arr, int size) 
{
    int i;
    printf("\n================== Movies List ======================\n");
    for (i=0;i<size;i++) 
	{
        printf("\nTitle: %s\nDirector: %s\nYear: %d\nGenre: %s\n", arr[i].title, arr[i].director, arr[i].year, arr[i].genre);
    }
    
    int ch;
    printf("\nEnter your choice ('1: add', '2: search', '3: update', '4: display','5:exit'): ");
    scanf("%d", &ch);

    if(ch==1) 
	{
        add(arr, size);
    } 
	else if(ch==2) 
	{
        search(arr, size);
    } 
	else if(ch==3) 
	{
        update(arr, size);
    } 
	else if(ch==4) 
	{
        display(arr, size);
    } 
    else if(ch==5)
    {
    	exit;
	}
	else 
	{
        printf("\nInvalid input!\n");
    }
    
}

void search(movie* arr, int size) 
{
	printf("==============================================================");
    char search[50];
    printf("\nEnter the title to search: ");
    getchar();
    scanf(" %s", search);

    int i;
    for (i=0;i<size;i++) 
	{
        if(strcmp(arr[i].title,search)==0) 
		{
            printf("\nMovie found:\n");
            printf("Title: %s\n", arr[i].title);
            printf("Director: %s\n", arr[i].director);
            printf("Year: %d\n", arr[i].year);
            printf("Genre: %s\n", arr[i].genre);
        }
    }  
    int ch;
    printf("\nEnter your choice ('1: add', '2: update', '3: display','4: exit'): ");
    scanf("%d", &ch);

    if(ch==1) 
	{
        add(arr, size);
    } 
	else if(ch==2) 
	{
        update(arr, size);
    } 
	else if(ch==3) 
	{
        display(arr, size);
    } 
    else if(ch==4)
    {
    	exit;
	}
	else 
	{
        printf("\nInvalid input!\n");
    }
}

void update(movie* arr, int size) 
{
    char update[50];
    printf("\nEnter the title of the movie to update: ");
    getchar();
    scanf(" %s", update);

    int i;
    for (i=0;i<size;i++) 
	{
        if (strcmp(arr[i].title,update)==0) 
		{
            printf("\nEnter new movie details:\n");
            printf("Year: ");
            scanf("%d", &arr[i].year);
            printf("Movie updated successfully!\n");
            break;
        }
    }   
    int ch;
    printf("\nEnter your choice ('1: add', '2: search', '3: display','4: exit'): ");
    scanf("%d", &ch);

    if(ch==1) 
	{
        add(arr, size);
    } 
	else if(ch==2) 
	{
        search(arr, size);
    } 
	else if(ch==3) 
	{
        display(arr, size);
    } 
    else if(ch==4)
    {
    	exit;
	}
	else 
	{
        printf("\nInvalid input!\n");
    }
}

