/*
#include <bits/stdc++.h>
using namespace std;

void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}
void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}
void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  int n = s.length();
  string final_s;
  for(int i =0; i<n; i++){
      if(i+2<n && s[i] == 'W' && s[i+1] =='U' && s[i+2] == 'B') {
          i +=2;
          final_s+=" ";
      }
      else{
          final_s+=s[i];
      }
  }
  trim(final_s);
  cout << final_s;

  return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
    string dubstep;
    cin>>dubstep;
    string original;
    int n = dubstep.length();
    // A flag to keep track of whether we are currently in a word
    bool inWord = false;
    for (int i = 0; i < n; i++) {
        // Check if the current position contains the "WUB" phrase
        if (dubstep[i] == 'W' && dubstep[i + 1] == 'U' && dubstep[i + 2] == 'B') {
            // Move the index to skip it
            i += 2;
            // Check if we were previously in a word
            if (inWord) {
                // If so, add a space to separate words
                original.push_back(' ');
                // Update the flag to indicate that we are not in a word anymore
                inWord = false;
            }
        }
        else {
            // If the current position does not contain "WUB", it is part of a word
            original.push_back(dubstep[i]);
            // Update the flag to indicate that we are in a word
            inWord = true;
        }
    }
    cout<<original<<endl;
    return 0;
}
