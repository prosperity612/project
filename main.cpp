#include <iostream>
#include <string>

class Unit {
protected:
    std::string name;
    int damage;
    int health;
public:
    Unit(std::string n, int d, int h)
        : name(n), damage(d), health(h) {};

    std::string getName() const{
        return name;
    }

    int getDamage() const{
        return damage;
    }

    int getHealth() const{
        return health;
    }

    //setters!


    void takeDamage(int dmg) {
        health -= dmg;
    }

    virtual void attack(Unit& target) {
        target.takeDamage(damage);
    }

    bool isDead() const{
        return health <= 0;
    }
};

class Player : public Unit {
// add private/protected
public:
    Player(std::string n, int d, int h)
       : Unit(n, d, h) {};
};

class Enemy : public Unit {
// add private/protected
public:
    Enemy(std::string n, int d, int h)
          : Unit(n, d, h) {};
};

int main() {
    std::cout << "Boss fight\n";


    return 0;
}