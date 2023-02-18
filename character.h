namespace character
{
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
}
