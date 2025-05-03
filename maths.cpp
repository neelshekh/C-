#include <iostream>
using namespace std;

// int main() {
//     int num1, num2, sum;

//     cout << "Enter first number: ";
//    cin >> num1;

//    cout << "Enter second number: ";
//     cin >> num2;

//     sum = num1 + num2;

//    cout << "The sum is: " << sum << std::endl;

//     return 0;
// }

//     void display ( char*);
//     void display (string);
// int main ()
// {

//     string str1;
//     char str [ 100 ];
//     cout << " Enter a string :";
//     getline (cin,str1);

//     cout << " Enter another string:";
//     cin.get( str,100,'\n');

//     display(str1);
//     display(str);

//     return 0;
// }
// void display( char s[ ])
// {

//     cout << " Entered char array is"<<  s << endl;
// }
// void display ( string s)
// {
//     cout << " Entered the string " <<  s<< endl;

// }

// 2} c++ double and float ques

// int main () {
//     double x= 3.437728399;
//     float y = 4.638892998;

//     cout << " Doubel type number = "<<  x  << endl;
//     cout << " float type number = "<<  y  << endl;
// return 0;
// }

// 3}USING SET PRECISION FOR FLOAT POINT NUMBERS

// int main() {
//     double x= 5.67388399;
//     float y= 5.73939768;

//     cout << " Set precision 7 " ;

//     cout << " Double type number  = " << x << endl;
//     cout << " Float type number = " << y << endl;
// return 0;
// }

// 4} DIFFERENT PRECISION FOR DOUBLE TYPE NUMBER

// int main () {
//     double x= 4.6383993747;
//     float y= 6.7399998;

//     cout << " Set precision for double 5";
//     cout << " set precison for float 4 ";

//     cout << " Double type number ="<< " Set precision for (5)" << endl;
//     cout << " Flaot type number ="  << " set precision for (4)"<< endl;
// return 0;
// }

// 5} DOUBLE AND SCIENTIFIC NUMBER

//  int main()  {
//     double x = 3.63574993;
//     double ex1= 83e+76;
//     float y= 7.7638829;
//     float ex2= 57e+357;

//     cout << " Displaying of fixed Output ="  << endl;
//     cout << " Double number 1="<< fixed <<  x << endl;
//     cout << " Double number 2= " <<  fixed << ex1 <<  endl;
//     cout << " Float number 1=" <<  fixed <<  y<<  endl;
//     cout << " Float number 2 =" << fixed  <<  ex2<< endl;

//     cout << " displaying of scientific output =" << endl;
//     cout << " Double number 1 =" <<  scientific  <<  x<< endl;
//     cout << "Double number 2 =" <<  scientific  <<  ex1<< endl;
//     cout << " Float number 1 =" <<   scientific  <<  y <<endl;
//     cout << " Float number 2 = " <<   scientific  <<ex2<< endl;

// return 0;
//  }

//  6} HOW TO INSERT ELEMENTS AND PRINT ARRAY ELEMENTS

// int main () {
//     int numbers [ 4 ] = { 7,4,32,35};
//     cout  << " The numbers  are :";

//     for ( int n: numbers ) {
//         cout << n << " ";
//     }

//     cout << " \n the numbers are :";

//     for ( int i =0; i < 5 ;++i ) {
//         cout << numbers[ i ] << " " ;
//     }

//     return 0;
// }

// 7} TAKE IPUTS FROM THE USER AND PUT NTO THE ARRAY

// int main() {
//     int numbers [ 5 ];
//     cout << " Enter 5 numbers :" << endl;

//     for( int i=0 ; i <5 ;++i ) {
//     cin>> numbers [ i ];
// }
// cout << " The numbers are :";
// for( int n =0; n < 5; ++n ) {
//     cout << numbers [ n ] <<  "  ";
// }
//     return ;

// 8} DISPLAY SUM AND AVERAGE OF ARRRAY ELEMENTS USING FOR LOPP

// int main() {

//     double numbers [ ] = { 23,24,45,67,78,87};

//     double sum =0;
//     double count=0;
//     double average ;

//     cout << " The numbers are :" ;

//     for ( const double &n : numbers ) {
//         cout << n << " ";

//         sum =+ n;
//         ++ count;
//     }

//     cout << " Their average =" << average << endl;

//     return 0;
// }

//  \\ C++ PROGRAMS TO DISPLAY MARKS OF 5 STUDENTS

// const int Array_Size [5];

// void display ( int m []) {
//     cout << " Displaying marks : " << endl;

//     for (int i=0; i < Array_Size ; ++1) {
//         cout << " Student " << i+1 << " : " << m [i] << endl;
//     }
// }
// int main ( ) {
//     int marks [Array_Size] = {65,67,98,56,78};
//     display (marks);
//     return 0;
// }

//   FIND A SUBSTRING IN A GIVEN STRING

// int main() {

//     string str =" MY NAME IS , NEEL SHEKHAR!";
//     cout << " String : " << str<< endl;

//     size_t first_occurence = str.find ( " SHEKHAR");

//     size_t last_occurence = str.rfind ( " NAME ");

//     if (first_occurence ! =string ::npos) {
//         cout << "First occurence: ' SHEKHAR ' found at postion: " << endl;
//         cout << " Last occurence : ' NAME ' found at position " << endl;
//     }
//     else{
//         cout  << "'SHEKHAR'not found" << endl;
//     }
//     return 0;
// }

// APPEND TO A STRING

// int main () {

//     string str = " Hello World,";
//     cout << " Before :" << str << endl;

//     str.append ( " Have a good day!");
//     cout << " After:" << str << endl;

//     return 0;
// }

//  INSERT A STRING AT A GIVEN POSITION

// int main() {
//     string str =" Hello world ,world !";
//     cout << " Before:" << str << endl;

//     str.insert ( 13," beautiful");

//     cout << "After : " << str << endl;

// return 0;
// }

//  ERASE N CHARCHTERS FROM THE GIVEN POSITION

// int main () {

//     string str =" ;Hello weorld,Beautiful world !";
//     cout << " Before :" << str << endl;

//     str .erase ( 5,7);
//     cout << "After :"<< str << endl;

//    return 0;
// }

//  REPLACE N CHARACTER WITHIN A STRING

// int main() {
//     string str=";Hello world,beautiful world!";
//     cout << " Before :" << str << endl;

//     str.replace (6,5," earth");
//     cout << " After : " << str << endl;
//     return 0;
// }

//  COMPARE STRINGS ALPHABETICALLY

// int main () {

//     string str1= " Hello world ";
//     string str2=" Hello earth";
//     string str3 =" Hello";
//     string str4=" hello this is beautiful world !";

//     cout << " string1 :"<<str1<< endl;
//     cout << " string2 :"<<str2 << endl;
//     cout << "string3 :" <<str3<< endl;
//     cout<< " string4:"<< str4<< endl;

//     cout << " comparing string 1 and string 2:" << str1.compare( string 2) << " equal"<< endl;
//     cout << " comparing string 1 and 3 :"<< str1.compare( string 3)  << str3 is smaller << endl;
//     cout << " comparing string 1 and 4 : "<< str1.compare( string 4) << str4 is longer << endl;

//     return 0 ;
//

//  C++ REFERENCE

// int main () {

//     string city= " mumbai";

//     string&ref_city =city;

//     cout << " Variable value :" <<" city"<< endl;
//     cout << " Reference value :"<< " city_mumbai"<< endl;
//     return 0;
// }

//  MODDIFY VRIBLES USING REFEENCES

// int main( ) {
//     string city =" Kolkata";

//     string &ref_city= city;

//     cout << " Variable value= " << city << endl;
//     cout << " Reference value =" << ref_city << endl;

//     ref_city = "Oman";

//     cout << endl <<" After modification :" << endl;
//     cout << " Variable value =" <<city << endl;
//     cout << " Reference value =" <<ref_city << endl;

//     return 0;
// }

//  C++ PASS BY REFERENCE

// void swap ( int & n1,int & n2 ) {

//     int temp;
//     temp=n1;
//     n1=n2;
//     n2=temp;
// }

// int main() {

//     int a=1, b=3;

//     cout <<" Before swapping" << endl;
//     cout << " a ="<< endl;
//     cout << "b =" << endl;

//     swap ( a,b);

//     cout << "\nAfter swapping"<< endl;
//     cout << "a =" << endl;
//     cout << " b =" << endl;
//     return 0;
// }

// PASS BY REFERNCE

// int add ( const int & num1 , const int & num2) {
//     return num1 + num2;
// }

// int main () {
//     int num1 ,num2 ;

//     cout << " Enter the 1st number :"<< endl;
//     cin>> number1;

//     cout << " Emter the 2nd number :"<<endl;
//     cin>> number2;

//     int sum=add (number 1,number 2);

// int main( ){

//     for ( int i=1;i<=100;++i) {
//         if ( i % 2 ==0) {
//             cout << " the number is even :"<< endl;

//         else {
//             cout << " the numbber is odd:" << endl;

//         }
//     }

// }
// }

// int main()
// {
//     int n;

//     cout << " enter a positive integer: ";
//     cin >> n;
//     for (int i = 1; i <= 10; ++i)
//     {

//         cout << n << " * " << i << " = " << n * i << endl;
//     }
//     return 0;
// }

int main()
{
    int year;
    cout << " enter a year :";
    cin >> year;

    if (year % 4 == 0)
    {

        if (year % 100 == 0)
        {
        }
        if (year % 400 == 0)
        {

            cout << year << " is a leap year:";
        }

        else
        {
            cout << year << " is not  a leap year :";
        }
    }
    else
    {
        cout << year << " is a leap year:";
    }
}

else
{
}

cout << year << "is not a leap year:";
<< endl;

return 0;