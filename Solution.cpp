#include <iostream>
#include <string>
using namespace std;

string longest_common_prefix(string strs[], int size)
{
    // if array length is 0, there is nothing to compare. Return empty string.
    if (size == 0) {
        return "";
    }

    // set prefix to first element in array
    string prefix = strs[0];

    // loop from the second element to the last index
    for (int i = 1; i < size; i++) {

        // while we cannot find the prefix at the beginning of this element
        while (strs[i].find(prefix) != 0) {
            //decrease the size of the prefix and check again
            prefix.pop_back();
        }
    }
    return prefix;
}
int main() 
{
    string array_one[] = {"flower", "flow", "flight" };
    string array_two[] = {"dog", "racecar", "car" };
    string array_three[] = { "alligator", "alphabetical", "altogether", "allocations", "allowance" };

    cout << "array_one : " << longest_common_prefix(array_one, sizeof(array_one) / sizeof(array_one[0])) << endl;
    cout << "array_one : " << longest_common_prefix(array_two, sizeof(array_two) / sizeof(array_two[0])) << endl;
    cout << "array_one : " << longest_common_prefix(array_three, sizeof(array_three) / sizeof(array_three[0])) << endl;

	return 0;
}