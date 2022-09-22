#include<stdio.h>
#include<conio.h>
#include<math.h>
int list();
int deposite();
int withdraw();
int transfer();
int checkdetails();
void last();
int TotalAmount=1000,DA,WA,Tr,TotalDeposite=0,TotalWith=0,TotalTr=0;
int Acc;
char a[50];
int main()
{
    printf("\n Enter your name:");
	gets(a);
	printf("\n Enter your Acc number:");
	scanf("%d",&Acc);
	while(1)
	{
	  switch (list())
      {
    	case 1:
  		 deposite();
  		 TotalDeposite+=DA;
  		 break;
  	    case 2:
  		 withdraw();
  		 if (WA<=TotalAmount)
  		 TotalWith+=WA;
  		 break;
        case 3:
         transfer();
    	 if(Tr<=TotalAmount)
        TotalTr+=Tr;
    	 break;
        case 4:
    	 checkdetails();
    	case 5:
    	 last();
    	 getch();
    	 return 0;
        default:
    	 printf("\nInva; id choice:");
       }
     }
  getch();

}
  int list()
 {
 int ch;
 printf("\n1: Enter the amount you want to deposite: ");
 printf("\n2: Enter the amount you want to withdraw: ");
 printf("\n3: Enter the amount you want to transfer: ");
 printf("\n4: Check details:");
 printf("\n5: Exit: ");
 printf("\n Enter your choice:");
 scanf("%d",&ch);
 return ch;
}
 int deposite()
 {
 	printf("\n Enter amount you wish to deposite:");
 	scanf("%d",&DA);
 	TotalAmount +=DA;
 }
  int withdraw()
  {
  	printf("\n Enter the amount you wish to withdraw:");
  	scanf("%d",&WA);
  	if (WA<=TotalAmount)
  	TotalAmount -=WA;
  	 else
  	  printf("\n You have less amount withdraw not possible");
  }
  int transfer()
  {
  	printf("\n Enter the amount you want to transfer:");
  	scanf("%d",&Tr);
  	if (Tr<=TotalAmount)
  	TotalAmount -=Tr;
  	else
  	 printf("\n Less amount transfer not possible");
  }
  int checkdetails()
  {
  	printf("\n Total Amount is :%d",TotalAmount);
  	printf("\n Total Deposite is: %d",TotalDeposite);
  	printf("\n Total Withdraw Amount is: %d",TotalWith);
  	printf("\n Total Transfer Amount: %d",TotalTr);
  }

  void last()
  {
  	printf("\n ********\n");
  	printf("\n Your name=%s",a);
  	printf("\n Account number:=%d",Acc);
  	printf("\n Total Amount is: %d",TotalAmount);
  	printf("\n Total Deposite is:%d",TotalDeposite);
  	printf("\n Total Withdraw Amount is:%d",TotalWith);
  	printf("\n Total Transfer Amount:%d",TotalTr);
  	printf("\n *Thanks Visit Again*");
  }
