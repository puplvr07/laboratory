#include <stdio.h>
//Calculate the post mail thingy with a base cost of 10 for the first 5 grams and then 2 cost for each gram afterwards (or fraction of gram). Take the postmail weight as input
int main(){
    float weight, cost;
    int ctr;
    char deli;
    printf("Enter post mail weight: ");
    scanf("%f", &weight);
    if(weight>0){
        cost+=10;
    }
    for(ctr=5; ctr<weight; ctr++){
        cost+=2;
    }
    printf("Do you require special delivery? [y/n]: ");
    scanf(" %c", &deli);
    if(deli=='y'){
        cost+=15;
    }

    printf("Total cost is %.f pesos", cost);
    return 0;
}