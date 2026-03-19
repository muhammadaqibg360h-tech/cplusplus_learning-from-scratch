#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


void shuffle(int deck[][13]){
    
    int rows, columns, card;
    
    for (card=1; card<=52; card++){
        
        do{
            rows=rand()%4;
            columns=rand()%13;
            
        }while (deck[rows][columns]!=0);
        
        deck[rows][columns]=card;
    }
    
}

void deal(int deck[][13], const char *face[], const char*suit[] ){
    
    int rows, columns, card;
    
    for(card=1; card<=52; card++){
        for(rows=0; rows<=3; rows++){
            for(columns=0; columns<=12; columns++){
                if(deck[rows][columns] ==card){
                    
                    cout<<card<< ". "<<face[columns]<<" of "<<suit[rows]<<endl;
                }
            }
        }
    }
}




int main(){
    
    const char *suit[4]={"heart", "diamonds", "clubs", "spades"};
    const char *face[13]={"ace", "duce", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};
    
    int deck[4][13]={0};
    
    srand(time(0));
    
    
    shuffle(deck);
    deal(deck, face,suit);
    
    
    
    
    
    
}
