#include<stdio.h>
#include<string.h>
int n,i=0;
float total_balance=0.0;
struct expiryDate {
    char month[20];
    int date;
    int year;
};
struct customerDetails {
    char customer_name[200];
    long int cust_id;
    float account_balance;
    struct expiryDate expiry_date;
    char city[100];
    int postal_code;
};
struct customerDetails customers[100];
void read_details(FILE *fp) {
    printf("Enter the number of customers\n");
    scanf("%d",&n);
    fprintf(fp,"Name\tCustomer Id\tAccount Balance\tExpiry Date\tCity\tPostal Code\n");
    for(i=0; i<n;i++) {
        printf("Enter the details of customer %d\n",i+1);
        printf("Enter the customer name: ");
        scanf("%s",customers[i].customer_name);
        printf("Enter the customer id:\n");
        scanf("%d",&customers[i].cust_id);
        printf("Enter the Account Balance:\n");
        scanf("%f",&customers[i].account_balance);
        printf("Enter the expiry date:\n");
        scanf("%s %d %d",customers[i].expiry_date.month,&customers[i].expiry_date.date,&customers[i].expiry_date.year);
        printf("Enter the city:\n");
        scanf("%s",customers[i].city);
        printf("Enter the postal code:\n");
        scanf("%d",&customers[i].postal_code);
        fprintf(fp,"%s\t %d\t\t %f\t %s %d %d\t %s\t %d\n",customers[i].customer_name,customers[i].cust_id,customers[i].account_balance,customers[i].expiry_date.month,customers[i].expiry_date.date,customers[i].expiry_date.year,customers[i].city,customers[i].postal_code);
    }
    fprintf(fp,"\n");
}
void display_expiry_may(FILE *fp) {
    fprintf(fp,"Customers Details whose expiry date is May:\n");
    for(i=0; i<n;i++) {
        if(strcmp(customers[i].expiry_date.month,"May") == 0) {
            fprintf(fp,"Customer Id: %d\n",customers[i].cust_id);
            fprintf(fp,"Customer Name: %s\n",customers[i].customer_name);
            fprintf(fp,"Account Balance: %0.2f\n",customers[i].account_balance);
            fprintf(fp,"Expiry Date: %s %d %d\n",customers[i].expiry_date.month,customers[i].expiry_date.date,customers[i].expiry_date.year);
            fprintf(fp,"City: %s\n",customers[i].city);
            fprintf(fp,"Postal Code: %d\n\n",customers[i].postal_code);
        }
    }
}
void total_account_balance(FILE *fp) {
    for(i=0; i<n; i++) {
        total_balance = total_balance + customers[i].account_balance;
    }
    fprintf(fp,"Total Balance: %0.2f\n",total_balance);
}
int main() {
    FILE *fp;
    fp=fopen("E:\\customer.txt","a");
    printf(fp);
    if(fp==NULL)
    {
        printf("fopen failed\n");
        //break;
    }
    read_details(fp);
    display_expiry_may(fp);
    total_account_balance(fp);
    return 0;
}
