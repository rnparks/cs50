#import <stdio.h>

int changemaker(int n, int x);

int main(void)
{
  printf("Please give me a number to make change:  ");
  float total;
  scanf("%f", &total);
  int cents = total * 100; //covert to cents to avoid rounding errors
  int numQ = changemaker(cents, 25);
  cents = cents - 25 * numQ; //subtract the quarters to get a new value for cents
  int numD = changemaker(cents, 10);
  cents = cents - 10 * numD; //subtract the nickles
  int numN = changemaker(cents, 5);
  cents = cents - 5 * numN; // subtract the dimes
  int numP = changemaker(cents, 1);
  printf("Your change is: \n");
  printf("%d Quarters\n", numQ);
  printf("%d Dimes\n", numD);
  printf("%d Nickles\n", numN);
  printf("%d Pennies\n", numP);
}

int changemaker(int n, int x)
  {
    return n / x;
  }
