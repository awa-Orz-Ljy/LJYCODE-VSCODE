#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;cin.ignore();
    string cardsstr;getline(cin, cardsstr);
    vector<string> cards;
    stringstream ss(cardsstr);
    string card;
    while (getline(ss, card, ',')) {
        cards.push_back(card);
    }
    string f;cin>>f;
    vector<string> leftpile(cards.begin(),cards.begin() + n);
    vector<string> rightpile(cards.begin() + n,cards.end());
    vector<string> newpile;
    for(char c : f){
        if(c == 'L'){
            newpile.insert(newpile.begin(), leftpile.front());
            leftpile.erase(leftpile.begin());
        } else {
            newpile.insert(newpile.begin(), rightpile.front());
            rightpile.erase(rightpile.begin());
        }
    }
    vector<string> alicecards;
    for(int i = 0;i < 2 * n;i += 2)alicecards.push_back(newpile[i]);
    for(const string& card : alicecards)cout<<card<<endl;
    return 0;
}