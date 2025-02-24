//12345
sort(vector.begin(), vector.end());

//54321
sort(vector.begin(), vector.end(), greater<int>());

//54321
sort(vector.rbegin(), vector.rend());


// abc abce abced b bad
vector<string> s = {"abc", "abced", "abce" , "bad", "b"};
sort(s.begin(), s.end());

