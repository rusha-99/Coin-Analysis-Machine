                      
#include <stdio.h>
#include <conio.h>

//define variables globally
int total= 0;
// currency denominations
int denominations[10][2] =  { {5000,0},{1000,0}, {500,0}, {100,0}, {50,0},{20,0}, {10,0},{5,0},{2,0}, {1,0} };

void welcome(){ //initial interface user sees
	
	printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb               -COIN ANALYSIS-                 \xdb\n");
	printf("\t\t\xdb                   SOFTWARE                    \xdb\n");  
	printf("\t\t\xdb       =============================           \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb                                               \xdb\n");
	printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	printf(" \n\t Press Any Key To Continue:");
	
	getch();//holds the screen 	
    system("cls"); // clear the screen
    
}

//Pass the salery amount from main function to void denomination function using parameter passing
void denomination (int amount){//Coin Analysis Function
	
    int notes,i=0;
 
    printf("\n");
  	
   	while (i < 10){
   		
        notes = amount / denominations[i][0];
        denominations[i][1]=denominations[i][1]+ notes;// Increment each denomination array[i][1] element by value of notes
        
        if (notes!=0){
        	
            amount = amount % denominations[i][0];
            printf("Rs %4d * ( %3d )   = Rs %5d.00 \n", denominations[i][0], notes, notes * denominations[i][0]);
        }
        
        i++;
    }
 
}

//Calculates the total sum of salaries  
void getTotal(int amount){
	
	total = total + amount;
}

int main(){
	
	int n,i,amount;
	char name[10];
	
	welcome();// Calling welcome function
	
	printf("Enter the number of employees : ");
	scanf("%d",&n);
	
	for(i = 0;i < n; i++){ //for loop runs till  i=0 to i< number of employees
		
		printf("\nEnter the employee name    : ");
    	scanf("%s",&name);
    	
    	printf("Enter salary of %10s :Rs ",name);
    	scanf("%d", &amount);
    	
		printf("\n%s\n",name);
		printf("Salary = Rs%d.00\n ",amount);
		
		printf("\nCoin analysis: \n");
		
		getTotal (amount); //passes each salery amount to getTotal function
    	denomination (amount); // passes the salery amount to calculate coin analysis
	
	}
	
	printf("\n---------------------------------------------------------------------------------------------\n");
	printf(" \t\t\t\tSUMMARY\n");
	printf("\t\tLANKA INDUSTRIES (tharushapathirana07@gmail.com) \n");
	printf("\n---------------------------------------------------------------------------------------------\n");		
  	

  	printf("Total Coin Analysis:\n");
	
 	int k;
 	
    for (k = 0; k <10; k++) //Print all total count of each notes/coins in this loop.
    {
        if (denominations[k][1] != 0) //To print all values that has count value.
        {
            printf("\nTotal %4ds : %2d", denominations[k][0], denominations[k][1]);
        }
    }
    
    printf("\n\nTotal Salary Payment  : Rs %5d.00\n",total);//Display the total Salary paid
    
    printf("\n\n");
	return 0;
}
