//
//  Lab IX Part II
//
//  Created by Edgar Esparza on 7/8/15.
//

#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 15;
void reverse(char word[]);

int main()
{
    char word[MAX_SIZE];
    cout << "Enter a word : ";
    cin >> word;
    cout << "You entered the word " << word << endl;
    reverse(word);
    cout << "The word in reverse order is " << word << endl;
    
}

void reverse(char word[])
{
    int length=strlen(word);
    char temp;
    for(int i=0;i<length/2;i++){
        temp=word[i];
        word[i]=word[length-i-1];
        word[length-i-1]=temp;
    }
    
}
