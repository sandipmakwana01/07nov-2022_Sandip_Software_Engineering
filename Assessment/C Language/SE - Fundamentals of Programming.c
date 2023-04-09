/*
-> Create a Food billing system Make sure each business logic is denoted with
   appropriate comments and make your code interactive and represent clean 
   and clear output on your console screen.

-  Adhere to the coding principles

-  Firstly, display the food items available

-  Then after the user can choose any of the item displayed

-  Also take the quantity of selected food item by the customer, then ask 
   the user that he/she wanna select more?

-  If yes then again display the food items available and take an order from 
   the customer. Here, you have to consider the total bill as the price of 
   food items previously selected plus the price of new items added should 
   display as a whole bill.

-  If no then display the final bill on the screen 
*/

#include<stdio.h>
#include <string.h>

int main(){

 
    int choise,Quantity,a,b=0,c;
    char choose;

    do{
        printf("\n           ##---- Menu ----##\n");
        printf("\n 1.Pizza  Price = 180rs/pcs");
        printf("\n 2.Burger  Price = 100rs/pcs");
        printf("\n 3.Dosa  Price = 120rs/pcs");
        printf("\n 4.Idli  Price = 50rs/pcs");

        printf("\n Please Enter Your Choise.... :");
        scanf("%d",&choise);

        switch (choise)
        {
        case 1 :
            printf("\nYour have selected Pizza");
            printf("\n Enter The Quantity: ");
            scanf("%d",&Quantity);
            a=Quantity*180;
            printf("\nTotal amount is = %d",a);
            printf("\namount : %d ",a);

             b++;

            if(b>1){
                a+=c;
                printf("\nFinal Bill is = %d : ",a);
            }
          
            break;
        case 2 :
            printf("\nYour have selected Burger");
            printf("\nEnter The Quantity: ");
            scanf("%d",&Quantity);
            a=Quantity*100;
            printf("Total amount is = %d",a);
            printf("\namount : %d ",a);
            b++;

            if(b>1){
                a+=c;
                printf("\nFinal Bill is = %d : ",a);
            }
        
           
            break;
        case 3 :
            printf("\nYour have selected Dosa");
            printf("\n Enter The Quantity: ");
            scanf("%d",&Quantity);
            a=Quantity*120;
            printf("\namount : %d ",a);
            printf("\nTotal amount is = %d",a);

             b++;

            if(b>1){
                a+=c;
                printf("\nFinal Bill is = %d : ",a);
            }
            

            
            break;
        case 4 :
            printf("\nYour have selected Idli");
            printf("\n Enter The Quantity: ");
            scanf("%d",&Quantity);
            a=Quantity*50;
            printf("\nTotal amount is = %d",a);
            printf("\namount : %d ",a);

             b++;

            if(b>1){
                a+=c;
                printf("\nFinal Bill is = %d : ",a);
            }
            
            break;
        
        default:
            printf("You Enter Wrong Choise...");
            
            break;
        }
    printf("\nDo you want to Order more ? y & n :");
    scanf("%s",&choose);
    c=a;
    }while(choose=='y' || choose=='Y');


    
    return 0;
}