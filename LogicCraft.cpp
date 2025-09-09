//
#include <iostream>
using namespace std;

class Calculator {
    private:
        float numa,numb;
        char sym;
    public:
        void cal(){
          cout<<"\n\n\t\t\t\t\t===== Calculator =====\n\n";
          cout<<"Enter the First Number.\n";
          cin>>numa;
          cout<<"Enter the Second Number.\n";
          cin>>numb;
          cout<<"(+,-,*,/)\n";
          cin>>sym;
        
          if(sym=='+'){
                cout<<"\n" <<"Ans = " <<numa+numb <<"\n\n" <<"By AAQ"<<"\n\n";
            }
           else if (sym=='-'){
              cout<<"\n" <<"Ans = " <<numa-numb <<"\n\n" <<"By AAQ" <<"\n\n";
           }
          else if(sym=='*'){
              cout<<"\n" <<"Ans = " <<numa*numb <<"\n\n" <<"By AAQ" <<"\n\n";
          }
            else if(sym=='/'){
                cout<<"\n" <<"Ans = " <<numa/numb <<"\n\n" <<"By AAQ"<<"/n/n";
          }
           else{
             cout<<"\nInvalid Option!\n\n" <<"By AAQ" <<"\n\n" ;
           }
        }
};

class Factorial{
    private:
        int fact,num;
    public:
    void facto(){
        fact=1;
        cout<<"\n\n\t\t\t\t\t===== Factorial =====\n\n";
        cout << "\nEnter the Number Who's Factorial you want.\n";
        cin >> num;
        for(int a=1;a<=num;a++){
            fact=fact*a;
        }
        cout<<"\nFactorial of " <<num <<" is = " << fact <<"\n\n" <<"By AAQ" <<"\n\n";
        
    }
};

class Table{
    private:
        int num;
    public:
    void tab(){
        cout<<"\n\n\t\t\t\t\t===== Table =====\n\n";
        cout<<"\nEnter the Number Who's Table you want.\n";
        cin>>num;
        for(int a= 1; a<=10 ;a++){
            cout<<"\n"<<num<<"x"<<a<<"="<<num*a;
        }
        cout <<"\n\n" <<"By AAQ." <<"\n\n";
    }
};

class Addupto{
  private:
    int num;
  public:
    void addup(){
        cout<<"\n\n\t\t\t\t\t===== Sum of Natural Numbers =====\n\n";
        cout << "Add up to:  \n";
        cin >> num;
        int nin=1;
        for(int a=1; a<=num; a++){
            if(a %2 == 0 ){
                nin += a;
            }
        }
        cout<<"\n"<<nin <<"\n\n"<<"By AAQ" <<"\n\n";
    }
};

class EvenOdd{
    private:
        int num;
    public:
        void evenodd(){
            cout << "\n\n\t\t\t\t\t===== Even / Odd Checker ======\n\n";
            cout << "Enter the Number.\n";
            cin >> num;
            if(num %2 ==0){
                cout << "\nThe number " << num << " is Even. ";
            }
            else{
                cout<<"\nThe number " << num << " is Odd. ";
            }
            cout <<"\n\n" <<"By AAQ" <<"\n\n";

    }
};

class ReverseDigits{
    private:
        int num,temp1,temp2 = 0;
    public:
        void reverse(){
            cout << "\n\n\t\t\t\t\t====== Reverse Digits of a Number =====\n\n";
            cout << "Enter the Number for Reverse digits.\n";
            cin >> num;
            
            while(num !=0){
                temp1 = num % 10;
                temp2 = temp2 * 10 + temp1;
                num = num / 10;
            }
            cout << "\n\n" << "Ans = " << temp2 <<"\n\n" << "By AAQ" <<"\n\n";
        }
};

class FindLargest {
    private:
        int arr,lar = 0,num[];
    public:
        void largest(){
            cout << "\n\n\t\t\t\t\t===== Find largest of all Numbers. =====\n\n";
            cout << "What's the amount of number you want to differ.. \n ";
            cin >> arr;
            cout << "Enter the number one-by-one ";
            for (int a=1; a<=arr; a++){
                cout << "\n";
                cin >> num[a];
            }
            for (int a = 1; a <= arr; a++){
                if (num[a] >= lar){
                    lar = num[a];
                }
            }
        
            cout << "\n\nThe Largest Numer is " << lar << "\n\n" <<"By AAQ" << "\n\n";

        }

};

class leapyear{
    private:
        int year;
    public:
        void leap(){
            cout << "\n\n\t\t\t\t\t===== Leap Year Checker =====\n\n";
            cout << "\n\nEnter the Year.\n"; 
            cin >> year;
            if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)){
                cout << "\nThe year " << year << " is a Leap Year. \n\\n" <<"By AAQ" <<"\n\n";
            }
            else{
                cout << "\nThe year is not a Leap Year.\n\n" << "By AAQ" <<"\n\n";
            }


        }
};

class GradeCalculator{
    private:
        int marks;
    public:
        void gradecalc(){
            cout << "\n\n\t\t\t\t\t ===== Grade Calculator =====\n\n";
            cout << "Enter your Marks.\n";
            cin >> marks;
            if (marks >= 90){
                cout << "\nYour Grade is A+.\n\n" <<"By AAQ" <<"\n\n";
            }
            else if (marks >= 80){
                cout << "\nYour Grade is A.\n\n" <<"By AAQ" <<"\n\n";
            }
            else if (marks >= 70){
                cout << "\nYour Grade is B.\n\n" <<"By AAQ" <<"\n\n";
            }
            else if (marks >= 60){
                cout << "\nYour Grade is C.\n\n" <<"By AAQ" <<"\n\n";
            }
            else if (marks >= 50){
                cout << "\nYour Grade is D.\n\n" <<"By AAQ" <<"\n\n";
            }
            else{
                cout << "\nYour Grade is F.\n\n" <<"By AAQ" <<"\n\n";
            }
        }
};

void ShowMenu(){
        int choice;
        do{
         cout<<"\n\t\t\t\t\t===== MENU =====\n";
         cout<<"1. Calculator (+,-,x,÷).\n";
         cout<<"2. Factorial of any Number.\n";
         cout<<"3. Table of any Number.\n";
         cout<<"4. Sum of Natural Numbers.\n";
         cout<<"5. Check Even/Odd Number.\n";
         cout<<"6. Reverse Digits of a Number.\n";
         cout<<"7. Finding largest of all Numbers.\n";
         cout<<"8. Check if a year is leap year.\n";
         cout<<"9. Grade calculator using marks.\n";
         cout<<"10. Exit.\n";
         cout<<"\nEnter your choice.\n";
         cin>>choice;
         
         switch(choice){
             case 1:{ Calculator c; c.cal(); break;}
             case 2:{ Factorial f; f.facto(); break;}
             case 3:{ Table t; t.tab(); break;}
             case 4:{ Addupto a; a.addup(); break;}
             case 5:{ EvenOdd eo; eo.evenodd(); break;}
             case 6:{ ReverseDigits rd; rd.reverse(); break;}
             case 7:{ FindLargest fl; fl.largest(); break;}
             case 8:{ leapyear ly; ly.leap(); break;}
             case 9:{ GradeCalculator gc; gc.gradecalc(); break;}
        } 
      }
        while(choice!=10);
        {
            cout<<"Exiting the Program.\n";
    }
}


int main() {
    ShowMenu();
    return 0;
}
//Build By Ayyan Ali Qasim