#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void shuffle(int deck[][13]){
    int rows, columns, cards;
    
    for(cards=1; cards<=52; cards++){
    
    do{
        rows=rand()%4;
        columns=rand()%13;
    }while(deck[rows][columns]!=0);
    
    deck[rows][columns]=cards;
}
}

 
void deal(int deck[][13], const char*suit[], const char*face[]){
    
    int rows, columns, card;
    
    for(card=1; card<=52; card++){
        for(rows=0; rows<=3; rows++){
            for(columns=0; columns<=12; columns++){
                if(deck[rows][columns]==card){
                    cout<<card<< ". " <<face[columns]<<" of "<<suit[rows]<<endl;
                }
            }
        }
    }
}





int main(){
    
    const char*suit[4]={"hearts", "diamonds", "clubs", "spades" };
    const char*face[13]={"Ace", "two", "three", "four", "five", "six", "seven","eight","nine","ten","Jack","Queen", "King"};
    int deck[4][13]={0};
    
    srand(time(0));
    
    shuffle(deck);
    deal(deck, suit, face);
    
    
    
   
    
}


