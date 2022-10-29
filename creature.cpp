#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class World 
{
    public:
        float create;

    private:
        void createCreature()
        {

        }
        void createFood()
        {

        }
};

class Creature: public Actions
{
    public:
        int hunger;
        int health;

    private:
        void die()
        {

        }
        void reproduce()
        {

        }
        void move()
        {

        }
        int eat()
        {
            return 0;
        }
        int getHealth()
        {
            return 0;
        }
};

class Food
{   
    public:
        int goodFood;
        float badFood;

    private:
        int getGoodFood()
        {
            return 0;
        }
        float getBadFood()
        {
            return 0.0;
        }
};

class Actions
{
    public:
        void die();
        void reproduce();
        void eat();
        void move();

};

int main()
{
    return 0;
}