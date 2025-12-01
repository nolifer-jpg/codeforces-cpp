#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string guest_name;
    string host_name;
    string letter_pile;

    cin >> guest_name;
    cin >> host_name;
    cin >> letter_pile;

    string combined_names = guest_name + host_name;
    if (combined_names.length() != letter_pile.length()) {
        cout << "NO" << endl;
        return 0;
    }
    bool all_chars_found = true;
    for (int i = 0; i < combined_names.length(); ++i) {
        char char_to_find = combined_names[i];
        bool found_this_char = false;
        for (int j = 0; j < letter_pile.length(); ++j) {
            if (letter_pile[j] == char_to_find) {
                found_this_char = true;
                letter_pile[j] = '*';
                break;
            }
        }
        if (!found_this_char) {
            all_chars_found = false;
            break;
        }
    }
    if (all_chars_found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
