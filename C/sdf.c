#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct specification{
    char laptop_model[100];
    char brand[100];
    int price;
    char processor[100];
}Laptop;

Laptop scanFunction( int n)
{
   
    Laptop model;
    
        printf("model: ");
        scanf(" %[^\n]", model.laptop_model);
        printf("brand: ");
        scanf(" %[^\n]", model.brand);


        printf("price: ");
        scanf("%d", &model.price);

        printf("processor: ");
        scanf(" %[^\n]", model.processor);

        printf("\n");

    return model;
}

void sort(Laptop *s, int n)
{
    Laptop temp;
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j =i +1; j < n; j++)
        {
            if(strcmp(s[i].brand, s[i].brand) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void printFunction(Laptop *s, int n){
    int i;
    printf("\n the detail output: \n");
    for(i =0; i < n; i++)
    {

        printf("model: %s\n", s[i].laptop_model);
        printf("brand: %s\n", s[i].brand);
        printf("price: %d\n", s[i].price);
        printf("specification: %s\n", s[i].processor);
        printf("\n");
    }
    
}

void priceSort(Laptop *s,int price,int n){
    
    Laptop temp[n];

    int i, count =0;
    printf("\nlaptop price below %d are: ", price);

    for(i =0; i < n; i++ )
    {
        if(s[i].price < price)
        {
            temp[i] = s[i];
            count++;
        }   
    }

    printFunction(temp,count);
}

int main()
{
    int price;
    int n,i;
    Laptop *model;

    printf("how many specfication: ");
    scanf("%d", &n);

    model = (Laptop *)malloc(n * sizeof(Laptop));

    for(i =0; i < n; i++)
        model[i] = scanFunction(i);

    sort(model,n);

    printFunction(model, i);

    printf("\nprice sort: ");
    scanf("%d", &price);

    priceSort(model,price,n);
    


}