#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;

int main (){

int menu_options;
char quit_or_not;
int decimal;
int isDigit = 0;
string name;

//main menu

do
{	cout << endl << endl <<  " ==================== Number System Conversion: ==================== "<< endl << endl << "CHOOSE YOUR SOURCE NUMBER SYSTEM: "<< endl << endl << "(2) BINARY"<< endl << "(3) TERNARY"<< endl << "(4) QUATERNARY"<< endl << "(5) QUINARY"<< endl << "(6) SENARY"<< endl << "(7) SEPTENARY"<< endl << "(8) OCTAL" << endl << "(9) NONARY"<< endl << "(10) DECIMAL"<< endl << "(16) HEXADECIMAL"<< endl << endl<< "==================== (INPUT ANY OTHER VALUE TO EXIT THE PROGRAM) ==================== "<< endl << endl;
	cin >> menu_options;

    int numberName = menu_options;


   if (cin.fail())                                                         // avoid strange behaviors by validating input                                       
{
     cin.clear(); cin.ignore(512, '\n');
}

//valid inputs

    switch(menu_options){


        case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: 

        switch (numberName){

            case 2: name = "Binary"; break;
            case 3: name = "Ternary"; break;
            case 4: name = "Quaternary"; break;
            case 5: name = "Quinary"; break;
            case 6: name = "Senary"; break;
            case 7: name = "Septenary"; break;
            case 8: name = "Octal"; break;
            case 9: name = "Nonary"; break;

        }

        int menu;

        cout << endl << "Source number " << menu_options 
            << endl << endl << "======= Select your target number system: =======" << endl << endl
            << "(10) DECIMAL" << endl << endl
            << "======= Input any other value to exit the program =======" << endl << endl;
            cin >> menu;
              if (cin.fail())                                                                                            
{
     cin.clear(); cin.ignore(512, '\n');
}

            if (menu != 10){ // invalid inputs

        cout << endl << "Confirm Close: " << endl << endl << "Are you sure you want to quit the program? (y/n)" << endl;

		cin >> quit_or_not;

		if(quit_or_not == 'y'){
			cout << "Bye! ";
		
		return 0;
	}
		else{
			cout << endl <<  "You will be return to the menu" << endl;
            break;
        
		}
	}

     else{ // converts to decimal

     
        string userNum;
        int decimal, digit;

     cout << endl <<  "=== Source: " << menu_options << " |" <<  " Target: " << menu  << " ===" << endl << endl
        << "Input your number in source system: " << endl;

     cin >> userNum;

      for (int i= 0 ; i <userNum.size() ; i++){ // this algorithm and implementation is taken from the demo
        digit = (userNum[i]) - '0'; 
        decimal += digit*pow(menu_options, userNum.size()-i-1);
     }

     cout << endl << "==============="<< endl << endl << name <<": " << userNum << endl << endl
        << "Decimal: " << decimal << endl << endl << "===============" 
        << endl << "You will be returned to the main menu...";
     
        break;

     }


    case 10:

    int menu_decimal;

   //updated menu for decimal since we need more options   

    cout << endl << "Source number: 10"
        << endl << endl << "======= Select your target number system: =======" << endl << endl
        << "(2) BINARY" << endl
        << "(3) TERNARY"<< endl
        << "(4) QUATERNARY" << endl
        << "(5) QUINARY" << endl
        << "(6) SENARY" << endl
        << "(7) SEPTENARY" << endl
        << "(8) OCTAL" << endl
        << "(9) NONARY" << endl
        << "(16) HEXADECIMAL" << endl << endl
        << "======= Input any other value to exit the program =======" << endl << endl;

        cin >> menu_decimal;
          if (cin.fail())                                                                                            
{
     cin.clear(); cin.ignore(512, '\n');
}

        if (menu_decimal < 2 || menu_decimal > 9 && menu_decimal < 16 || menu_decimal > 16 ){ //invalidating inputs that are not [2,9] or [16]

        cout << endl << "Confirm Close: " << endl << endl << "Are you sure you want to quit the program? (y/n)" << endl;

		cin >> quit_or_not;

		if(quit_or_not == 'y'){
			cout << "Bye! ";
		
		return 0;
	}
		else{
			cout << endl <<  "You will be return to the menu" << endl;
            break;
            
        
		}
        break;
	}

    else if (menu_decimal <= 9) { // this works for all 8 bases 

    int userNum, decimal, remainder;
    string result ="";

    cout << endl <<  "=== Source: " << menu_options << " |" <<  " Target: " << menu_decimal  << " ===" << endl << endl
    << "Input your number in source system: " << endl;

    cin >> userNum;
    decimal = userNum;

    while (decimal != 0){

        remainder = decimal % menu_decimal;
        result += to_string(remainder);

        decimal = decimal / menu_decimal;

        }

        reverse(result.begin(), result.end() );

        cout << endl << "=====================" << endl << endl << "Decimal: " << userNum << endl << endl
        << "Target " << "(" <<menu_decimal << "): "<< result << endl << endl << "====================="
        << endl << "You will be returned to the main menu";

        break;

    }

    else if(menu_decimal == 16){ // this is for hex

    int userNum;
    int remainder;

    cout << endl <<  "=== Source: " << menu_options << " |" <<  " Target: " << menu_decimal  << " ===" << endl << endl
        << "Input your number in source system: " << endl;

    
    cin >> userNum;
    int userNum_original = userNum;
    
    string result = "";
    while (userNum > 0)  
    {
    
    remainder = userNum % menu_decimal; 
    if (remainder > 9)

    {

    switch (remainder) // same algorithm of the demo, different implementation

    {
    case 10: result = "a" + result; break; 
    case 11: result = "b" + result; break;
    case 12: result = "c" + result; break;
    case 13: result = "d" + result; break;
    case 14: result = "e" + result; break;
    case 15: result = "f" + result; break;

    }
  }
  else
{
result = char(remainder + 48) + result; 
}
userNum = userNum / menu_decimal;
}

if (result == "") 
cout << "0";
else
cout << endl << "=====================" << endl << endl << "Decimal: " << userNum_original << endl << endl
    << "Target " << "(" <<menu_decimal << "): "<< result <<  endl << endl << "====================="
    << endl << "You will be returned to the main menu";

          
    break;

}
     
case 16:    

int menu_hexa; //updated menu, since we have 2 options here

cout << endl << "Source number: 16"
<< endl << endl << "======= Select your target number system: =======" << endl << endl
<< "(8) OCTAL" << endl
<< "(10) DECIMAL" << endl << endl
<< "======= Input any other value to exit the program =======" << endl << endl;

cin >> menu_hexa;
  if (cin.fail())                                                                                            
{
     cin.clear(); cin.ignore(512, '\n');
}

if (menu_hexa != 10 && menu_hexa != 8){ //checking if input is valid

cout << endl << "Confirm Close: " << endl << endl << "Are you sure you want to quit the program? (y/n)" << endl;

cin >> quit_or_not;

if(quit_or_not == 'y'){
cout << "Bye! ";
return 0;
}
else{
cout << endl <<  "You will be return to the menu" << endl;
break;
}

}
          
else if(menu_hexa== 8) { // from hex to octal

string hex;
string hexa_original;
int flag =0;
int validation = 0;
bool check;


while(flag < 5){

cout << "Enter a valid hex number: ";
cin >> hex;

hexa_original = hex;

for (int i = 0; i < hex.size() ; i++)
{
   if(isxdigit(hex[i]))
    validation +=1;

}

if(validation != hex.size()){
    check = false;
}

else if(validation == hex.size()){
    check = true;
}

validation = 0;

if(check == false)
{
    flag +=1;
    cout << "Not a valid number" << endl;
    if (flag ==5){
        break;
    }
}

else if (check ==true){ // if all numbers are valid then we convert

    int decimalNumber;
    int base = 2;
    int digit;
    string binary= "";
    string numBinary = "";
    long long int convertedBinary = 0;

    for(int i=0 ; i < hex.size() ; i++){
        if('a' <= hex.at(i) && hex.at(i) <= 'f'){
            digit = hex.at(i) - 'a' + 10;
        }
        else if('A' <= hex.at(i) && hex.at(i) <= 'F'){
            digit = hex.at(i) - 'A' + 10;
        }
        else{
            digit = hex.at(i) - '0';
        }                                                   // algorithm and implementation from the demo to convert hex digits to decimals

        int n = digit;

        long long bin = 0;
        int rem, k = 1;


  while (n!=0) {                                            // loop that converts each digit into a binary int
    rem = n % 2;
    n /= 2;
    bin += rem * k;
    k *= 10;
    
  }

        binary = to_string(bin);                            // all the digits are put in this string as binaries


        if(binary.size() != 4)                              // making them all 4-bits binaries (with padding zeros)
        {
            while(binary.size() != 4){
                binary = '0' + binary;
            }
        }

        numBinary += binary;                               // new string with all digits in 4-bits binary, ready to ve converted into oct
        
}

    while(numBinary.size() % 3 != 0)                        // check if the binary string has 3 digits. if not, it fills up the space with 0 [1 --> 001] 
    {
        numBinary = '0' + numBinary;              
    }

    string subBinary = "";
    int length, length_2, number, octate;
    int remainder_oct, num_oct;
    string octate_string = "";

    length = numBinary.size();                              // this variable makes the process more readable
        
    while(length > 0) 
       
    {
    
    subBinary = numBinary.substr(length-3, length);         // taking the last 3 digits of the string
    length_2 = subBinary.size();                            // this variable makes the process more readable

    int value = 0;
    int indexCounter = 0;

    for(int m=length_2-1 ; m >= 0 ; m--){                   // converting each 3 digits into its oct version

    if(subBinary[m]=='1'){
        value += pow(2, indexCounter);
    }
    indexCounter++;
    }

    octate_string += to_string(value);                      // adding them to this string 
    

    numBinary = numBinary.erase(length-3, length);         // eliminating the digits that were already calculated

    length -= 3;                                          // updating variable to control the loop
    
    }

    reverse(octate_string.begin(), octate_string.end());    // reversing the string

    cout << endl << "=====================" << endl << endl << "Hex: " << hexa_original << endl << endl
        << "Octal: " << stoi(octate_string) << endl << endl << "=====================" //stoi function delete the leading zeros, very helpful :D
        << endl << "You will be returned to the main menu";
        
}
if(check == true){
    break;
}
}
if(flag == 5){
cout << "You ran out of attempts, you will be taken to the main menu...";       // if the user inputs invalid hex number 5 times
break;
}

break;

}

else if(menu_hexa == 10) {                   // from hex to decimal

string hex;
string hexa_original;
int flag =0;
int validation = 0;
bool check;


while(flag < 5){

cout << "Enter a valid hex number: ";
cin >> hex;

hexa_original = hex;

for (int i = 0; i < hex.size() ; i++)
{
   if(isxdigit(hex[i]))
    validation +=1;

}

if(validation != hex.size()){
    check = false;
}

else if(validation == hex.size()){
    check = true;
}

validation = 0;

if(check == false)
{
    flag +=1;
    cout << "Not a valid number" << endl;
    if (flag ==5){
        break;
    }
}

else if (check ==true){

string result ="";
long long int binary;

for (int i = 0; i < hex.length (); ++i)                // converting from hex to binary, it was easier for me to do it this way
        
{
    if (hex[i] == '0')
    result.append ("0000");
    else if (hex [i] == '1')
    result.append ("0001");
    else if (hex [i] == '2')
    result.append ("0010");
    else if (hex [i] == '3')
    result.append ("0011");
    else if (hex [i] == '4')
    result.append ("0100");
    else if (hex [i]== '5')
    result.append ("0101");
    else if (hex [i]=='6')
    result.append ("0110");
    else if (hex [i]== '7')
    result.append ("0111");
    else if (hex [i]=='8')
    result.append ("1000");
    else if (hex [i]== '9')
    result.append ("1001");
    else if (hex [i]=='a' || hex [i]=='A')
    result.append ("1010");
    else if (hex [i]=='b' || hex [i]=='B')
    result.append ("1011");
    else if (hex [i]== 'c' || hex [i]=='C')
    result.append ("1100");
    else if (hex [i]== 'd' || hex [i]=='D')
    result.append ("1101");
    else if (hex [i]=='e' || hex [i]=='E')
    result.append ("1110");
    else if (hex [i]== 'f' || hex [i]=='F')
    result.append ("1111");
        
    }
      
    binary = stoi(result);

    int decimal = 0, i = 0;

    while(binary != 0)                                                               // binary to decimal using a similar implementation of the same algorithm seen ealier
    {
        decimal += (binary%10) * pow(2,i);
        ++i;
        binary/=10;
    }


    cout << endl << "====================="<< endl << endl << "Hex: " << hexa_original << endl << endl
        << "Decimal: " << decimal << endl << endl << "====================="
        << endl << "You will be returned to the main menu";
}
if(check == true){
    break;
}
}
if(flag == 5){
cout << "You ran out of attempts, you will be taken to the main menu...";       // if the user inputs invalid hex number 5 times
break;
}

break;

}

default:                                                                                            //default case to avoid errors or non-desired behavior

cout << "Confirm Close: " << endl << endl << "Are you sure you want to quit the program? (y/n)" << endl;

	cin >> quit_or_not;

	if(quit_or_not == 'y'){
		cout << "Bye! ";
		
		return 0;

	}

	else{
		cout << "You will be return to the menu" << endl << endl << endl;
            break;
		}
    }

}while (true);

return 0;

}
