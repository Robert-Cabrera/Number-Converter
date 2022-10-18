#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <sstream>

using namespace std;

int main()
{

    // varibales
    int mainMenu;
    string Menu1;
    string Conversion;
    char Number;
    int length = Conversion.size();
    int StringtoNum;
    bool bigWhile = true;
    string input;
    int counter = 0;

    long int decimal;
    int base;
    int digit;
    int colors;
    string final = "";
    int Numbers1;
    string rev = "";

    // Main Menu
    do
    {
        cout << "===========================================" << endl;
        cout << "Number System Conversion ==================" << endl;
        cout << "===========================================" << endl;
        cout << "CHOOSE YOUR SOURCE NUMBER SYSTEM: " << endl;
        cout << "(2) BINARY" << endl;
        cout << "(3) TERNARY" << endl;
        cout << "(4) QUATERNARY" << endl;
        cout << "(5) QUINARY" << endl;
        cout << "(6) SENARY" << endl;
        cout << "(7) SEPTENARY" << endl;
        cout << "(8) OCTAL" << endl;
        cout << "(9) NONARY" << endl;
        cout << "(10) DECIMAL" << endl;
        cout << "(16) HEXADECIMAL" << endl;
        cout << "INPUT 0 TO EXIT THE PROGRAM." << endl;
        cout << "============================================" << endl;

        cin >> mainMenu;

        // switch statements for 2-9
        switch (mainMenu)
        { //
        case (2):
        case (3):
        case (4):
        case (5):
        case (6):
        case (7):
        case (8):
        case (9):
            cout << "===========================================" << endl;
            cout << "Source Number System : " << mainMenu << " ===================" << endl;
            cout << "===========================================" << endl;
            cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:" << endl;
            cin >> Menu1;
            if (Menu1 == "2")
            {
                StringtoNum = 2;
            }
            else if (Menu1 == "3")
            {
                StringtoNum = 3;
            }

            else if (Menu1 == "4")
            {
                StringtoNum = 4;
            }

            else if (Menu1 == "5")
            {
                StringtoNum = 5;
            }

            else if (Menu1 == "6")
            {
                StringtoNum = 6;
            }

            else if (Menu1 == "7")
            {
                StringtoNum = 7;
            }

            else if (Menu1 == "8")
            {
                StringtoNum = 8;
            }

            else if (Menu1 == "9")
            {
                StringtoNum = 9;
            }

            else if (Menu1 == "10")
            {
                StringtoNum = 10;
            }

            else if (Menu1 == "16")
            {
                StringtoNum = 16;
            }

            else
            {
                break;
            }
            switch (StringtoNum)
            {
            case (2):
                cout << "(2) BINARY" << endl;
                break;
            case (3):
                cout << "(3) TERNARY" << endl;
                break;
            case (4):
                cout << "(4) QUATERNARY" << endl;
                break;
            case (5):
                cout << "(5) QUINARY" << endl;
                break;
            case (6):
                cout << "(6) SENARY" << endl;
                break;
            case (7):
                cout << "(7) SEPTENARY" << endl;
                break;
            case (8):
                cout << "(8) OCTAL" << endl;
                break;
            case (9):
                cout << "(9) NONARY" << endl;
                break;
            case (10):
                cout << "(10) DECIMAL" << endl;
                break;
            case (16):
                cout << "(16) HEXADECIMAL" << endl;
                break;
            }
            cout << "INPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
            cout << "===========================================" << endl;
            
            if (StringtoNum != 10 )
            {

                cout << "===========================================" << endl;
                cout << "Confirm Close =============================" << endl;
                cout << "===========================================" << endl;
                cout << "ARE YOU SURE YOU WANT TO QUIT THE PRO-" << endl;
                cout << "GRAM?(Y/N)" << endl;
                cin >> Number;
                if (Number == 'Y')
                {
                    cout << "BYE!" << endl;
                    bigWhile = false;
                }
                else
                {
                    cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
                }
                cout << "===========================================" << endl;
            }

            // Conversions 2-9 to decimal
            else
            {
                cout << "===========================================================" << endl;
                cout << "Source Number System : " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                cout << "INPUT YOUR NUMBER IN SOURCE NUMBER SYSTEM:" << endl;
                if (mainMenu == 2)
                {
                    cout << "BINARY: ";
                    cin >> Conversion;
                    length = Conversion.size();
                    decimal = 0;
                    base = 2;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 3)
                {
                    cout << "TERNARY: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 3;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 4)
                {
                    cout << "QUATERNARY: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 4;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 5)
                {
                    cout << "QUINARY: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 5;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 6)
                {
                    cout << "SENARY: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 6;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 7)
                {
                    cout << "SEPTENARY: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 7;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 8)
                {
                    cout << "OCTAL: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 8;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }

                else if (mainMenu == 9)
                {
                    cout << "NONARY: ";
                    cin >> Conversion;
                    length = Conversion.size();

                    decimal = 0;
                    base = 9;
                    digit;

                    for (int i = 0; i < Conversion.size(); i++)
                    {

                        digit = Conversion.at(i) - '0';

                        decimal += digit * pow(base, length - i - 1);
                    }

                    cout << "DECIMAL: " << decimal << endl;
                }
                cout << "YOU WILL BE RETURNED TO MAIN MENU." << endl;
                cout << "===========================================================" << endl;

                break;

                // target number system menu
            case (10):
                cout << "===========================================" << endl;
                cout << "Source Number System : " << mainMenu << " ===================" << endl;
                cout << "===========================================" << endl;
                cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:" << endl;
                cout << "(2) BINARY" << endl;
                cout << "(3) TERNARY" << endl;
                cout << "(4) QUATERNARY" << endl;
                cout << "(5) QUINARY" << endl;
                cout << "(6) SENARY" << endl;
                cout << "(7) SEPTENARY" << endl;
                cout << "(8) OCTAL" << endl;
                cout << "(9) NONARY" << endl;
                cout << "(16) HEXADECIMAL" << endl;
                cout << "INPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
                cout << "============================================" << endl;

                cin >> Menu1;
                if (Menu1 == "2")
                {
                    StringtoNum = 2;
                }
                else if (Menu1 == "3")
                {
                    StringtoNum = 3;
                }

                else if (Menu1 == "4")
                {
                    StringtoNum = 4;
                }

                else if (Menu1 == "5")
                {
                    StringtoNum = 5;
                }

                else if (Menu1 == "6")
                {
                    StringtoNum = 6;
                }

                else if (Menu1 == "7")
                {
                    StringtoNum = 7;
                }

                else if (Menu1 == "8")
                {
                    StringtoNum = 8;
                }

                else if (Menu1 == "9")
                {
                    StringtoNum = 9;
                }

                else if (Menu1 == "16")
                {
                    StringtoNum = 16;
                }

                // conversions from decimal to 2-9 and 16

                if (StringtoNum == 2 || StringtoNum == 3 || StringtoNum == 4 || StringtoNum == 5 || StringtoNum == 6 || StringtoNum == 7 || StringtoNum == 8 || StringtoNum == 9 || StringtoNum == 16)
                {

                    switch (StringtoNum)
                    {
                    case (2):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 2;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "BINARY: " << rev << endl;
                        break;
                    case (3):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 3;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "TERNARY: " << rev << endl;
                        break;
                    case (4):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 4;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "QUATERNARY: " << rev << endl;
                        break;
                    case (5):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 5;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "QUINARY: " << rev << endl;
                        break;
                    case (6):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 6;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "SENARY: " << rev << endl;
                        break;
                    case (7):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 7;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "SEPTENARY: " << rev << endl;
                        break;
                    case (8):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 8;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "OCTAL: " << rev << endl;
                        break;
                    case (9):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        cin >> colors;
                        base = 9;

                        while (colors != 0)
                        {
                            Numbers1 = colors % base;
                            final += to_string(Numbers1);
                            colors = colors / base;
                        }

                        for (int i = final.length() - 1; i >= 0; i--)
                        {
                            rev = rev + final.at(i);
                        }

                        cout << "NONARY: " << rev << endl;
                        break;

                    case (16):
                        cout << "===========================================================" << endl;
                        cout << "Source Number System: " << mainMenu << ", Target Number System: " << StringtoNum << " ========" << endl;
                        cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                        cout << "DECIMAL: ";
                        int i;
                        int Letters2;
                        string hexLife;
                        long totalDecimal;
                        cin >> totalDecimal;

                        for (i = 0; totalDecimal != 0; i++)
                        {

                            Letters2 = totalDecimal % 16;

                            if (Letters2 > 10)
                            {
                                hexLife += Letters2 + 55;
                            }
                            else
                            {
                                hexLife += Letters2 + 48;
                            }
                            totalDecimal = totalDecimal / 16;
                        }

                        cout << "HEXADECIMAL: " << hexLife << endl;

                        break;

                        // error red boxes
                    }
                    cout << "YOU WILL BE RETURNED TO MAIN MENU." << endl;
                    cout << "===========================================================" << endl;
                }

                else
                {
                    cout << "===========================================" << endl;
                    cout << "Confirm Close =============================" << endl;
                    cout << "===========================================" << endl;
                    cout << "ARE YOU SURE YOU WANT TO QUIT THE PRO-" << endl;
                    cout << "GRAM?(Y/N)" << endl;
                    cin >> Number;
                    if (Number == 'Y')
                    {
                        cout << "BYE!" << endl;
                        bigWhile = false;
                    }
                    else
                    {
                        cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
                    }
                    cout << "===========================================" << endl;
                }
            }

            break;

            // conversion from hexidecimal to octal and hexidecimal to decimal

        case (16):
            bool flag;
            int menuHexa;

            cout << "===========================================" << endl;
            cout << "Source Number System : " << mainMenu << " ===================" << endl;
            cout << "===========================================" << endl;
            cout << "CHOOSE YOUR TARGET NUMBER SYSTEM:" << endl;
            cout << "(8) OCTAL" << endl;
            cout << "(10) DECIMAL" << endl;
            cout << "INPUT ANY OTHER VALUE TO QUIT THE PROGRAM." << endl;
            cout << "============================================" << endl;

            cin >> menuHexa;

            if (menuHexa == 8)
            {

                cout << "===========================================================" << endl;
                cout << "Source Number System: " << mainMenu << ", Target Number System: " << menuHexa << " ========" << endl;

                do
                {

                    cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                    cout << "HEXIDECIMAL: ";
                    cin >> input;

                    for (int i = 0; i < input.size(); i++)
                    {

                        if (!isxdigit(input.at(i)))
                        {
                            flag = false;
                        }

                        else
                        {
                            flag = true;
                        }
                    }

                    if (flag == false)
                    {

                        counter++;
                        cout << "NOT A VALID NUMBER! TRY AGAIN: " << endl;
                    }

                    else if (flag == true)
                    {

                        string variable = "";
                        base = 2;
                        int deciNum;

                        for (int i = 0; i < input.size(); i++)
                        {
                            if ('a' <= input.at(i) && input.at(i) <= 'f')
                            {
                                digit = input.at(i) - 'a' + 10;
                            }
                            else if ('A' <= input.at(i) && input.at(i) <= 'F')
                            {
                                digit = input.at(i) - 'A' + 10;
                            }
                            else
                            {
                                digit = input.at(i) - '0';
                            }

                            deciNum += digit * pow(16, input.size() - i - 1);
                        }

                        string result = "";
                        int nums = 0;
                        long long int binary;

                        while (deciNum != 0)
                        {
                            nums = deciNum % base;
                            result += to_string(nums);
                            deciNum = deciNum / base;
                        }

                        int n = result.size();
                        rev = result;

                        for (int i = 0; i < n / 2; i++)
                        {
                            swap(rev[i], rev[n - i - 1]);
                        }

                        binary = stoi(rev);

                        int octalNumber = 0, temp = 0, i = 0;

                        while (binary != 0)
                        {
                            temp += (binary % 10) * pow(2, i);
                            ++i;
                            binary /= 10;
                        }

                        i = 1;

                        while (temp != 0)
                        {
                            octalNumber += (temp % 8) * i;
                            temp /= 8;
                            i *= 10;
                        }

                        cout << "OCTAL: " << octalNumber << endl;

                        cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
                        break;
                    }

                } while (counter < 5);

                if (flag == false)
                {

                    cout << "YOU WILL BE RETURNED TO THE MAIN MENU" << endl;
                }

                else if (flag == true)
                {
                }
            }

            else if (menuHexa == 10)
            {

                cout << "===========================================================" << endl;
                cout << "Source Number System: " << mainMenu << ", Target Number System: " << menuHexa << " ========" << endl;

                do
                {

                    cout << "INPUT YOUR NUMBER IN SOURCE BASE:" << endl;
                    cout << "HEXIDECIMAL: ";
                    cin >> input;

                    for (int i = 0; i < input.size(); i++)
                    {

                        if (!isxdigit(input.at(i)))
                        {
                            flag = false;
                        }

                        else
                        {
                            flag = true;
                        }
                    }

                    if (flag == false)
                    {

                        counter++;
                        cout << "NOT A VALID NUMBER! TRY AGAIN: " << endl;
                    }

                    else if (flag == true)
                    {

                        int deciNum;
                        int base = 16;
                        int digit = 0;

                        for (int i = 0; i < input.size(); i++)
                        {
                            if ('a' <= input.at(i) && input.at(i) <= 'f')
                            {
                                digit = input.at(i) - 'a' + 10;
                            }
                            else if ('A' <= input.at(i) && input.at(i) <= 'F')
                            {
                                digit = input.at(i) - 'A' + 10;
                            }
                            else
                            {
                                digit = input.at(i) - '0';
                            }
                            deciNum += digit * pow(base, input.size() - i - 1);
                        }
                        cout << "DECIMAL: " << deciNum << endl;

                        cout << "YOU WILL BE RETURNED TO THE MAIN MENU. " << endl;
                        break;
                    }

                } while (counter < 4);

                if (flag == false)
                {

                    cout << "YOU WILL BE RETURNED TO THE MAIN MENU" << endl;
                }

                else if (flag == true)
                {
                }
            }

            // error red boxes

            else
            {

                cout << "===========================================" << endl;
                cout << "Confirm Close =============================" << endl;
                cout << "===========================================" << endl;
                cout << "ARE YOU SURE YOU WANT TO QUIT THE PRO-" << endl;
                cout << "GRAM?(Y/N)" << endl;
                cin >> Number;
                if (Number == 'Y')
                {
                    cout << "BYE!" << endl;
                    bigWhile = false;
                }
                else
                {
                    cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
                }
                cout << "===========================================" << endl;
            }

            break;

        // error red box for the main menu
        default:

            cout << "===========================================" << endl;
            cout << "Confirm Close =============================" << endl;
            cout << "===========================================" << endl;
            cout << "ARE YOU SURE YOU WANT TO QUIT THE PRO-" << endl;
            cout << "GRAM?(Y/N)" << endl;
            cin >> Number;
            if (Number == 'Y')
            {
                cout << "BYE!" << endl;
                bigWhile = false;
            }
            else
            {
                cout << "YOU WILL BE RETURNED TO THE MAIN MENU." << endl;
            }
            cout << "===========================================" << endl << endl;

            break;
        }

    }

    while (bigWhile = true);

    return 0;
}
