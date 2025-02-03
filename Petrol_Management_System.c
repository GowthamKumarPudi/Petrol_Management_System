#include <stdio.h>
int main() {
    int choice,pin;
    float cost,quantity;
    printf("================================");
    printf("\n ***Petrol Management System***\n");
    printf("================================");
    start:
    printf("\n\nTypes of Services:\n");
    printf("1.Refill Petrol \n2.Refill Diesel \n3.Refill CNG \n4.Tyre Inflation \n5.Vehicle Servicing");
    printf("\nSelect the Service You want");
    printf("\nEnter your choice:");
    scanf("%d",&choice);

switch(choice)
{
case 1: printf("You're selected the Petrol Service");
        printf("\n1 litre petrol cost is Rs.75");
        printf("\n\nEnter the quatity of petrol you want:");
        scanf("%f",&quantity);
        cost=75*quantity;
        printf("Amount you need to pay for petrol:%.2f",cost);
        printf("\n\nPayment Methods:\n1.Cash \n2.Card\n");
        printf("Select the payment method:");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Cash Paid Successfully!!");
            printf("\nThanks for coming....Visit Again!!");
        }
        else if(choice==2)
        {
            printf("Swipe the card");
            printf("\nEnter PIN:");
            scanf("%d",&pin);
            printf("Payment Succesfull!!");
            printf("\nThanks for coming....Visit Again!!");
        }
        else{
            printf("InValid Choice...");
        }
        break;

case 2: printf("You're selected the Diesel Service");
        printf("\n1 litre Diesel cost is Rs.90");
        printf("\n\nEnter the quatity of Diesel you want:");
        scanf("%f",&quantity);
        cost=90*quantity;
        printf("Amount you need to pay for Diesel:%.2f",cost);
        printf("\n\nPayment Methods:\n1.Cash \n2.Card\n");
        printf("Select the payment method:");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Cash Paid Successfully!!");
            printf("\nThanks for coming....Visit Again!!");
        }
        else if(choice==2)
        {
            printf("Swipe the card");
            printf("\nEnter PIN:");
            scanf("%d",&pin);
            printf("Payment Succesfull!!");
            printf("\nThanks for coming....Visit Again!!");
        }
        else{
            printf("InValid Choice...");
        }
        break;
        
case 3: printf("You're selected the CNG Service");
        printf("\nCNG cost is Rs.60");
        printf("\n\nEnter the quatity of CNG you want:");
        scanf("%f",&quantity);
        cost=60*quantity;
        printf("Amount you need to pay for CNG:%.2f",cost);
        printf("\n\nPayment Methods:\n1.Cash \n2.Card\n");
        printf("Select the payment method:");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Cash Paid Successfully!!");
            printf("\nThanks for coming....Visit Again!!");
        }
        else if(choice==2)
        {
            printf("Swipe the card");
            printf("\nEnter PIN:");
            scanf("%d",&pin);
            printf("Payment Succesfull!!");
            printf("\nThanks for coming....Visit Again!!");
        }
        else{
            printf("InValid Choice...");
        }
        break;
        
case 4: printf("You're selected the Tyre Inflation Service");
        printf("\nThis Service is Free of Cost");
        printf("\nThanks for coming....Visit Again!!");
        break;
        
case 5: printf("You're selected the Vehicle Servicing");
        printf("\nThis Service is Free of Cost");
        printf("\nThanks for coming....Visit Again!!");
        break;
default:
            printf("InValid Choice.....");
            goto start;
}        
return 0;
}
