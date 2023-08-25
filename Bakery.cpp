#include<stdio.h>
int main(){
    int CQuantity,CPrice;
    
    printf("Welcome to My Bakery Shop!\n");
    printf("----------------------------\n");
    printf("Available Item is : Chocolate Cake\n");
    printf("Enter the quantity you want to purchase: ");
    scanf("%d",&CQuantity);
    printf("Enter the price of Chocolate Cake: ");
    scanf("%d",&CPrice);
    
    printf("------ Invoice ------\n");
    
    printf("Quantity: %d\n",CQuantity);
    printf("Price per item: Rs.%d\n",CPrice);
    int total = CPrice*CQuantity;
    printf("Total cost: Rs:%d",total);
    
    return 0;
