/* 
 * File:   main.cpp
 * Author: PARTH BHOIWALA
 *
 * Created on March 29, 2015, 5:00 PM
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>    
#include <time.h>  
#include <windows.h>
#include <conio.h>

using namespace std;

#define locateFile "D:\\CSc\\Personal practice ones\\Hangman\\dictionary2.txt"      
#define maxNum 69990

void drawStand();
void drawBody();
void drawHead();
void drawHand();
void drawHand2();
void drawLeg();
void drawLeg2();
void hideInput();

int main(int argc, char** argv) {
    
  
	cout << " ENTER A WORD : ";
   /*char ch;
    string pass = "";
    ch = _getch();
	int i = 0;
	string randomWord;
	while(ch != 13){         //character 13 is enter
      pass.push_back(ch);
      cout << '*';
      randomWord[i] = _getch();
	  i++;
	}*/
	string randomWord;
	cin >> randomWord;
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
    
    
    
    
    
    
  //  cout << " randomWord is " << randomWord << endl;
    int wordSize = randomWord.length();
   // cout << "wordSize is " << wordSize << endl;
    
   // cout << " letters to win are ";
   // for (int j =0; j < wordSize; j++)
   // {
    //    cout << randomWord[j] << " - ";
    //}
    cout << endl;
    
    
    
    
    
    
    
    //****************************************
    // TIME TO PLAY WITH USER
    
    cout << " The word is:  ";
    for (int k=0;k<wordSize;k++)
    {
        cout << "__ ";
    }
    cout << endl;
    
    char guessLetter;
    
    int mistake = 0;
    int found = 0;
    char guessWord[20] = {'*', '*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
    while (mistake < 6 && found != wordSize)
    {
        cout << endl << endl;
        cout << " Guess a Letter: ";
        cin >> guessLetter;
        
        
        bool match = false;
        
        for (int b=0; b <wordSize; b++)
        {
            //cout << endl << " b = " << b << endl;
            if (guessLetter == randomWord[b])
            {
                match = true;
                found = found + 1;
                guessWord[b] = guessLetter;
                
              // break;
            } // if
           
            
           
        } // big for       
         
        for (int p=0; p < wordSize; p++)
        {                   
            cout << guessWord[p] << " ";                                      
        } // for mini
        
        
        if (match == false)
            {
                mistake = mistake + 1;
                cout << " OOPS ! BAD GUESS " << endl;
                if (mistake == 1) { drawHead(); }
                else if (mistake == 2) { drawBody();}
                else if (mistake == 3) { drawHand(); }
                else if (mistake == 4) { drawHand2(); }
                else if (mistake == 5) { drawLeg(); }
                else if (mistake == 6) { drawLeg2(); }
                
                //cout << endl << " OOPS ! YOU GOT THAT WRONG. MISTAKE NO: " << mistake << endl;  
                //break;
            }
            
            
            
        
        
    } // while
    
    
    
    
    
    
    return 0;
}



void drawStand(){
   cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 
    
}

void drawHead(){
    cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 
    
}

void drawBody(){
    cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 
    
    
}





void drawHand(){
     cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |   /|  "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl;
       
}

void drawHand2(){
    cout<<endl<<endl 
   <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |   /|\\ "<<endl 
   <<"   |       "<<endl 
   <<"   |       "<<endl 
   <<"  ============="<<endl<<endl; 
        
}

void drawLeg() {
    cout<<endl<<endl 
    <<"   +----+  "<<endl 
   <<"   |    |  "<<endl 
   <<"   |    O  "<<endl 
   <<"   |   /|\\ "<<endl 
   <<"   |     \\ "<<endl 
   <<"   |       "<<endl 
   <<"  ============"<<endl<<endl; 
}

void drawLeg2() {
   cout<<endl<<endl 
    <<"   +----+     "<<endl 
   <<"   |    |     "<<endl 
   <<"   |    O     "<<endl 
   <<"   |   /|\\   "<<endl 
   <<"   |   / \\   "<<endl 
   <<"   |Game Over "<<endl 
   <<"  ============"<<endl<<endl; 
    
}










