#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
  int userinputUSDtoEuro; // User inputted for USD to EURO;
  int userinputUSDtoJPY; // User inputted for USD to JPY;
  int userinputUSDtoRMB; // User inputted for USD to RMB;
  int userinputINRtoUSD; // User inputted for INR to USD;
  int userinputOunce; // User inputted for Ounce;
  int userinputGram; // User inputted for Gram;
  float userinputKg; // User inputted for Kg;
  int fahrenheitToCelsius; // variable that stores the converted F->C;
  int celsiusToFahrenheit; // variable that stores the converted C->F;
  int celsiusToKelvin; // variable that stores the converted C->K;
  float USDtoEURO ; // varaible that stores the converted USD->EURO;
  float USDtoJPY; // stores the converted USD->JPY;
  float USDtoRMB; // stores the converted USD->RMB;
  float INRtoUSD; // stores the converted INR->USD;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the converted Grams->Pounds;
  float KgToPounds; // stores the converted Kg->Pounds;
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf("Enter 3 for Celsius to Kelvin. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelsius =  ((userinputF-32) * (5.0/9.0));
          printf("Celsius: %d",fahrenheitToCelsius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celsius degree: \n");
        scanf("%d",&userinputC);
        celsiusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celsiusToFahrenheit);
      }
      else if(tempChoice == 3){
        printf("Please enter the Celsius degree: \n");
        scanf("%d",&userinputC);
        celsiusToKelvin = userinputC+273;
        printf("Kelvin: %d",celsiusToKelvin);
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      printf("Enter 4 for INR to USD. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRMB);
        USDtoRMB = userinputUSDtoRMB * 6.82;
        printf("RMB: %.2f",USDtoRMB);
      }
      else if(currencyChoice == 4) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoUSD);
        INRtoUSD = userinputINRtoUSD / 82.53;
        printf("USD: %.2f",INRtoUSD);
        
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to Pounds. \n");
      printf("Enter 2 for gram to Pounds. \n");
      printf("Enter 3 for Kg to Pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else if (massChoice == 3) {
          printf("Please enter the Kg amount: \n");
          scanf("%f",&userinputKg);
          KgToPounds = userinputKg * 2.2046;
          printf("Pounds: %.2f",KgToPounds);
        
      
   }
    else
      printf("please enter the correct choice");
  }
    return 0;

}
