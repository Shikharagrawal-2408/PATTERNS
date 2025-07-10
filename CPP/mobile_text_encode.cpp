/*
[Problem: Mobile Keypad Text Encoder]
You are given a string consisting of lowercase English letters and spaces. Your task is to convert this string into its equivalent mobile
keypad press sequence, as used in old feature phones (T9 keypad).

In these keypads, characters are typed using multiple key presses. The mapping of keys to characters is as follows:

Key	Letters	Key Presses
2	a b c	2, 22, 222
3	d e f	3, 33, 333
4	g h i	4, 44, 444
5	j k l	5, 55, 555
6	m n o	6, 66, 666
7	p q r s	7, 77, 777, 7777
8	t u v	8, 88, 888
9	w x y z	9, 99, 999, 9999
0	space	0

🔸 Input:
A single string S of length 1 ≤ |S| ≤ 1000

S contains only lowercase letters and spaces

🔸 Output:
A single string representing the sequence of digits required to type the input on a classic mobile keypad.

🔸 Example 1:
Input: adk
Output: 23355
Explanation:

'a' → 2

'd' → 3

'k' → 55

So, "adk" → "23355"

🔸 Constraints:
Only lowercase alphabets and space characters are allowed.
No special characters or digits in the input.

✅ Task:
Write a function string encodeKeypad(string S) that returns the mobile keypad sequence for the given string.
*/
/*
This program converts a given word into its corresponding keypad sequence based on the traditional mobile keypad mapping (like T9 texting on 
older phones). The getKeypadSequence function uses an unordered_map to map each lowercase alphabet and space to its respective number sequence.
For example, 'a' maps to "2", 'b' to "22", 'c' to "222", and so on, with space mapping to "0".

In the function, each character in the input string is first converted to lowercase (to support uppercase inputs) and then looked up in the map.
If it exists, its corresponding numeric sequence is appended to the result string. The main() function reads a word from input, calls the 
conversion function, and prints the final keypad sequence.

This is useful for simulating how a word would be typed on a traditional mobile numeric keypad.
*/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string getKeypadSequence(const string& input) {
    unordered_map<char, string> keypad = {
        {'a', "2"},   {'b', "22"},   {'c', "222"},
        {'d', "3"},   {'e', "33"},   {'f', "333"},
        {'g', "4"},   {'h', "44"},   {'i', "444"},
        {'j', "5"},   {'k', "55"},   {'l', "555"},
        {'m', "6"},   {'n', "66"},   {'o', "666"},
        {'p', "7"},   {'q', "77"},   {'r', "777"}, {'s', "7777"},
        {'t', "8"},   {'u', "88"},   {'v', "888"},
        {'w', "9"},   {'x', "99"},   {'y', "999"}, {'z', "9999"},
        {' ', "0"} // for space
    };

    string result = "";
    for (char ch : input) {
        ch = tolower(ch); // Convert to lowercase to handle capital letters
        if (keypad.count(ch))
            result += keypad[ch];
    }
    return result;
}

int main() {
    string word ;
cin>>word;
cout<<endl;
    cout << "Keypad sequence for '" << word << "': " << getKeypadSequence(word) << endl;
    return 0;
}
