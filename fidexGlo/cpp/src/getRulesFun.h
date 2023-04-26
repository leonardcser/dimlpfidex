using namespace std;
#include <vector>
#include <tuple>
#include <string>

extern void getRules(vector<tuple<vector<tuple<int, bool, double>>, int, int, double, double>>& rules, vector<string>& lines, vector<string>& stringRules, char* rulesFile, int nbTestAttributs);
extern void getActivatedRules(vector<int>& activatedRules, vector<tuple<vector<tuple<int, bool, double>>, int, int, double, double>>* rules, vector<double>* testValues);
