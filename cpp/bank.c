#include<stdio.h>
#include<conio.h>
void dep();
void dis( );
void wit( );
void dis( );
struct bank{
    int acno;
    char pname[45];
    float bal;
};   
int main(){
struct bank SBI;
dep(&SBI);
dis(&SBI);
wit(&SBI);
dis(&SBI);  
    return 0;
}
    void dep(struct bank *B)
{
    printf("Enter the person details\n");
    scanf("%d%s%f",&B->acno,&B->pname,&B->bal);
}
void dis(struct bank *B)
{
    printf("Acno=%d\tpname=%s\nBal=%.2f",B->acno,B->pname,B->bal);
}
void wit(struct bank *B)
{
    float amt;
    printf("\nEnter the amount to deduct :");
    scanf("%f",&amt);
    B->bal=B->bal-amt;
}