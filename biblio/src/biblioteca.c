#include <stdio.h>
#include <stdlib.h>

// ESTRUCTURA
typedef struct Bok
{
    int id;
    char title[100];
    char author[100];
    int publication_year;
    // TODO: agregar genero del libro
    int quantity;
} book_t;

typedef struct Member
{
    int id;
    char name[100];
    int bookIssued; // TODO: hacer una lista de libros prestados
} member_t;

// PROTOTIPO DE FUNCIONES

void addBook();
void displayBook();
void addMember();
void issueBook();

int main()
{
    int choice = 0;

    do
    {
        printf("\nMenu de sistema de manejo de biblioteca\n");

        printf("\t1. Agregar libro\n");
        printf("\t2. Mostrar libros disponibles\n");
        printf("\t3. Agregar usuario/miembro\n");
        printf("\t4. Prestar libro\n");

        printf("\t5. SALIR");
        printf("\n");
        printf("\n");
        printf("Indica tu opción\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBook();
            break;
        case 3:
            addMember();
            break;
        case 4:
            issueBook();
            break;

        default:
            printf("\nEsta opcion no es valida\n");
            break;
        }

    } while (choice != 5);

    return 0;
}

// FUNCIONES

void addBook()
{
    printf("Añadiendo un libro\n");
}
void displayBook()
{
    printf("Mostrando libros deisponibles\n");
}
void addMember()
{
    printf("Añadiendo un miebro\n");
}
void issueBook()
{
    printf("Prestando un libro\n");
}