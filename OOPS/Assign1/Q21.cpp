#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

template <typename T>
class GameCharacter {
public:
    T health;
    T strength;

    GameCharacter(T initialHealth, T initialStrength)
        : health(initialHealth), strength(initialStrength) {}

    void displayStats() const {
        cout << "Health: " << health << ", Strength: " << strength << endl;
    }

    template <typename U>
    void attack(GameCharacter<U>& target) {
        cout << "Attacking..." << endl;
        srand(static_cast<unsigned>(time(0)));
        U damage = static_cast<U>(rand()) / static_cast<U>(RAND_MAX) * strength + 1;
        target.health -= damage;

        cout << "Dealt " << damage << " damage!" << endl;
        target.displayStats();

        if (target.health <= 0) {
            cout << "Enemy defeated!" << endl;
        }
    }
};

int main() {
    int num1,num2;
    cout << "Enter player health and strength: ";
    cin >> num1 >> num2;
    double num3,num4;
    cout << "Enter enemy health and strength: ";
    cin >> num3 >> num4;
    GameCharacter<int> player(num1, num2);
    GameCharacter<double> enemy(num3, num4);

    cout << "Player Stats:" << endl;
    player.displayStats();
    cout << "Enemy Stats:" << endl;
    enemy.displayStats();

    player.attack(enemy);

    return 0;
}
