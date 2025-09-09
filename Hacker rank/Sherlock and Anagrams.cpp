#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int checkAnagram( string sub1, string sub2) {
    int flag = 0;
    int count1[26] = {0};
    int count2[26] = {0};
    for (int i = 0; i < sub1.size(); i++)
        count1[sub1.at(i) - 'a']++;
    for (int i = 0; i < sub2.size(); i++)
        count2[sub2.at(i) - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i])
            return 0;
    }
    return 1;
}

int sherlockAndAnagrams(string s) {
    int offset = 0; int count = 0;
    string sub1, sub2;
    for (int len = 1; len <= s.size(); len++) {
        for (int i = 0; i < s.size()-len; i++) {
            sub1 = s.substr(i, len);
            for (int j = i+1; j < s.size()-len+1; j++) {
                sub2 = s.substr(j, len);
                if (checkAnagram(sub1, sub2) == 1)
                    count ++;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
