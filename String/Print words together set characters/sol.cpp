
//https://www.geeksforgeeks.org/print-words-together-set-characters/

#include <bits/stdc++.h>
using namespace std;

void solve(string words[],int n){
    
    int i;
    unordered_map<string,vector<int>> v;
    for(i=0;i<n;i++){
        bool ar[26]={false};
        for(int j=0;j<words[i].size();j++){
            ar[words[i][j]-'a']=true;
        }
        string key = "";
        for(int j=0;j<26;j++){
            if(ar[j])
            key = key + '1';
            else
            key = key + '0';
        }
        v[key].push_back(i);
    }
    for(auto i=v.begin();i!=v.end();i++){
        for(auto j=(*i).second.begin();j!=(*i).second.end();j++){
            cout<<words[*j]<<" ";
        }
        cout<<endl;
    }
    
}

int main() {
    string words[] = { "may", "student", "students", "dog", 
                 "studentssess", "god", "cat", "act", "tab", 
                 "bat", "flow", "wolf", "lambs", "amy", "yam", 
                 "balms", "looped", "poodle"};
     int n = sizeof(words)/sizeof(words[0]);
    solve(words,n);
	return 0;
}