#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int userinputF; // User input for Fahreinheit;
  int userinputC; // User input for Celsius;
  int userinputINRtoEuro; // User inputted for INR to EURO;
  int userinputINRtoJPY; // User inputted for INR to JPY;
  int userinputINRtoUSD; // User inputted for INR to USD;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float INRtoEURO ; // varaible that stores the converted INR->EURO;
  float INRtoJPY; // varaible that stores the converted INR->JPY;
  float INRtoUSD; // varaible that stores the converted INR->USD;
 
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for INR to Euro. \n");
      printf("Enter 2 for INR to JPY. \n");
      printf("Enter 3 for INR to USD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoEuro);
          INRtoEURO = userinputINRtoEuro * 0.012;
          printf("Euro: %.2f",INRtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the INR amount: \n");
          scanf("%d",&userinputINRtoJPY);
          INRtoJPY = userinputINRtoJPY * 1.72;
          printf("JPY: %.2f",INRtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoUSD);
        INRtoUSD = userinputINRtoUSD * 0.013;
        printf("USD: %.2f",INRtoUSD);
      }
      else
        printf("Please enter correct choice. \n");
   }
 
  return 0;
}