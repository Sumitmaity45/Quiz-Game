// A basic quiz game where some questions are given, and your task is to answer the question. It shows whether your answer is correct or not and show the final result.
#include<iostream>
void start_quiz();
void end_quiz(int score);
using namespace std;
void start_quiz()
{
    char answer;
    int score=0;
    // ===== Questions starts here =====
    cout<<"\n1) Identify the correct extension of the user-defined header file in C++: "<<endl;
    cout<<"\nA) .cpp"<<endl;
    cout<<"B) .hg"<<endl;
    cout<<"C) .h"<<endl;
    cout<<"D) .hf"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='C')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n2) Identify the incorrect constructor type: "<<endl;
    cout<<"\nA) Friend constructor"<<endl;
    cout<<"B) Default constructor"<<endl;
    cout<<"C) Parameterized constructor"<<endl;
    cout<<"D) Copy constructor"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='A')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n3) C++ uses which approach?: "<<endl;
    cout<<"\nA) right-left"<<endl;
    cout<<"B) top-down"<<endl;
    cout<<"C) left-right"<<endl;
    cout<<"D) bottom-up"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='D')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n4) Which of the following data type is supported in C++ but not in C?: "<<endl;
    cout<<"\nA) int"<<endl;
    cout<<"B) bool"<<endl;
    cout<<"C) double"<<endl;
    cout<<"D) float"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='B')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n5) Identify the correct syntax for declaring arrays in C++: "<<endl;
    cout<<"\nA) array arr[10]"<<endl;
    cout<<"B) array{10}"<<endl;
    cout<<"C) int arr[10]"<<endl;
    cout<<"D) int arr"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='C')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n6) Size of wchat_t is: "<<endl;
    cout<<"\nA) 2"<<endl;
    cout<<"B) 4"<<endl;
    cout<<"C) 2 or 4"<<endl;
    cout<<"D) Depends on number of bits in system"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='D')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n7) Which of the following is 'address of operator'?: "<<endl;
    cout<<"\nA) *"<<endl;
    cout<<"B) &"<<endl;
    cout<<"C) []"<<endl;
    cout<<"D) &&"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='B')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n8) Identify the correct example for a pre-increment operator: "<<endl;
    cout<<"\nA) ++n"<<endl;
    cout<<"B) n++"<<endl;
    cout<<"C) --n"<<endl;
    cout<<"D) +n"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='A')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n9) Which of the following loops is best when we know the number of iteration?: "<<endl;
    cout<<"\nA) while loop"<<endl;
    cout<<"B) do while"<<endl;
    cout<<"C) for loop"<<endl;
    cout<<"D) All of the above"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='C')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }

    cout<<"\n10) Identify the scope resolution operator: "<<endl;
    cout<<"\nA) :"<<endl;
    cout<<"B) ::"<<endl;
    cout<<"C) ?"<<endl;
    cout<<"D) None"<<endl;
    cout<<"\nPlease enter 'A' 'B' 'C' OR 'D' and press enter"<<endl;
    cin>>answer;
    if(answer=='B')
    {
        cout<<"Congrats, you are correct!"<<endl;
        score++;
    }
    else
    {
        cout<<"Oop's, you are wrong!"<<endl;
    }
    end_quiz(score);
}
void end_quiz(int score)
{
    cout<<"\nThanks for Participating"<<endl;
    cout<<"Your final score is "<<score<<" out of 10"<<endl;
}
int main()
{
    string user_input;
    cout<<"==================== Welcome to Programming Quiz ===================="<<endl;
    cout<<"\nIf you want to participate the Quiz then enter 'Play' to start: ";
    cin>>user_input;
    if(user_input=="Play")
        start_quiz();
    else
        end_quiz(0);
}
