#include<iostream> //getline(cin, )
#include<algorithm> // sort(a.begin(), a.end(), greater<int>()) reverse(a.begin(), a.end())
#include<cmath> // pow(double x, double y)
#include<limits.h> // INT_MAX, INT_MIN
#include<vector> //push_back()
#include<string> //substr(pos, len), count(str.begin(), str.end(), ch)
#include<set> //insert()
#include<queue> //push(), pop()
#include<map>
#include<unordered_map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
static bool compare(int n1, int n2) {return n1 > n2;}

#include <sstream>
vector<string> split(string s, char delimiter) {
    vector<std::string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
   return tokens;
}

int main() {
    
    return 0;
}