namespace character
{

    enum turn
    {
        player,
        enemy
    };

    enum actions
    {
        attack,
        magic,
        block,
        nothing
    };

    class Character
    {
        public:
            Character(std::string name, int hp)
            {
                name = name;
                hp = hp;
            }

            std::string getName()
            {
                return name;
            }

            int getHp()
            {
                return hp;
            }

        private:
            std::string name;
            int hp;
    };

    class Player: public Character
    {
        public:
            Player(std::string name, int hp): Character(name, hp)
            {
            }

            actions getAction()
            {
                if (IsKeyDown(KEY_RIGHT)) 
                {
                    return attack;
                }
                else
                {
                    return nothing;
                }
            }
    };
}
