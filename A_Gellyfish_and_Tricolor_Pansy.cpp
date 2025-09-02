#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Calculate rounds needed for each scenario
        // Gellyfish's knight needs 'b' rounds to kill Flower directly
        long long gellyfish_kill_flower = b;
        
        // Flower's knight needs 'a' rounds to kill Gellyfish directly  
        long long flower_kill_gellyfish = a;
        
        // Gellyfish's knight needs 'd' rounds to kill Flower's knight
        long long gellyfish_kill_flower_knight = d;
        
        // Flower's knight needs 'c' rounds to kill Gellyfish's knight
        long long flower_kill_gellyfish_knight = c;
        
        // Convert to actual turn numbers (considering turn order)
        // Gellyfish acts on turns 1, 3, 5, ... (odd turns)
        // So Gellyfish needs (2*rounds - 1) actual turns to complete 'rounds' actions
        long long gellyfish_turns_to_kill_flower = 2 * gellyfish_kill_flower - 1;
        long long gellyfish_turns_to_kill_flower_knight = 2 * gellyfish_kill_flower_knight - 1;
        
        // Flower acts on turns 2, 4, 6, ... (even turns)  
        // So Flower needs (2*rounds) actual turns to complete 'rounds' actions
        long long flower_turns_to_kill_gellyfish = 2 * flower_kill_gellyfish;
        long long flower_turns_to_kill_gellyfish_knight = 2 * flower_kill_gellyfish_knight;
        
        // Determine minimum turns for each player to win
        long long gellyfish_min_turns = min(gellyfish_turns_to_kill_flower, 
                                          gellyfish_turns_to_kill_flower_knight);
        long long flower_min_turns = min(flower_turns_to_kill_gellyfish,
                                       flower_turns_to_kill_gellyfish_knight);
        
        // Winner is whoever can win in fewer turns
        if (gellyfish_min_turns <= flower_min_turns) {
            cout << "Gellyfish" << endl;
        } else {
            cout << "Flower" << endl;
        }
    }
    
    return 0;
}