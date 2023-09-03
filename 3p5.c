#include <stdio.h>

struct RailwayForm
{
    char Name[30];
    char Gender[2];
    int Age;
    char StartPlace[60];
    char DestinationPlace[60];
};

void setDetails(struct RailwayForm newForm[], int p)
{
    for (int i = 0; i < p; ++i)
    {
        printf("Enter the name of %dth passenger : ", i+1);
        scanf("%s", newForm[i].Name);

        printf("Enter the age of %dth passenger : ", i+1);
        scanf("%d", &newForm[i].Age);

        printf("Enter the gender of %dth passenger : ", i+1);
        scanf("%s", newForm[i].Gender);
    }

    printf("Enter the Source Place : ");
    scanf("%s", newForm[0].StartPlace);

    printf("Enter the Destination Place : ");
    scanf("%s", newForm[0].DestinationPlace);

}

void getDetails(struct RailwayForm newForm[],int p){
    for(int i=0; i<p; ++i){
        printf("Name of %dth passenger : %s\n",i+1,newForm[i].Name);
        printf("Age of the %dth passenger : %d\n",i+1,newForm[i].Age);
        printf("Gender of the %dth passenger : %s\n",i+1,newForm[i].Gender);
        printf("\n");
    }

    printf("Source Place : %s\n",newForm[0].StartPlace);
    printf("Destination Place : %s\n",newForm[0].DestinationPlace);
}

int main()
{
    int p = 2;
    struct RailwayForm r1[p];
    
    setDetails(r1,p);
    printf("--------------Details---------------\n");
    getDetails(r1,p);
    return 0;
}